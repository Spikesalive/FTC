// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralDungeonSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonSettings() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UProceduralDungeonSettings::StaticRegisterNativesUProceduralDungeonSettings()
	{
	}
	UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister()
	{
		return UProceduralDungeonSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralDungeonSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCulling_MetaData[];
#endif
		static void NewProp_OcclusionCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OcclusionCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanLoop_MetaData[];
#endif
		static void NewProp_CanLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[];
#endif
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenPrintDebug_MetaData[];
#endif
		static void NewProp_OnScreenPrintDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnScreenPrintDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrintDebugDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrintDebugDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralDungeonSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralDungeonSettings.h" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit = { "RoomUnit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralDungeonSettings, RoomUnit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize = { "DoorSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset = { "DoorOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorOffset), METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->OcclusionCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling = { "OcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->CanLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->OnScreenPrintDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug = { "OnScreenPrintDebug", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration = { "PrintDebugDuration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralDungeonSettings, PrintDebugDuration), METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralDungeonSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams = {
		&UProceduralDungeonSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralDungeonSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralDungeonSettings, 2280364495);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UProceduralDungeonSettings>()
	{
		return UProceduralDungeonSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralDungeonSettings(Z_Construct_UClass_UProceduralDungeonSettings, &UProceduralDungeonSettings::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("UProceduralDungeonSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
