// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Room.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom() {}
// Cross Module References
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralLevelStreaming_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
// End Cross Module References
class UScriptStruct* FRoomConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALDUNGEON_API uint32 Get_Z_Construct_UScriptStruct_FRoomConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomConnection, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("RoomConnection"), sizeof(FRoomConnection), Get_Z_Construct_UScriptStruct_FRoomConnection_Hash());
	}
	return Singleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FRoomConnection>()
{
	return FRoomConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoomConnection(FRoomConnection::StaticStruct, TEXT("/Script/ProceduralDungeon"), TEXT("RoomConnection"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralDungeon_StaticRegisterNativesFRoomConnection
{
	FScriptStruct_ProceduralDungeon_StaticRegisterNativesFRoomConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoomConnection")),new UScriptStruct::TCppStructOps<FRoomConnection>);
	}
} ScriptStruct_ProceduralDungeon_StaticRegisterNativesFRoomConnection;
	struct Z_Construct_UScriptStruct_FRoomConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OtherRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom = { "OtherRoom", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoomConnection, OtherRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		&NewStructOps,
		"RoomConnection",
		sizeof(FRoomConnection),
		alignof(FRoomConnection),
		Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoomConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoomConnection"), sizeof(FRoomConnection), Get_Z_Construct_UScriptStruct_FRoomConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoomConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoomConnection_Hash() { return 2465779742U; }
	void URoom::StaticRegisterNativesURoom()
	{
	}
	UClass* Z_Construct_UClass_URoom_NoRegister()
	{
		return URoom::StaticClass();
	}
	struct Z_Construct_UClass_URoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Room.h" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRoomConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoom, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoom, Instance), Z_Construct_UClass_UProceduralLevelStreaming_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoom, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoom, Values), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoom_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Values,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoom_Statics::ClassParams = {
		&URoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoom, 719876564);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoom>()
	{
		return URoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoom(Z_Construct_UClass_URoom, &URoom::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("URoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
