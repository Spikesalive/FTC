// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomLockerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomLockerBase() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLockerBase_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLockerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	void ARoomLockerBase::StaticRegisterNativesARoomLockerBase()
	{
	}
	UClass* Z_Construct_UClass_ARoomLockerBase_NoRegister()
	{
		return ARoomLockerBase::StaticClass();
	}
	struct Z_Construct_UClass_ARoomLockerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomLockerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLockerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoomLockerBase.h" },
		{ "ModuleRelativePath", "Public/RoomLockerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomLockerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomLockerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoomLockerBase_Statics::ClassParams = {
		&ARoomLockerBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoomLockerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLockerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoomLockerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoomLockerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomLockerBase, 516072473);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ARoomLockerBase>()
	{
		return ARoomLockerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomLockerBase(Z_Construct_UClass_ARoomLockerBase, &ARoomLockerBase::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("ARoomLockerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomLockerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
