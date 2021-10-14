// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralLevelStreaming.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralLevelStreaming() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralLevelStreaming_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralLevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralLevelStreaming::execOnLevelDynamicUnloaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelDynamicUnloaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralLevelStreaming::execUnload)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UProceduralLevelStreaming,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralLevelStreaming::Unload(Z_Param_WorldContextObject,Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralLevelStreaming::execLoad)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(URoomData,Z_Param_Data);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProceduralLevelStreaming**)Z_Param__Result=UProceduralLevelStreaming::Load(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralLevelStreaming::execLoadLevelInstanceBySoftObjectPtr)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProceduralLevelStreaming**)Z_Param__Result=UProceduralLevelStreaming::LoadLevelInstanceBySoftObjectPtr(Z_Param_WorldContextObject,Z_Param_Level,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralLevelStreaming::execLoadLevelInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProceduralLevelStreaming**)Z_Param__Result=UProceduralLevelStreaming::LoadLevelInstance(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	void UProceduralLevelStreaming::StaticRegisterNativesUProceduralLevelStreaming()
	{
		UClass* Class = UProceduralLevelStreaming::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Load", &UProceduralLevelStreaming::execLoad },
			{ "LoadLevelInstance", &UProceduralLevelStreaming::execLoadLevelInstance },
			{ "LoadLevelInstanceBySoftObjectPtr", &UProceduralLevelStreaming::execLoadLevelInstanceBySoftObjectPtr },
			{ "OnLevelDynamicUnloaded", &UProceduralLevelStreaming::execOnLevelDynamicUnloaded },
			{ "Unload", &UProceduralLevelStreaming::execUnload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics
	{
		struct ProceduralLevelStreaming_eventLoad_Parms
		{
			UObject* WorldContextObject;
			URoomData* Data;
			FVector Location;
			FRotator Rotation;
			UProceduralLevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoad_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoad_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoad_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoad_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoad_Parms, ReturnValue), Z_Construct_UClass_UProceduralLevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Load Level Instance (by Room Data)" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralLevelStreaming, nullptr, "Load", nullptr, nullptr, sizeof(ProceduralLevelStreaming_eventLoad_Parms), Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralLevelStreaming_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralLevelStreaming_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics
	{
		struct ProceduralLevelStreaming_eventLoadLevelInstance_Parms
		{
			UObject* WorldContextObject;
			FString LevelName;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			UProceduralLevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstance_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstance_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstance_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ProceduralLevelStreaming_eventLoadLevelInstance_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralLevelStreaming_eventLoadLevelInstance_Parms), &Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstance_Parms, ReturnValue), Z_Construct_UClass_UProceduralLevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/**\n\x09* Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n\x09*\n\x09* The level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\n\x09* packaged, please be sure to include the .umap in your Packaging Settings:\n\x09*\n\x09*   Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n\x09*\n\x09* @param LevelName - Level package name, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n\x09* @param Location - World space location where the level should be spawned\n\x09* @param Rotation - World space rotation for rotating the entire level\n\x09* @param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n\x09* @return Streaming level object for a level instance\n\x09*/" },
		{ "DisplayName", "Load Level Instance (by Name)" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "ToolTip", "Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n\nThe level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\npackaged, please be sure to include the .umap in your Packaging Settings:\n\n  Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n\n@param LevelName - Level package name, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n@param Location - World space location where the level should be spawned\n@param Rotation - World space rotation for rotating the entire level\n@param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n@return Streaming level object for a level instance" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralLevelStreaming, nullptr, "LoadLevelInstance", nullptr, nullptr, sizeof(ProceduralLevelStreaming_eventLoadLevelInstance_Parms), Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics
	{
		struct ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms
		{
			UObject* WorldContextObject;
			TSoftObjectPtr<UWorld> Level;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			UProceduralLevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms), &Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms, ReturnValue), Z_Construct_UClass_UProceduralLevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Load Level Instance (by Object Reference)" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralLevelStreaming, nullptr, "LoadLevelInstanceBySoftObjectPtr", nullptr, nullptr, sizeof(ProceduralLevelStreaming_eventLoadLevelInstanceBySoftObjectPtr_Parms), Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Level Streaming" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralLevelStreaming, nullptr, "OnLevelDynamicUnloaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics
	{
		struct ProceduralLevelStreaming_eventUnload_Parms
		{
			UObject* WorldContextObject;
			UProceduralLevelStreaming* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventUnload_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelStreaming_eventUnload_Parms, Instance), Z_Construct_UClass_UProceduralLevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Unload Level Instance" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralLevelStreaming, nullptr, "Unload", nullptr, nullptr, sizeof(ProceduralLevelStreaming_eventUnload_Parms), Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralLevelStreaming_Unload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralLevelStreaming_Unload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralLevelStreaming_NoRegister()
	{
		return UProceduralLevelStreaming::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralLevelStreaming_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyLoaded_MetaData[];
#endif
		static void NewProp_bInitiallyLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyVisible_MetaData[];
#endif
		static void NewProp_bInitiallyVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralLevelStreaming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralLevelStreaming_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralLevelStreaming_Load, "Load" }, // 2390367009
		{ &Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstance, "LoadLevelInstance" }, // 157785592
		{ &Z_Construct_UFunction_UProceduralLevelStreaming_LoadLevelInstanceBySoftObjectPtr, "LoadLevelInstanceBySoftObjectPtr" }, // 3558480417
		{ &Z_Construct_UFunction_UProceduralLevelStreaming_OnLevelDynamicUnloaded, "OnLevelDynamicUnloaded" }, // 2940129999
		{ &Z_Construct_UFunction_UProceduralLevelStreaming_Unload, "Unload" }, // 1377419349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralLevelStreaming_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This file was copied from the ULevelStreamingDynamic of the engine\n * But an Unload methods is added and the UniqueLevelInstanceID is switch to public (accessed by the generator)\n */" },
		{ "IncludePath", "ProceduralLevelStreaming.h" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "ToolTip", "This file was copied from the ULevelStreamingDynamic of the engine\nBut an Unload methods is added and the UniqueLevelInstanceID is switch to public (accessed by the generator)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be loaded at startup\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "ToolTip", "Whether the level should be loaded at startup" },
	};
#endif
	void Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded_SetBit(void* Obj)
	{
		((UProceduralLevelStreaming*)Obj)->bInitiallyLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded = { "bInitiallyLoaded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UProceduralLevelStreaming), &Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be visible at startup if it is loaded \x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ProceduralLevelStreaming.h" },
		{ "ToolTip", "Whether the level should be visible at startup if it is loaded" },
	};
#endif
	void Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible_SetBit(void* Obj)
	{
		((UProceduralLevelStreaming*)Obj)->bInitiallyVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible = { "bInitiallyVisible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UProceduralLevelStreaming), &Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralLevelStreaming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralLevelStreaming_Statics::NewProp_bInitiallyVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralLevelStreaming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralLevelStreaming>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralLevelStreaming_Statics::ClassParams = {
		&UProceduralLevelStreaming::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralLevelStreaming_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralLevelStreaming_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralLevelStreaming_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralLevelStreaming_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralLevelStreaming()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralLevelStreaming_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralLevelStreaming, 1039974622);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UProceduralLevelStreaming>()
	{
		return UProceduralLevelStreaming::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralLevelStreaming(Z_Construct_UClass_UProceduralLevelStreaming, &UProceduralLevelStreaming::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("UProceduralLevelStreaming"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralLevelStreaming);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
