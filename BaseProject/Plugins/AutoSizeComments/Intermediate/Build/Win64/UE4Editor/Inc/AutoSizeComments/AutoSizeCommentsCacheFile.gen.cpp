// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeCommentsCacheFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsCacheFile() {}
// Cross Module References
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData();
	UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCNodesInside();
// End Cross Module References
class UScriptStruct* FASCPackageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FASCPackageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCPackageData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCPackageData"), sizeof(FASCPackageData), Get_Z_Construct_UScriptStruct_FASCPackageData_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCPackageData>()
{
	return FASCPackageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASCPackageData(FASCPackageData::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("ASCPackageData"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCPackageData
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCPackageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASCPackageData")),new UScriptStruct::TCppStructOps<FASCPackageData>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFASCPackageData;
	struct Z_Construct_UScriptStruct_FASCPackageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackageData_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PackageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCPackageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCPackageData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_ValueProp = { "PackageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCGraphData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_Key_KeyProp = { "PackageData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCPackageData, PackageData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_PackageData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCPackageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCPackageData",
		sizeof(FASCPackageData),
		alignof(FASCPackageData),
		Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASCPackageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASCPackageData"), sizeof(FASCPackageData), Get_Z_Construct_UScriptStruct_FASCPackageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASCPackageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASCPackageData_Hash() { return 3833711810U; }
class UScriptStruct* FASCGraphData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FASCGraphData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCGraphData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCGraphData"), sizeof(FASCGraphData), Get_Z_Construct_UScriptStruct_FASCGraphData_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCGraphData>()
{
	return FASCGraphData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASCGraphData(FASCGraphData::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("ASCGraphData"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCGraphData
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCGraphData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASCGraphData")),new UScriptStruct::TCppStructOps<FASCGraphData>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFASCGraphData;
	struct Z_Construct_UScriptStruct_FASCGraphData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCGraphData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCGraphData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_ValueProp = { "GraphData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCCommentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_Key_KeyProp = { "GraphData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData = { "GraphData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCGraphData, GraphData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_GraphData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCGraphData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCGraphData",
		sizeof(FASCGraphData),
		alignof(FASCGraphData),
		Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASCGraphData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASCGraphData"), sizeof(FASCGraphData), Get_Z_Construct_UScriptStruct_FASCGraphData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASCGraphData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASCGraphData_Hash() { return 2472448684U; }
class UScriptStruct* FASCCommentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FASCCommentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCCommentData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCCommentData"), sizeof(FASCCommentData), Get_Z_Construct_UScriptStruct_FASCCommentData_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCCommentData>()
{
	return FASCCommentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASCCommentData(FASCCommentData::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("ASCCommentData"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCCommentData
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCCommentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASCCommentData")),new UScriptStruct::TCppStructOps<FASCCommentData>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFASCCommentData;
	struct Z_Construct_UScriptStruct_FASCCommentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CommentData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCCommentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCCommentData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_ValueProp = { "CommentData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCNodesInside, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_Key_KeyProp = { "CommentData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData = { "CommentData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCCommentData, CommentData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_CommentData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCCommentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCCommentData",
		sizeof(FASCCommentData),
		alignof(FASCCommentData),
		Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASCCommentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASCCommentData"), sizeof(FASCCommentData), Get_Z_Construct_UScriptStruct_FASCCommentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASCCommentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASCCommentData_Hash() { return 1002031722U; }
class UScriptStruct* FASCNodesInside::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FASCNodesInside_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCNodesInside, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCNodesInside"), sizeof(FASCNodesInside), Get_Z_Construct_UScriptStruct_FASCNodesInside_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCNodesInside>()
{
	return FASCNodesInside::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASCNodesInside(FASCNodesInside::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("ASCNodesInside"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCNodesInside
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFASCNodesInside()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASCNodesInside")),new UScriptStruct::TCppStructOps<FASCNodesInside>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFASCNodesInside;
	struct Z_Construct_UScriptStruct_FASCNodesInside_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeGuids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCNodesInside_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCNodesInside>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids_Inner = { "NodeGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids = { "NodeGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCNodesInside, NodeGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCNodesInside_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCNodesInside_Statics::NewProp_NodeGuids,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCNodesInside_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCNodesInside",
		sizeof(FASCNodesInside),
		alignof(FASCNodesInside),
		Z_Construct_UScriptStruct_FASCNodesInside_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCNodesInside_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCNodesInside_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCNodesInside_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCNodesInside()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASCNodesInside_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASCNodesInside"), sizeof(FASCNodesInside), Get_Z_Construct_UScriptStruct_FASCNodesInside_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASCNodesInside_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASCNodesInside_Hash() { return 2941296372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
