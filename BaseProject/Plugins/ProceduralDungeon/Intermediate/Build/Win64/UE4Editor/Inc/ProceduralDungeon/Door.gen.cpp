// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADoor::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOnDoorClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorClose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOnDoorOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOnDoorUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorUnlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOnDoorLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorLock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execCloseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	static FName NAME_ADoor_OnDoorClose_BP = FName(TEXT("OnDoorClose_BP"));
	void ADoor::OnDoorClose_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorClose_BP),NULL);
	}
	static FName NAME_ADoor_OnDoorLock_BP = FName(TEXT("OnDoorLock_BP"));
	void ADoor::OnDoorLock_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorLock_BP),NULL);
	}
	static FName NAME_ADoor_OnDoorOpen_BP = FName(TEXT("OnDoorOpen_BP"));
	void ADoor::OnDoorOpen_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorOpen_BP),NULL);
	}
	static FName NAME_ADoor_OnDoorUnlock_BP = FName(TEXT("OnDoorUnlock_BP"));
	void ADoor::OnDoorUnlock_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorUnlock_BP),NULL);
	}
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ADoor::execCloseDoor },
			{ "IsLocked", &ADoor::execIsLocked },
			{ "IsOpen", &ADoor::execIsOpen },
			{ "OnDoorClose", &ADoor::execOnDoorClose },
			{ "OnDoorLock", &ADoor::execOnDoorLock },
			{ "OnDoorOpen", &ADoor::execOnDoorOpen },
			{ "OnDoorUnlock", &ADoor::execOnDoorUnlock },
			{ "OpenDoor", &ADoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_IsLocked_Statics
	{
		struct Door_eventIsLocked_Parms
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
	void Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Door_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Door_eventIsLocked_Parms), &Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "Is Locked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "IsLocked", nullptr, nullptr, sizeof(Door_eventIsLocked_Parms), Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_IsOpen_Statics
	{
		struct Door_eventIsOpen_Parms
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
	void Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Door_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Door_eventIsOpen_Parms), &Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "Is Open" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "IsOpen", nullptr, nullptr, sizeof(Door_eventIsOpen_Parms), Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Close" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorClose_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorClose_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorLock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorLock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Locked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorLock_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorLock_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Open" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorOpen_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorOpen_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Unlocked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorUnlock_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OnDoorUnlock_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysVisible_MetaData[];
#endif
		static void NewProp_AlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysUnlocked_MetaData[];
#endif
		static void NewProp_AlwaysUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_CloseDoor, "CloseDoor" }, // 7769653
		{ &Z_Construct_UFunction_ADoor_IsLocked, "IsLocked" }, // 2718249843
		{ &Z_Construct_UFunction_ADoor_IsOpen, "IsOpen" }, // 3916952559
		{ &Z_Construct_UFunction_ADoor_OnDoorClose, "OnDoorClose" }, // 4115856460
		{ &Z_Construct_UFunction_ADoor_OnDoorClose_BP, "OnDoorClose_BP" }, // 3444984705
		{ &Z_Construct_UFunction_ADoor_OnDoorLock, "OnDoorLock" }, // 1132547884
		{ &Z_Construct_UFunction_ADoor_OnDoorLock_BP, "OnDoorLock_BP" }, // 3818576907
		{ &Z_Construct_UFunction_ADoor_OnDoorOpen, "OnDoorOpen" }, // 3331948804
		{ &Z_Construct_UFunction_ADoor_OnDoorOpen_BP, "OnDoorOpen_BP" }, // 908172050
		{ &Z_Construct_UFunction_ADoor_OnDoorUnlock, "OnDoorUnlock" }, // 1102525225
		{ &Z_Construct_UFunction_ADoor_OnDoorUnlock_BP, "OnDoorUnlock_BP" }, // 1370769904
		{ &Z_Construct_UFunction_ADoor_OpenDoor, "OpenDoor" }, // 329581786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_RoomA_MetaData[] = {
		{ "Comment", "// The two connected rooms to this door\n" },
		{ "ModuleRelativePath", "Public/Door.h" },
		{ "ToolTip", "The two connected rooms to this door" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RoomA = { "RoomA", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, RoomA), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_RoomA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_RoomA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_RoomB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RoomB = { "RoomB", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, RoomB), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_RoomB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_RoomB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible_SetBit(void* Obj)
	{
		((ADoor*)Obj)->AlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible = { "AlwaysVisible", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked_SetBit(void* Obj)
	{
		((ADoor*)Obj)->AlwaysUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked = { "AlwaysUnlocked", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RoomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RoomB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_AlwaysUnlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor, 583455807);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor(Z_Construct_UClass_ADoor, &ADoor::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("ADoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
