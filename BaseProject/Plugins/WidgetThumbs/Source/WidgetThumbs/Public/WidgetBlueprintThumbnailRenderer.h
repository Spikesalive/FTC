// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ThumbnailRendering/ThumbnailRenderer.h"
#include "Components/WidgetComponent.h"
#include "WidgetBlueprintThumbnailRenderer.generated.h"

UCLASS()
class WIDGETTHUMBS_API UWidgetBlueprintThumbnailRenderer : public UThumbnailRenderer
{
	GENERATED_BODY()
	
	// UThumbnailRenderer implementation
	virtual void GetThumbnailSize(UObject* Object, float Zoom, uint32& OutWidth, uint32& OutHeight) const override;
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas, bool bAdditionalViewFamily) override;
	virtual bool AllowsRealtimeThumbnails(UObject* Object) const override { return false; }

	// UObject implementation
	virtual void BeginDestroy() override;

private:
	class FWidgetBlueprintThumbnailScene* ThumbnailScene = nullptr;
};

UCLASS()
class UMyWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	void Clear();
	void Draw();
};
