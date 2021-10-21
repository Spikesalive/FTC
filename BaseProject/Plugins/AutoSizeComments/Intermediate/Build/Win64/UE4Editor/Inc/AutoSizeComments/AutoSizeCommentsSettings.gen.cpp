// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeCommentsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsSettings() {}
// Cross Module References
	AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod();
	UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
// End Cross Module References
	static UEnum* ECommentCollisionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ECommentCollisionMethod"));
		}
		return Singleton;
	}
	template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<ECommentCollisionMethod>()
	{
		return ECommentCollisionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommentCollisionMethod(ECommentCollisionMethod_StaticEnum, TEXT("/Script/AutoSizeComments"), TEXT("ECommentCollisionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Hash() { return 3530184948U; }
	UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommentCollisionMethod"), 0, Get_Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ASC_Collision_Point", (int64)ASC_Collision_Point },
				{ "ASC_Collision_Intersect", (int64)ASC_Collision_Intersect },
				{ "ASC_Collision_Contained", (int64)ASC_Collision_Contained },
				{ "ASC_Collision_Default", (int64)ASC_Collision_Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ASC_Collision_Contained.DisplayName", "Contained" },
				{ "ASC_Collision_Contained.Name", "ASC_Collision_Contained" },
				{ "ASC_Collision_Default.DisplayName", "Default (Don't use this!)" },
				{ "ASC_Collision_Default.Name", "ASC_Collision_Default" },
				{ "ASC_Collision_Intersect.DisplayName", "Overlap" },
				{ "ASC_Collision_Intersect.Name", "ASC_Collision_Intersect" },
				{ "ASC_Collision_Point.DisplayName", "Point" },
				{ "ASC_Collision_Point.Name", "ASC_Collision_Point" },
				{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
				nullptr,
				"ECommentCollisionMethod",
				"ECommentCollisionMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPresetCommentStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetCommentStyle, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("PresetCommentStyle"), sizeof(FPresetCommentStyle), Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FPresetCommentStyle>()
{
	return FPresetCommentStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetCommentStyle(FPresetCommentStyle::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("PresetCommentStyle"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PresetCommentStyle")),new UScriptStruct::TCppStructOps<FPresetCommentStyle>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle;
	struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FontSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetCommentStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"PresetCommentStyle",
		sizeof(FPresetCommentStyle),
		alignof(FPresetCommentStyle),
		Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetCommentStyle"), sizeof(FPresetCommentStyle), Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash() { return 88016458U; }
	void UAutoSizeCommentsSettings::StaticRegisterNativesUAutoSizeCommentsSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister()
	{
		return UAutoSizeCommentsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFontSize_MetaData[];
#endif
		static void NewProp_bUseDefaultFontSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCommentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColor_MetaData[];
#endif
		static void NewProp_bUseRandomColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomColorOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomColorOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColorFromList_MetaData[];
#endif
		static void NewProp_bUseRandomColorFromList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColorFromList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredefinedRandomColorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredefinedRandomColorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredefinedRandomColorList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumControlOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumControlOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressivelyUseDefaultColor_MetaData[];
#endif
		static void NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressivelyUseDefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderStyle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetStyles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetStyles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PresetStyles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentTextPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentTextPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumVerticalPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumVerticalPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentTextAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommentTextAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveEmptyCommentBoxes_MetaData[];
#endif
		static void NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveEmptyCommentBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyCommentBoxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmptyCommentBoxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGlobalSettings_MetaData[];
#endif
		static void NewProp_bEnableGlobalSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGlobalSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalColorBubble_MetaData[];
#endif
		static void NewProp_bGlobalColorBubble_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalColorBubble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalShowBubbleWhenZoomed_MetaData[];
#endif
		static void NewProp_bGlobalShowBubbleWhenZoomed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalShowBubbleWhenZoomed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentNodeDataToFile_MetaData[];
#endif
		static void NewProp_bSaveCommentNodeDataToFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentNodeDataToFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectNodesContainedForNewComments_MetaData[];
#endif
		static void NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectNodesContainedForNewComments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeCollisionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResizeCollisionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltCollisionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AltCollisionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridWhileResizing_MetaData[];
#endif
		static void NewProp_bSnapToGridWhileResizing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridWhileResizing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodes_MetaData[];
#endif
		static void NewProp_bIgnoreKnotNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelectedNodesOnCreation_MetaData[];
#endif
		static void NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelectedNodesOnCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefreshContainingNodesOnMove_MetaData[];
#endif
		static void NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefreshContainingNodesOnMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTooltip_MetaData[];
#endif
		static void NewProp_bDisableTooltip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTooltip;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IgnoredGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredGraphs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideHeaderButton_MetaData[];
#endif
		static void NewProp_bHideHeaderButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideHeaderButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePresets_MetaData[];
#endif
		static void NewProp_bHidePresets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePresets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideRandomizeButton_MetaData[];
#endif
		static void NewProp_bHideRandomizeButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideRandomizeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBoxControls_MetaData[];
#endif
		static void NewProp_bHideCommentBoxControls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBoxControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBubble_MetaData[];
#endif
		static void NewProp_bHideCommentBubble_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBubble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCornerPoints_MetaData[];
#endif
		static void NewProp_bHideCornerPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideCornerPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugGraph_ASC_MetaData[];
#endif
		static void NewProp_bDebugGraph_ASC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugGraph_ASC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoSizeCommentsSettings.h" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "Comment", "/** The default font size for comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The default font size for comment boxes" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize = { "DefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultFontSize), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "Comment", "/** If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseDefaultFontSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize = { "bUseDefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If Use Random Color is not enabled, comment boxes will spawn with this default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If Use Random Color is not enabled, comment boxes will spawn with this default color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor = { "DefaultCommentColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultCommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If enabled, comment boxes will spawn with a random color. If disabled, use default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, comment boxes will spawn with a random color. If disabled, use default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseRandomColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor = { "bUseRandomColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Opacity used for the random color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Opacity used for the random color" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity = { "RandomColorOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, RandomColorOpacity), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If enabled, select a random color from predefined list */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, select a random color from predefined list" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseRandomColorFromList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList = { "bUseRandomColorFromList", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If UseRandomColorFromList is enabled, new comments will select a color from one of these */" },
		{ "EditCondition", "bUseRandomColorFromList" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If UseRandomColorFromList is enabled, new comments will select a color from one of these" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PredefinedRandomColorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Minimum opacity for comment box controls when not hovered */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum opacity for comment box controls when not hovered" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity = { "MinimumControlOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumControlOpacity), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Set all nodes in the graph to the default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Set all nodes in the graph to the default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bAggressivelyUseDefaultColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor = { "bAggressivelyUseDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Style for header comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Style for header comment boxes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle = { "HeaderStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, HeaderStyle), Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner = { "PresetStyles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Preset styles (each style will have its own button on the comment box) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Preset styles (each style will have its own button on the comment box)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles = { "PresetStyles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PresetStyles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding for around the contents of a comment node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding for around the contents of a comment node" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding around the comment title text */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding around the comment title text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding = { "CommentTextPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Minimum vertical padding above and below the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum vertical padding above and below the node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding = { "MinimumVerticalPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumVerticalPadding), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Comment text alignment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Comment text alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment = { "CommentTextAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If enabled, empty comment boxes will move out of the way of other comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, empty comment boxes will move out of the way of other comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bMoveEmptyCommentBoxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes = { "bMoveEmptyCommentBoxes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The speed at which empty comment boxes move */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The speed at which empty comment boxes move" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed = { "EmptyCommentBoxSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, EmptyCommentBoxSpeed), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Globally set \"Color Bubble\" for every comment box that is created or loaded */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Globally set \"Color Bubble\" for every comment box that is created or loaded" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bEnableGlobalSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings = { "bEnableGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Globally set \"Color Bubble\" for every comment box that is created or loaded */" },
		{ "EditCondition", "bEnableGlobalSettings" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Globally set \"Color Bubble\" for every comment box that is created or loaded" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bGlobalColorBubble = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble = { "bGlobalColorBubble", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Globally set \"Show Bubble When Zoomed\" for every comment box that is created or loaded */" },
		{ "EditCondition", "bEnableGlobalSettings" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Globally set \"Show Bubble When Zoomed\" for every comment box that is created or loaded" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bGlobalShowBubbleWhenZoomed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed = { "bGlobalShowBubbleWhenZoomed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If enabled, nodes inside comments will be saved to a cache file */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes inside comments will be saved to a cache file" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSaveCommentNodeDataToFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile = { "bSaveCommentNodeDataToFile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Commments will detect and add nodes are underneath on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Commments will detect and add nodes are underneath on creation" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDetectNodesContainedForNewComments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments = { "bDetectNodesContainedForNewComments", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when resizing comment nodes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when resizing comment nodes" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod = { "ResizeCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when releasing alt */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when releasing alt" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod = { "AltCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, AltCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Snap to the grid when resizing the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Snap to the grid when resizing the node" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSnapToGridWhileResizing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing = { "bSnapToGridWhileResizing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes = { "bIgnoreKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't snap to selected nodes on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't snap to selected nodes on creation" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreSelectedNodesOnCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation = { "bIgnoreSelectedNodesOnCreation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Refresh the nodes inside the comment when you start moving the comment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Refresh the nodes inside the comment when you start moving the comment" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bRefreshContainingNodesOnMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove = { "bRefreshContainingNodesOnMove", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Disable the tooltip when hovering the titlebar */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Disable the tooltip when hovering the titlebar" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDisableTooltip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip = { "bDisableTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, IgnoredGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the header button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the header button" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideHeaderButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton = { "bHideHeaderButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the preset buttons */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the preset buttons" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHidePresets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets = { "bHidePresets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the randomize color button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the randomize color button" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideRandomizeButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton = { "bHideRandomizeButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide controls at the bottom of the comment box */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide controls at the bottom of the comment box" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCommentBoxControls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls = { "bHideCommentBoxControls", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the comment bubble */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the comment bubble" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCommentBubble = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble = { "bHideCommentBubble", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the corner points (resize still enabled) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the corner points (resize still enabled)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCornerPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints = { "bHideCornerPoints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Print info about the graph when opening a graph */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Print info about the graph when opening a graph" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDebugGraph_ASC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC = { "bDebugGraph_ASC", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableGlobalSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalColorBubble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSizeCommentsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams = {
		&UAutoSizeCommentsSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSizeCommentsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSizeCommentsSettings, 2280921092);
	template<> AUTOSIZECOMMENTS_API UClass* StaticClass<UAutoSizeCommentsSettings>()
	{
		return UAutoSizeCommentsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSizeCommentsSettings(Z_Construct_UClass_UAutoSizeCommentsSettings, &UAutoSizeCommentsSettings::StaticClass, TEXT("/Script/AutoSizeComments"), TEXT("UAutoSizeCommentsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSizeCommentsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
