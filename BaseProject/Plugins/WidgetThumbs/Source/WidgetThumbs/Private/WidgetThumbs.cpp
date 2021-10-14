// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

#include "WidgetThumbs.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "WidgetBlueprint.h"
#include "WidgetBlueprintThumbnailRenderer.h"

#define LOCTEXT_NAMESPACE "FWidgetThumbsModule"

void FWidgetThumbsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	if (GIsEditor)
	{
		UThumbnailManager::Get().RegisterCustomRenderer(UWidgetBlueprint::StaticClass(), UWidgetBlueprintThumbnailRenderer::StaticClass());
	}
}

void FWidgetThumbsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (GIsEditor)
	{
		//UThumbnailManager::Get().UnregisterCustomRenderer(UWidgetBlueprint::StaticClass());
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWidgetThumbsModule, WidgetThumbs)