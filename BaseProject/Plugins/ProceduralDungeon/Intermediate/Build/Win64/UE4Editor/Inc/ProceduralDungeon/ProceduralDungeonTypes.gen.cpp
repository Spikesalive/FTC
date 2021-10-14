// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonTypes() {}
// Cross Module References
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationState();
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	static UEnum* ESeedType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_ESeedType, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("ESeedType"));
		}
		return Singleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<ESeedType>()
	{
		return ESeedType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESeedType(ESeedType_StaticEnum, TEXT("/Script/ProceduralDungeon"), TEXT("ESeedType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralDungeon_ESeedType_Hash() { return 3954366460U; }
	UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESeedType"), 0, Get_Z_Construct_UEnum_ProceduralDungeon_ESeedType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESeedType::Random", (int64)ESeedType::Random },
				{ "ESeedType::AutoIncrement", (int64)ESeedType::AutoIncrement },
				{ "ESeedType::Fixed", (int64)ESeedType::Fixed },
				{ "ESeedType::NbType", (int64)ESeedType::NbType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoIncrement.DisplayName", "Auto Increment" },
				{ "AutoIncrement.Name", "ESeedType::AutoIncrement" },
				{ "AutoIncrement.Tooltip", "Get the initial seed and increment at each generation" },
				{ "Fixed.DisplayName", "Fixed" },
				{ "Fixed.Name", "ESeedType::Fixed" },
				{ "Fixed.Tooltip", "Always use initial seed (or you can set it manually via blueprint)" },
				{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
				{ "NbType.Hidden", "" },
				{ "NbType.Name", "ESeedType::NbType" },
				{ "Random.DisplayName", "Random" },
				{ "Random.Name", "ESeedType::Random" },
				{ "Random.Tooltip", "Random seed at each generation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
				nullptr,
				"ESeedType",
				"ESeedType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGenerationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationType, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationType"));
		}
		return Singleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationType>()
	{
		return EGenerationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenerationType(EGenerationType_StaticEnum, TEXT("/Script/ProceduralDungeon"), TEXT("EGenerationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Hash() { return 3333899895U; }
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenerationType"), 0, Get_Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenerationType::DFS", (int64)EGenerationType::DFS },
				{ "EGenerationType::BFS", (int64)EGenerationType::BFS },
				{ "EGenerationType::NbType", (int64)EGenerationType::NbType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BFS.DisplayName", "Breadth First" },
				{ "BFS.Name", "EGenerationType::BFS" },
				{ "BFS.Tooltip", "Make the dungeon less linear" },
				{ "DFS.DisplayName", "Depth First" },
				{ "DFS.Name", "EGenerationType::DFS" },
				{ "DFS.Tooltip", "Make the dungeon more linear" },
				{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
				{ "NbType.Hidden", "" },
				{ "NbType.Name", "EGenerationType::NbType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
				nullptr,
				"EGenerationType",
				"EGenerationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDoorDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EDoorDirection"));
		}
		return Singleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDoorDirection>()
	{
		return EDoorDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDoorDirection(EDoorDirection_StaticEnum, TEXT("/Script/ProceduralDungeon"), TEXT("EDoorDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Hash() { return 2164978749U; }
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDoorDirection"), 0, Get_Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDoorDirection::North", (int64)EDoorDirection::North },
				{ "EDoorDirection::East", (int64)EDoorDirection::East },
				{ "EDoorDirection::West", (int64)EDoorDirection::West },
				{ "EDoorDirection::South", (int64)EDoorDirection::South },
				{ "EDoorDirection::NbDirection", (int64)EDoorDirection::NbDirection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.Comment", "// rotation = 0 (world forward)\n" },
				{ "East.DisplayName", "East" },
				{ "East.Name", "EDoorDirection::East" },
				{ "East.ToolTip", "rotation = 0 (world forward)" },
				{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
				{ "NbDirection.Comment", "// rotation = 180 (world backward)\n" },
				{ "NbDirection.Hidden", "" },
				{ "NbDirection.Name", "EDoorDirection::NbDirection" },
				{ "NbDirection.ToolTip", "rotation = 180 (world backward)" },
				{ "North.DisplayName", "North" },
				{ "North.Name", "EDoorDirection::North" },
				{ "South.Comment", "// rotation = 90 (world left)\n" },
				{ "South.DisplayName", "South" },
				{ "South.Name", "EDoorDirection::South" },
				{ "South.ToolTip", "rotation = 90 (world left)" },
				{ "West.Comment", "// rotation = -90 (world right)\n" },
				{ "West.DisplayName", "West" },
				{ "West.Name", "EDoorDirection::West" },
				{ "West.ToolTip", "rotation = -90 (world right)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
				nullptr,
				"EDoorDirection",
				"EDoorDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGenerationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationState, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationState"));
		}
		return Singleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationState>()
	{
		return EGenerationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenerationState(EGenerationState_StaticEnum, TEXT("/Script/ProceduralDungeon"), TEXT("EGenerationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Hash() { return 3967059276U; }
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenerationState"), 0, Get_Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenerationState::None", (int64)EGenerationState::None },
				{ "EGenerationState::Generation", (int64)EGenerationState::Generation },
				{ "EGenerationState::Load", (int64)EGenerationState::Load },
				{ "EGenerationState::Initialization", (int64)EGenerationState::Initialization },
				{ "EGenerationState::Unload", (int64)EGenerationState::Unload },
				{ "EGenerationState::NbState", (int64)EGenerationState::NbState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Generation.DisplayName", "Generation" },
				{ "Generation.Name", "EGenerationState::Generation" },
				{ "Initialization.DisplayName", "Initialization" },
				{ "Initialization.Name", "EGenerationState::Initialization" },
				{ "Load.DisplayName", "Load" },
				{ "Load.Name", "EGenerationState::Load" },
				{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
				{ "NbState.Hidden", "" },
				{ "NbState.Name", "EGenerationState::NbState" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EGenerationState::None" },
				{ "Unload.DisplayName", "Unload" },
				{ "Unload.Name", "EGenerationState::Unload" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
				nullptr,
				"EGenerationState",
				"EGenerationState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDoorDef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALDUNGEON_API uint32 Get_Z_Construct_UScriptStruct_FDoorDef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorDef, Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("DoorDef"), sizeof(FDoorDef), Get_Z_Construct_UScriptStruct_FDoorDef_Hash());
	}
	return Singleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FDoorDef>()
{
	return FDoorDef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoorDef(FDoorDef::StaticStruct, TEXT("/Script/ProceduralDungeon"), TEXT("DoorDef"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralDungeon_StaticRegisterNativesFDoorDef
{
	FScriptStruct_ProceduralDungeon_StaticRegisterNativesFDoorDef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoorDef")),new UScriptStruct::TCppStructOps<FDoorDef>);
	}
} ScriptStruct_ProceduralDungeon_StaticRegisterNativesFDoorDef;
	struct Z_Construct_UScriptStruct_FDoorDef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorDef_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoorDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorDef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "DoorDef" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoorDef, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "DoorDef" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoorDef, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		&NewStructOps,
		"DoorDef",
		sizeof(FDoorDef),
		alignof(FDoorDef),
		Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoorDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoorDef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoorDef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralDungeon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoorDef"), sizeof(FDoorDef), Get_Z_Construct_UScriptStruct_FDoorDef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoorDef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoorDef_Hash() { return 3219896696U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
