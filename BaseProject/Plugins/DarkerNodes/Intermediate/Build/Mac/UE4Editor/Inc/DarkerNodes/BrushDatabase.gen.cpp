// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Private/Lib/BrushDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushDatabase() {}
// Cross Module References
	DARKERNODES_API UClass* Z_Construct_UClass_UBrushDatabase_NoRegister();
	DARKERNODES_API UClass* Z_Construct_UClass_UBrushDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DarkerNodes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UBrushDatabase::StaticRegisterNativesUBrushDatabase()
	{
	}
	UClass* Z_Construct_UClass_UBrushDatabase_NoRegister()
	{
		return UBrushDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UBrushDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Materials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DynamicMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushDatabase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lib/BrushDatabase.h" },
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushDatabase, Materials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_ValueProp = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_Key_KeyProp = { "DynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushDatabase, DynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrushDatabase_Statics::ClassParams = {
		&UBrushDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrushDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrushDatabase, 3241366588);
	template<> DARKERNODES_API UClass* StaticClass<UBrushDatabase>()
	{
		return UBrushDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushDatabase(Z_Construct_UClass_UBrushDatabase, &UBrushDatabase::StaticClass, TEXT("/Script/DarkerNodes"), TEXT("UBrushDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
