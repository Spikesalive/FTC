// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomLevel() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ARoomLevel::StaticRegisterNativesARoomLevel()
	{
	}
	UClass* Z_Construct_UClass_ARoomLevel_NoRegister()
	{
		return ARoomLevel::StaticClass();
	}
	struct Z_Construct_UClass_ARoomLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysVisible_MetaData[];
#endif
		static void NewProp_AlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsInLevel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsInLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsInLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RoomLevel.h" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Data" },
		{ "Comment", "/* Don't work... */" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ToolTip", "Don't work..." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomLevel, Data), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomLevel, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible_MetaData[] = {
		{ "Category", "Room Level" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	void Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible_SetBit(void* Obj)
	{
		((ARoomLevel*)Obj)->AlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible = { "AlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoomLevel), &Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Room Level" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomLevel, Id), METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel_Inner = { "ActorsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel = { "ActorsInLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomLevel, ActorsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_AlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorsInLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoomLevel_Statics::ClassParams = {
		&ARoomLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoomLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoomLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoomLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomLevel, 3024631541);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ARoomLevel>()
	{
		return ARoomLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomLevel(Z_Construct_UClass_ARoomLevel, &ARoomLevel::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("ARoomLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
