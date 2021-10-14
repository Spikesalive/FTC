// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

#include "WidgetBlueprintThumbnailScene.h"
#include "WidgetBlueprintThumbnailRenderer.h"
#include "WidgetBlueprint.h"
#include "Components/WidgetComponent.h"
#include "ContentStreaming.h"
#include "Engine/Engine.h"

FWidgetBlueprintThumbnailScene::FWidgetBlueprintThumbnailScene()
	: FPreviewScene(ConstructionValues())
{
	bForceAllUsedMipsResident = false;

	RemoveComponent((UActorComponent*)DirectionalLight);
	RemoveComponent((UActorComponent*)SkyLight);
	RemoveComponent((UActorComponent*)LineBatcher);

	WidgetComponent = NewObject<UMyWidgetComponent>();
	WidgetComponent->SetTickWhenOffscreen(true);
	AddComponent(WidgetComponent, FTransform::Identity);
}

FVector2D FWidgetBlueprintThumbnailScene::GetDesiredSize(UUserWidget* UserWidget) const
{
	//WidgetComponent->TickComponent(0.0f, ELevelTick::LEVELTICK_PauseTick, nullptr);
	FVector2D DesiredSize = UserWidget->GetDesiredSize();
	if (DesiredSize.X == 0)
		DesiredSize.X = 1920;
	if (DesiredSize.Y == 0)
		DesiredSize.Y = 1080;
	return DesiredSize;
}

void FWidgetBlueprintThumbnailScene::GetPreviewAreaAndSize(UUserWidget* UserWidget, FVector2D& Area, FVector2D& Size, uint32 PreviewWidth, uint32 PreviewHeight) const
{
	if (UserWidget == nullptr)
	{
		Area = FVector2D(PreviewWidth, PreviewHeight);
		Size = FVector2D(PreviewWidth, PreviewHeight);
		return;
	}

	switch (UserWidget->DesignSizeMode)
	{
	case EDesignPreviewSizeMode::Custom:
		Area = UserWidget->DesignTimeSize;
		// If the custom size is 0 in some dimension, use the desired size instead.
		if (Area.X == 0 || Area.Y == 0)
		{
			FVector2D DesiredSize = GetDesiredSize(UserWidget);
			if (Area.X == 0)
				Area.X = DesiredSize.X;
			if (Area.Y == 0)
				Area.Y = DesiredSize.Y;
		}
		Size = Area;
		return;
	case EDesignPreviewSizeMode::CustomOnScreen:
		Area = FVector2D(PreviewWidth, PreviewHeight);
		Size = UserWidget->DesignTimeSize;
		// If the custom size is 0 in some dimension, use the desired size instead.
		if (Size.X == 0 || Size.Y == 0)
		{
			FVector2D DesiredSize = GetDesiredSize(UserWidget);
			if (Size.X == 0)
				Size.X = DesiredSize.X;
			if (Size.Y == 0)
				Size.Y = DesiredSize.Y;
		}
		return;
	case EDesignPreviewSizeMode::Desired:
		Area = GetDesiredSize(UserWidget);
		Size = Area;
		return;
	case EDesignPreviewSizeMode::DesiredOnScreen:
		Area = FVector2D(PreviewWidth, PreviewHeight);
		Size = GetDesiredSize(UserWidget);
		return;
	case EDesignPreviewSizeMode::FillScreen:
		Area = FVector2D(PreviewWidth, PreviewHeight);
		Size = Area;
		return;
	}
}

void FWidgetBlueprintThumbnailScene::SetWidgetBlueprint(UWidgetBlueprint* WidgetBlueprint, uint32 Width, uint32 Height)
{
	if (WidgetBlueprint)
	{
		UClass* WidgetClass = WidgetBlueprint->GeneratedClass;

		// Skip abstract and deprecated classes
		EClassFlags ClassFlags = WidgetClass->GetClassFlags();
		if (ClassFlags & (EClassFlags::CLASS_Abstract | EClassFlags::CLASS_Deprecated))
			return;

		WidgetComponent->SetWidgetClass(WidgetClass);

		UUserWidget* NewWidget = CreateWidget(GetWorld(), WidgetClass);
		NewWidget->SetDesignerFlags((EWidgetDesignFlags)(EWidgetDesignFlags::Designing | EWidgetDesignFlags::ExecutePreConstruct)); // | EWidgetDesignFlags::ShowOutline

		//UTexture2D* PreviewBackground = NewWidget->PreviewBackground;

		FVector2D Area, Size;
		GetPreviewAreaAndSize(NewWidget, Area, Size, 1920, 1080);
		WidgetComponent->SetDrawSize(Size);
		WidgetComponent->SetWidget(NewWidget);
		WidgetComponent->TickComponent(0.0f, ELevelTick::LEVELTICK_PauseTick, nullptr);


		// Lame, but do it one more time because desired size can now be computed correctly (although still seeing some flickering sizes)
		FVector2D Area2, Size2;
		GetPreviewAreaAndSize(NewWidget, Area2, Size2, 1920, 1080);
		WidgetComponent->SetDrawSize(Size2);
		//WidgetComponent->SetWidget(NewWidget);
		//WidgetComponent->TickComponent(0.0f, ELevelTick::LEVELTICK_PauseTick, nullptr);

		//WidgetComponent->SetDrawAtDesiredSize(NewWidget->DesignSizeMode == EDesignPreviewSizeMode::Desired);
		WidgetComponent->Clear();
		WidgetComponent->Draw();

		GEngine->ForceGarbageCollection(true);
	}
	else
	{
		WidgetComponent->SetWidget(nullptr);
		WidgetComponent->SetWidgetClass(nullptr);
	}
}

