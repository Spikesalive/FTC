// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomData() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	void URoomData::StaticRegisterNativesURoomData()
	{
	}
	UClass* Z_Construct_UClass_URoomData_NoRegister()
	{
		return URoomData::StaticClass();
	}
	struct Z_Construct_UClass_URoomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDoor_MetaData[];
#endif
		static void NewProp_RandomDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomDoor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Doors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RoomData.h" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomData, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoomData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif
	void Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit(void* Obj)
	{
		((URoomData*)Obj)->RandomDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor = { "RandomDoor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URoomData), &Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomData_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomData, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URoomData_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::NewProp_Doors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomData, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_URoomData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoomData_Statics::ClassParams = {
		&URoomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoomData, 4278407608);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomData>()
	{
		return URoomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoomData(Z_Construct_UClass_URoomData, &URoomData::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("URoomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
