// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ThumbnailHelpers.h"

class FWidgetBlueprintThumbnailScene : public FPreviewScene
{
public:
	FWidgetBlueprintThumbnailScene();

	/** Sets the widget blueprint to use in the next GetView() */
	void SetWidgetBlueprint(class UWidgetBlueprint* WidgetBlueprint, uint32 Width, uint32 Height);
	void GetView(FSceneViewFamily* ViewFamily, int32 X, int32 Y, uint32 SizeX, uint32 SizeY) const;

private:
	UPROPERTY()
	class UMyWidgetComponent* WidgetComponent;

	FVector2D GetDesiredSize(UUserWidget* UserWidget) const;
	void GetPreviewAreaAndSize(UUserWidget* UserWidget, FVector2D& Area, FVector2D& Size, uint32 PreviewWidth, uint32 PreviewHeight) const;
	void GetViewMatrixParameters(const float InFOVDegrees, FVector& OutOrigin, float& OutOrbitPitch, float& OutOrbitYaw, float& OutOrbitZoom) const;
};
