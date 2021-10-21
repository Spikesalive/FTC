// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetThumbs/Public/WidgetBlueprintThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintThumbnailRenderer() {}
// Cross Module References
	WIDGETTHUMBS_API UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_NoRegister();
	WIDGETTHUMBS_API UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_WidgetThumbs();
	WIDGETTHUMBS_API UClass* Z_Construct_UClass_UMyWidgetComponent_NoRegister();
	WIDGETTHUMBS_API UClass* Z_Construct_UClass_UMyWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
// End Cross Module References
	void UWidgetBlueprintThumbnailRenderer::StaticRegisterNativesUWidgetBlueprintThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_NoRegister()
	{
		return UWidgetBlueprintThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetThumbs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetBlueprintThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprintThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::ClassParams = {
		&UWidgetBlueprintThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetBlueprintThumbnailRenderer, 594123494);
	template<> WIDGETTHUMBS_API UClass* StaticClass<UWidgetBlueprintThumbnailRenderer>()
	{
		return UWidgetBlueprintThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetBlueprintThumbnailRenderer(Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer, &UWidgetBlueprintThumbnailRenderer::StaticClass, TEXT("/Script/WidgetThumbs"), TEXT("UWidgetBlueprintThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintThumbnailRenderer);
	void UMyWidgetComponent::StaticRegisterNativesUMyWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyWidgetComponent_NoRegister()
	{
		return UMyWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetThumbs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "WidgetBlueprintThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprintThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyWidgetComponent_Statics::ClassParams = {
		&UMyWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyWidgetComponent, 3517095025);
	template<> WIDGETTHUMBS_API UClass* StaticClass<UMyWidgetComponent>()
	{
		return UMyWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyWidgetComponent(Z_Construct_UClass_UMyWidgetComponent, &UMyWidgetComponent::StaticClass, TEXT("/Script/WidgetThumbs"), TEXT("UMyWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