void FWidgetBlueprintThumbnailScene::GetView(FSceneViewFamily* ViewFamily, int32 X, int32 Y, uint32 SizeX, uint32 SizeY) const
{
	check(ViewFamily);

	FIntRect ViewRect(
		FMath::Max<int32>(X, 0),
		FMath::Max<int32>(Y, 0),
		FMath::Max<int32>(X + SizeX, 0),
		FMath::Max<int32>(Y + SizeY, 0));

	if (ViewRect.Width() > 0 && ViewRect.Height() > 0)
	{
		const float FOVDegrees = 30.f;
		const float HalfFOVRadians = FMath::DegreesToRadians<float>(FOVDegrees) * 0.5f;
		static_assert((int32)ERHIZBuffer::IsInverted != 0, "Check NearPlane and Projection Matrix");
		const float NearPlane = 1.0f;
		FMatrix ProjectionMatrix = FReversedZPerspectiveMatrix(
			HalfFOVRadians,
			1.0f,
			1.0f,
			NearPlane
		);

		FVector Origin(0);
		float OrbitPitch = 0;
		float OrbitYaw = 0;
		float OrbitZoom = 0;
		GetViewMatrixParameters(FOVDegrees, Origin, OrbitPitch, OrbitYaw, OrbitZoom);

		// Ensure a minimum camera distance to prevent problems with really small objects
		const float MinCameraDistance = 48;
		OrbitZoom = FMath::Max<float>(MinCameraDistance, OrbitZoom);

		const FRotator RotationOffsetToViewCenter(0.f, 90.f, 0.f);
		FMatrix ViewRotationMatrix = FRotationMatrix(FRotator(0, OrbitYaw, 0)) *
			FRotationMatrix(FRotator(0, 0, OrbitPitch)) *
			FTranslationMatrix(FVector(0, OrbitZoom, 0)) *
			FInverseRotationMatrix(RotationOffsetToViewCenter);

		ViewRotationMatrix = ViewRotationMatrix * FMatrix(
			FPlane(0, 0, 1, 0),
			FPlane(1, 0, 0, 0),
			FPlane(0, 1, 0, 0),
			FPlane(0, 0, 0, 1));

		Origin -= ViewRotationMatrix.InverseTransformPosition(FVector::ZeroVector);
		ViewRotationMatrix = ViewRotationMatrix.RemoveTranslation();

		FSceneViewInitOptions ViewInitOptions;
		ViewInitOptions.ViewFamily = ViewFamily;
		ViewInitOptions.SetViewRectangle(ViewRect);
		ViewInitOptions.ViewOrigin = -Origin;
		ViewInitOptions.ViewRotationMatrix = ViewRotationMatrix;
		ViewInitOptions.ProjectionMatrix = ProjectionMatrix;
		ViewInitOptions.BackgroundColor = FLinearColor(0.04, 0.04, 0.04);

		FSceneView* NewView = new FSceneView(ViewInitOptions);

		ViewFamily->Views.Add(NewView);

		// Tell the texture streaming system about this thumbnail view, so the textures will stream in as needed
		// NOTE: Sizes may not actually be in screen space depending on how the thumbnail ends up stretched by the UI.  Not a big deal though.
		// NOTE: Textures still take a little time to stream if the view has not been re-rendered recently, so they may briefly appear blurry while mips are prepared
		// NOTE: Content Browser only renders thumbnails for loaded assets, and only when the mouse is over the panel. They'll be frozen in their last state while the mouse cursor is not over the panel.  This is for performance reasons
		IStreamingManager::Get().AddViewInformation(Origin, SizeX, SizeX / FMath::Tan(FOVDegrees));
	}
}

void FWidgetBlueprintThumbnailScene::GetViewMatrixParameters(const float InFOVDegrees, FVector& OutOrigin, float& OutOrbitPitch, float& OutOrbitYaw, float& OutOrbitZoom) const
{
	FVector2D DrawSize = WidgetComponent->GetCurrentDrawSize();

	const float HalfFOVRadians = FMath::DegreesToRadians<float>(InFOVDegrees) * 0.5f;
	const float HalfWidgetSize = FMath::Max(DrawSize.X, DrawSize.Y) / 2.0f;
	const float TargetDistance = HalfWidgetSize / FMath::Tan(HalfFOVRadians);

	OutOrbitYaw = -90.0f;
	OutOrbitZoom = TargetDistance;
}
