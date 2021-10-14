// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}
// Cross Module References
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationState();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventRoomEvent_Parms
		{
			TSubclassOf<URoomData>  NewRoom;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomEvent_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_ProceduralDungeon_eventRoomEvent_Parms), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "GenerationEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execDispatchRoomAdded)
	{
		P_GET_OBJECT(UClass,Z_Param_NewRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispatchRoomAdded(Z_Param_NewRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execDispatchGenerationInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispatchGenerationInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execDispatchPostGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispatchPostGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execDispatchPreGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispatchPreGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnStateEnd)
	{
		P_GET_ENUM(EGenerationState,Z_Param__State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnd(EGenerationState(Z_Param__State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnStateTick)
	{
		P_GET_ENUM(EGenerationState,Z_Param__State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateTick(EGenerationState(Z_Param__State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnStateBegin)
	{
		P_GET_ENUM(EGenerationState,Z_Param__State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateBegin(EGenerationState(Z_Param__State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execSetState)
	{
		P_GET_ENUM(EGenerationState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(EGenerationState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execUnloadAllRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadAllRooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execLoadAllRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAllRooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCreateDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDungeon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execBeginGeneration)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param__Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginGeneration_Implementation(Z_Param__Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnRoomAdded)
	{
		P_GET_OBJECT(UClass,Z_Param_NewRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRoomAdded(Z_Param_NewRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnGenerationInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGenerationInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnPostGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnPreGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execContinueToAddRoom_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContinueToAddRoom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execIsValidDungeon_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidDungeon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseDoor_Implementation)
	{
		P_GET_OBJECT(UClass,Z_Param_CurrentRoom);
		P_GET_OBJECT(UClass,Z_Param_NextRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ADoor> *)Z_Param__Result=P_THIS->ChooseDoor_Implementation(Z_Param_CurrentRoom,Z_Param_NextRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseNextRoomData_Implementation)
	{
		P_GET_OBJECT(UClass,Z_Param_CurrentRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<URoomData> *)Z_Param__Result=P_THIS->ChooseNextRoomData_Implementation(Z_Param_CurrentRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseFirstRoomData_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<URoomData> *)Z_Param__Result=P_THIS->ChooseFirstRoomData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetNbRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNbRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetRandomRoomData)
	{
		P_GET_TARRAY(TSubclassOf<URoomData> ,Z_Param_RoomDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<URoomData> *)Z_Param__Result=P_THIS->GetRandomRoomData(Z_Param_RoomDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountTotalRoomData)
	{
		P_GET_TARRAY(TSubclassOf<URoomData> ,Z_Param_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountRoomData)
	{
		P_GET_OBJECT(UClass,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyOneRoomDataFrom)
	{
		P_GET_TARRAY(TSubclassOf<URoomData> ,Z_Param_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyRoomData)
	{
		P_GET_OBJECT(UClass,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execContinueToAddRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContinueToAddRoom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execIsValidDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidDungeon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseDoor)
	{
		P_GET_OBJECT(UClass,Z_Param_CurrentRoom);
		P_GET_OBJECT(UClass,Z_Param_NextRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ADoor> *)Z_Param__Result=P_THIS->ChooseDoor_Implementation(Z_Param_CurrentRoom,Z_Param_NextRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseNextRoomData)
	{
		P_GET_OBJECT(UClass,Z_Param_CurrentRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<URoomData> *)Z_Param__Result=P_THIS->ChooseNextRoomData_Implementation(Z_Param_CurrentRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseFirstRoomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<URoomData> *)Z_Param__Result=P_THIS->ChooseFirstRoomData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generate();
		P_NATIVE_END;
	}
	static FName NAME_ADungeonGenerator_BeginGeneration = FName(TEXT("BeginGeneration"));
	void ADungeonGenerator::BeginGeneration(uint32 _Seed)
	{
		DungeonGenerator_eventBeginGeneration_Parms Parms;
		Parms._Seed=_Seed;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_BeginGeneration),&Parms);
	}
	static FName NAME_ADungeonGenerator_ChooseDoor = FName(TEXT("ChooseDoor"));
	TSubclassOf<ADoor>  ADungeonGenerator::ChooseDoor(TSubclassOf<URoomData>  CurrentRoom, TSubclassOf<URoomData>  NextRoom)
	{
		DungeonGenerator_eventChooseDoor_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		Parms.NextRoom=NextRoom;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseDoor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ChooseFirstRoomData = FName(TEXT("ChooseFirstRoomData"));
	TSubclassOf<URoomData>  ADungeonGenerator::ChooseFirstRoomData()
	{
		DungeonGenerator_eventChooseFirstRoomData_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseFirstRoomData),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ChooseNextRoomData = FName(TEXT("ChooseNextRoomData"));
	TSubclassOf<URoomData>  ADungeonGenerator::ChooseNextRoomData(TSubclassOf<URoomData>  CurrentRoom)
	{
		DungeonGenerator_eventChooseNextRoomData_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseNextRoomData),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ContinueToAddRoom = FName(TEXT("ContinueToAddRoom"));
	bool ADungeonGenerator::ContinueToAddRoom()
	{
		DungeonGenerator_eventContinueToAddRoom_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ContinueToAddRoom),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_IsValidDungeon = FName(TEXT("IsValidDungeon"));
	bool ADungeonGenerator::IsValidDungeon()
	{
		DungeonGenerator_eventIsValidDungeon_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_IsValidDungeon),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_OnGenerationInit_BP = FName(TEXT("OnGenerationInit_BP"));
	void ADungeonGenerator::OnGenerationInit_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnGenerationInit_BP),NULL);
	}
	static FName NAME_ADungeonGenerator_OnPostGeneration_BP = FName(TEXT("OnPostGeneration_BP"));
	void ADungeonGenerator::OnPostGeneration_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPostGeneration_BP),NULL);
	}
	static FName NAME_ADungeonGenerator_OnPreGeneration_BP = FName(TEXT("OnPreGeneration_BP"));
	void ADungeonGenerator::OnPreGeneration_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPreGeneration_BP),NULL);
	}
	static FName NAME_ADungeonGenerator_OnRoomAdded_BP = FName(TEXT("OnRoomAdded_BP"));
	void ADungeonGenerator::OnRoomAdded_BP(TSubclassOf<URoomData>  NewRoom)
	{
		DungeonGenerator_eventOnRoomAdded_BP_Parms Parms;
		Parms.NewRoom=NewRoom;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnRoomAdded_BP),&Parms);
	}
	void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
	{
		UClass* Class = ADungeonGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginGeneration", &ADungeonGenerator::execBeginGeneration },
			{ "ChooseDoor", &ADungeonGenerator::execChooseDoor },
			{ "ChooseDoor_Implementation", &ADungeonGenerator::execChooseDoor_Implementation },
			{ "ChooseFirstRoomData", &ADungeonGenerator::execChooseFirstRoomData },
			{ "ChooseFirstRoomData_Implementation", &ADungeonGenerator::execChooseFirstRoomData_Implementation },
			{ "ChooseNextRoomData", &ADungeonGenerator::execChooseNextRoomData },
			{ "ChooseNextRoomData_Implementation", &ADungeonGenerator::execChooseNextRoomData_Implementation },
			{ "ContinueToAddRoom", &ADungeonGenerator::execContinueToAddRoom },
			{ "ContinueToAddRoom_Implementation", &ADungeonGenerator::execContinueToAddRoom_Implementation },
			{ "CountRoomData", &ADungeonGenerator::execCountRoomData },
			{ "CountTotalRoomData", &ADungeonGenerator::execCountTotalRoomData },
			{ "CreateDungeon", &ADungeonGenerator::execCreateDungeon },
			{ "DispatchGenerationInit", &ADungeonGenerator::execDispatchGenerationInit },
			{ "DispatchPostGeneration", &ADungeonGenerator::execDispatchPostGeneration },
			{ "DispatchPreGeneration", &ADungeonGenerator::execDispatchPreGeneration },
			{ "DispatchRoomAdded", &ADungeonGenerator::execDispatchRoomAdded },
			{ "Generate", &ADungeonGenerator::execGenerate },
			{ "GetNbRoom", &ADungeonGenerator::execGetNbRoom },
			{ "GetRandomRoomData", &ADungeonGenerator::execGetRandomRoomData },
			{ "HasAlreadyOneRoomDataFrom", &ADungeonGenerator::execHasAlreadyOneRoomDataFrom },
			{ "HasAlreadyRoomData", &ADungeonGenerator::execHasAlreadyRoomData },
			{ "IsValidDungeon", &ADungeonGenerator::execIsValidDungeon },
			{ "IsValidDungeon_Implementation", &ADungeonGenerator::execIsValidDungeon_Implementation },
			{ "LoadAllRooms", &ADungeonGenerator::execLoadAllRooms },
			{ "OnGenerationInit", &ADungeonGenerator::execOnGenerationInit },
			{ "OnPostGeneration", &ADungeonGenerator::execOnPostGeneration },
			{ "OnPreGeneration", &ADungeonGenerator::execOnPreGeneration },
			{ "OnRoomAdded", &ADungeonGenerator::execOnRoomAdded },
			{ "OnStateBegin", &ADungeonGenerator::execOnStateBegin },
			{ "OnStateEnd", &ADungeonGenerator::execOnStateEnd },
			{ "OnStateTick", &ADungeonGenerator::execOnStateTick },
			{ "SetState", &ADungeonGenerator::execSetState },
			{ "UnloadAllRooms", &ADungeonGenerator::execUnloadAllRooms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__Seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::NewProp__Seed = { "_Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventBeginGeneration_Parms, _Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::NewProp__Seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Launch the generation process of the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Launch the generation process of the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "BeginGeneration", nullptr, nullptr, sizeof(DungeonGenerator_eventBeginGeneration_Parms), Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_BeginGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_BeginGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NextRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, NextRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, ReturnValue), Z_Construct_UClass_ADoor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the door which will be spawned between Current Room and Next Room\n" },
		{ "DisplayName", "Choose Door" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the door which will be spawned between Current Room and Next Room" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseDoor", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseDoor_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics
	{
		struct DungeonGenerator_eventChooseDoor_Implementation_Parms
		{
			TSubclassOf<URoomData>  CurrentRoom;
			TSubclassOf<URoomData>  NextRoom;
			TSubclassOf<ADoor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NextRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Implementation_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Implementation_Parms, NextRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Implementation_Parms, ReturnValue), Z_Construct_UClass_ADoor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_NextRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseDoor_Implementation", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseDoor_Implementation_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseFirstRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the RoomData you want as root of the dungeon generation\n" },
		{ "DisplayName", "Choose First Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the RoomData you want as root of the dungeon generation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseFirstRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseFirstRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics
	{
		struct DungeonGenerator_eventChooseFirstRoomData_Implementation_Parms
		{
			TSubclassOf<URoomData>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseFirstRoomData_Implementation_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ===== Implementation of blueprint native events  =====\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "===== Implementation of blueprint native events  =====" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseFirstRoomData_Implementation", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseFirstRoomData_Implementation_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the RoomData that will be connected to the Current Room\n" },
		{ "DisplayName", "Choose Next Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the RoomData that will be connected to the Current Room" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseNextRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseNextRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics
	{
		struct DungeonGenerator_eventChooseNextRoomData_Implementation_Parms
		{
			TSubclassOf<URoomData>  CurrentRoom;
			TSubclassOf<URoomData>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Implementation_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Implementation_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseNextRoomData_Implementation", nullptr, nullptr, sizeof(DungeonGenerator_eventChooseNextRoomData_Implementation_Parms), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventContinueToAddRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Condition to continue or stop adding room to the dungeon\n" },
		{ "DisplayName", "Continue To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Condition to continue or stop adding room to the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ContinueToAddRoom", nullptr, nullptr, sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics
	{
		struct DungeonGenerator_eventContinueToAddRoom_Implementation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventContinueToAddRoom_Implementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventContinueToAddRoom_Implementation_Parms), &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ContinueToAddRoom_Implementation", nullptr, nullptr, sizeof(DungeonGenerator_eventContinueToAddRoom_Implementation_Parms), Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics
	{
		struct DungeonGenerator_eventCountRoomData_Parms
		{
			TSubclassOf<URoomData>  RoomData;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomData;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the number of a specific RoomData in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the number of a specific RoomData in the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventCountRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics
	{
		struct DungeonGenerator_eventCountTotalRoomData_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomDataList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the total number of RoomData in the dungeon from the list provided\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the total number of RoomData in the dungeon from the list provided" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountTotalRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventCountTotalRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Create virtually the dungeon (no load nor initialization of rooms)\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Create virtually the dungeon (no load nor initialization of rooms)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CreateDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CreateDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "DispatchGenerationInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "DispatchPostGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ===== Dispatch optional events =====\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "===== Dispatch optional events =====" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "DispatchPreGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics
	{
		struct DungeonGenerator_eventDispatchRoomAdded_Parms
		{
			TSubclassOf<URoomData>  NewRoom;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventDispatchRoomAdded_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "DispatchRoomAdded", nullptr, nullptr, sizeof(DungeonGenerator_eventDispatchRoomAdded_Parms), Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_Generate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Update the seed and call the generation on all clients\n// Do nothing when called on clients\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Update the seed and call the generation on all clients\nDo nothing when called on clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "Generate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics
	{
		struct DungeonGenerator_eventGetNbRoom_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventGetNbRoom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "CompactNodeTitle", "Nb Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetNbRoom", nullptr, nullptr, sizeof(DungeonGenerator_eventGetNbRoom_Parms), Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetNbRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics
	{
		struct DungeonGenerator_eventGetRandomRoomData_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomDataArray;
			TSubclassOf<URoomData>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomDataArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomDataArray;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return a random RoomData from the array provided\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return a random RoomData from the array provided" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventGetRandomRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics
	{
		struct DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomDataList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if at least one of the RoomData from the list provided is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if at least one of the RoomData from the list provided is already in the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyOneRoomDataFrom", nullptr, nullptr, sizeof(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics
	{
		struct DungeonGenerator_eventHasAlreadyRoomData_Parms
		{
			TSubclassOf<URoomData>  RoomData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if a specific RoomData is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if a specific RoomData is already in the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyRoomData", nullptr, nullptr, sizeof(DungeonGenerator_eventHasAlreadyRoomData_Parms), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventIsValidDungeon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventIsValidDungeon_Parms), &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Condition to validate a dungeon Generation\n" },
		{ "DisplayName", "Is Valid Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Condition to validate a dungeon Generation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "IsValidDungeon", nullptr, nullptr, sizeof(DungeonGenerator_eventIsValidDungeon_Parms), Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics
	{
		struct DungeonGenerator_eventIsValidDungeon_Implementation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventIsValidDungeon_Implementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonGenerator_eventIsValidDungeon_Implementation_Parms), &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "IsValidDungeon_Implementation", nullptr, nullptr, sizeof(DungeonGenerator_eventIsValidDungeon_Implementation_Parms), Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Load all room levels\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Load all room levels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "LoadAllRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Called before generating a new dungeon and each time IsValidDungeon return false\n" },
		{ "DisplayName", "Generation Init" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Called before generating a new dungeon and each time IsValidDungeon return false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationInit_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPostGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Called after all rooms are loaded and initialized\n" },
		{ "DisplayName", "Post Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Called after all rooms are loaded and initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPostGeneration_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ===== Overridable events by native inheritance =====\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "===== Overridable events by native inheritance =====" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPreGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Called after unloading previous dungeon but before generating next dungeon.\n" },
		{ "DisplayName", "Pre Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Called after unloading previous dungeon but before generating next dungeon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPreGeneration_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics
	{
		struct DungeonGenerator_eventOnRoomAdded_Parms
		{
			TSubclassOf<URoomData>  NewRoom;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventOnRoomAdded_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnRoomAdded", nullptr, nullptr, sizeof(DungeonGenerator_eventOnRoomAdded_Parms), Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventOnRoomAdded_BP_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Called when the room NewRoom is added in the generation (but not spawned yet)\n" },
		{ "DisplayName", "On Room Added" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Called when the room NewRoom is added in the generation (but not spawned yet)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnRoomAdded_BP", nullptr, nullptr, sizeof(DungeonGenerator_eventOnRoomAdded_BP_Parms), Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics
	{
		struct DungeonGenerator_eventOnStateBegin_Parms
		{
			EGenerationState _State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::NewProp__State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::NewProp__State = { "_State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventOnStateBegin_Parms, _State), Z_Construct_UEnum_ProceduralDungeon_EGenerationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::NewProp__State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::NewProp__State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnStateBegin", nullptr, nullptr, sizeof(DungeonGenerator_eventOnStateBegin_Parms), Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnStateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnStateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics
	{
		struct DungeonGenerator_eventOnStateEnd_Parms
		{
			EGenerationState _State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::NewProp__State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::NewProp__State = { "_State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventOnStateEnd_Parms, _State), Z_Construct_UEnum_ProceduralDungeon_EGenerationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::NewProp__State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::NewProp__State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnStateEnd", nullptr, nullptr, sizeof(DungeonGenerator_eventOnStateEnd_Parms), Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnStateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnStateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics
	{
		struct DungeonGenerator_eventOnStateTick_Parms
		{
			EGenerationState _State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::NewProp__State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::NewProp__State = { "_State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventOnStateTick_Parms, _State), Z_Construct_UEnum_ProceduralDungeon_EGenerationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::NewProp__State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::NewProp__State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnStateTick", nullptr, nullptr, sizeof(DungeonGenerator_eventOnStateTick_Parms), Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnStateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnStateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_SetState_Statics
	{
		struct DungeonGenerator_eventSetState_Parms
		{
			EGenerationState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonGenerator_eventSetState_Parms, NewState), Z_Construct_UEnum_ProceduralDungeon_EGenerationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ===== FSM =====\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "===== FSM =====" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetState", nullptr, nullptr, sizeof(DungeonGenerator_eventSetState_Parms), Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// unload all room levels\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "unload all room levels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "UnloadAllRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
	{
		return ADungeonGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreGenerationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreGenerationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPostGenerationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostGenerationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerationInitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerationInitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRoomAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomAddedEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeedType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SeedType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_BeginGeneration, "BeginGeneration" }, // 2399603319
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseDoor, "ChooseDoor" }, // 2504054228
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Implementation, "ChooseDoor_Implementation" }, // 1119581224
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData, "ChooseFirstRoomData" }, // 801655166
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Implementation, "ChooseFirstRoomData_Implementation" }, // 1780512209
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData, "ChooseNextRoomData" }, // 1611414315
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Implementation, "ChooseNextRoomData_Implementation" }, // 3311821712
		{ &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom, "ContinueToAddRoom" }, // 484963039
		{ &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Implementation, "ContinueToAddRoom_Implementation" }, // 3159937092
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomData, "CountRoomData" }, // 4037705793
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData, "CountTotalRoomData" }, // 3583098449
		{ &Z_Construct_UFunction_ADungeonGenerator_CreateDungeon, "CreateDungeon" }, // 3758405256
		{ &Z_Construct_UFunction_ADungeonGenerator_DispatchGenerationInit, "DispatchGenerationInit" }, // 3931198479
		{ &Z_Construct_UFunction_ADungeonGenerator_DispatchPostGeneration, "DispatchPostGeneration" }, // 1937108403
		{ &Z_Construct_UFunction_ADungeonGenerator_DispatchPreGeneration, "DispatchPreGeneration" }, // 316055226
		{ &Z_Construct_UFunction_ADungeonGenerator_DispatchRoomAdded, "DispatchRoomAdded" }, // 350481386
		{ &Z_Construct_UFunction_ADungeonGenerator_Generate, "Generate" }, // 966802253
		{ &Z_Construct_UFunction_ADungeonGenerator_GetNbRoom, "GetNbRoom" }, // 1137395257
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData, "GetRandomRoomData" }, // 664283885
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 2765020112
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 1978489000
		{ &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon, "IsValidDungeon" }, // 2213599734
		{ &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Implementation, "IsValidDungeon_Implementation" }, // 2006867934
		{ &Z_Construct_UFunction_ADungeonGenerator_LoadAllRooms, "LoadAllRooms" }, // 1581235109
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit, "OnGenerationInit" }, // 629637404
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_BP, "OnGenerationInit_BP" }, // 2563074675
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration, "OnPostGeneration" }, // 895268605
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_BP, "OnPostGeneration_BP" }, // 3088113586
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration, "OnPreGeneration" }, // 665078502
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_BP, "OnPreGeneration_BP" }, // 2282859971
		{ &Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded, "OnRoomAdded" }, // 3302789106
		{ &Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_BP, "OnRoomAdded_BP" }, // 497185581
		{ &Z_Construct_UFunction_ADungeonGenerator_OnStateBegin, "OnStateBegin" }, // 2307635451
		{ &Z_Construct_UFunction_ADungeonGenerator_OnStateEnd, "OnStateEnd" }, // 3512002624
		{ &Z_Construct_UFunction_ADungeonGenerator_OnStateTick, "OnStateTick" }, // 2405972993
		{ &Z_Construct_UFunction_ADungeonGenerator_SetState, "SetState" }, // 1752104786
		{ &Z_Construct_UFunction_ADungeonGenerator_UnloadAllRooms, "UnloadAllRooms" }, // 2921116735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonGenerator.h" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// ===== Events =====\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "===== Events =====" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent = { "OnPreGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, OnPreGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent = { "OnPostGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, OnPostGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent = { "OnGenerationInitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, OnGenerationInitEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent = { "OnRoomAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, OnRoomAddedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, GenerationType), Z_Construct_UEnum_ProceduralDungeon_EGenerationType, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType = { "SeedType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, SeedType), Z_Construct_UEnum_ProceduralDungeon_ESeedType, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, Seed), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner = { "DoorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList = { "DoorList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerator, DoorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
		&ADungeonGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonGenerator, 2464288903);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADungeonGenerator>()
	{
		return ADungeonGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonGenerator(Z_Construct_UClass_ADungeonGenerator, &ADungeonGenerator::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("ADungeonGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
