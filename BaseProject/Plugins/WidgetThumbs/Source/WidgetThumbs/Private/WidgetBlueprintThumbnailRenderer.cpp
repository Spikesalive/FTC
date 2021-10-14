// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

#include "WidgetBlueprintThumbnailRenderer.h"
#include "WidgetBlueprint.h"
#include "ThumbnailHelpers.h"
#include "SceneView.h"
#include "WidgetBlueprintThumbnailScene.h"
#include "CanvasTypes.h"
#include "CanvasItem.h"

void UWidgetBlueprintThumbnailRenderer::GetThumbnailSize(UObject* Object, float Zoom, uint32& OutWidth, uint32& OutHeight) const
{
	OutWidth = 256;
	OutHeight = 256;
}

void UWidgetBlueprintThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	UWidgetBlueprint* WidgetBlueprint = Cast<UWidgetBlueprint>(Object);
	if (WidgetBlueprint == nullptr)
		return;

	if (ThumbnailScene == nullptr || ensure(ThumbnailScene->GetWorld() != nullptr) == false)
	{
		if (ThumbnailScene)
		{
			FlushRenderingCommands();
			delete ThumbnailScene;
		}
		ThumbnailScene = new FWidgetBlueprintThumbnailScene();
	}

	ThumbnailScene->SetWidgetBlueprint(WidgetBlueprint, Width, Height);
	{
		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(Viewport, ThumbnailScene->GetScene(), FEngineShowFlags(ESFIM_Game))
			.SetWorldTimes(FApp::GetCurrentTime() - GStartTime, FApp::GetDeltaTime(), FApp::GetCurrentTime() - GStartTime));

		ViewFamily.EngineShowFlags.DisableAdvancedFeatures();
		ViewFamily.EngineShowFlags.MotionBlur = 0;
		ViewFamily.EngineShowFlags.LOD = 0;

		ThumbnailScene->GetView(&ViewFamily, X, Y, Width, Height);

		RenderViewFamily(Canvas, &ViewFamily);
	}
	ThumbnailScene->SetWidgetBlueprint(nullptr, Width, Height);
}

void UWidgetBlueprintThumbnailRenderer::BeginDestroy()
{
	if (ThumbnailScene != nullptr)
	{
		delete ThumbnailScene;
		ThumbnailScene = nullptr;
	}

	Super::BeginDestroy();
}

void UMyWidgetComponent::Clear()
{
	CurrentDrawSize = FIntPoint(EForceInit::ForceInit);
	LastWidgetRenderTime = 0;
	RequestRedraw();
}

void UMyWidgetComponent::Draw()
{
	//UpdateWidget();
	DrawWidgetToRenderTarget(0.0f);
}
