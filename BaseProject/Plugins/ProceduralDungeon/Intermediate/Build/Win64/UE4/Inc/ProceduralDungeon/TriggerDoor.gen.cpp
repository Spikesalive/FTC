// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/TriggerDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDoor() {}
// Cross Module References
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerDoor::execSetRoomsAlwaysVisible)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomsAlwaysVisible(Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerDoor::execOnTriggerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerDoor::execOnTriggerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATriggerDoor::StaticRegisterNativesATriggerDoor()
	{
		UClass* Class = ATriggerDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerEnter", &ATriggerDoor::execOnTriggerEnter },
			{ "OnTriggerExit", &ATriggerDoor::execOnTriggerExit },
			{ "SetRoomsAlwaysVisible", &ATriggerDoor::execSetRoomsAlwaysVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics
	{
		struct TriggerDoor_eventOnTriggerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerDoor_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerDoor_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "OnTriggerEnter", nullptr, nullptr, sizeof(TriggerDoor_eventOnTriggerEnter_Parms), Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics
	{
		struct TriggerDoor_eventOnTriggerExit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "OnTriggerExit", nullptr, nullptr, sizeof(TriggerDoor_eventOnTriggerExit_Parms), Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerDoor_OnTriggerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics
	{
		struct TriggerDoor_eventSetRoomsAlwaysVisible_Parms
		{
			bool Visible;
		};
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((TriggerDoor_eventSetRoomsAlwaysVisible_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerDoor_eventSetRoomsAlwaysVisible_Parms), &Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "SetRoomsAlwaysVisible", nullptr, nullptr, sizeof(TriggerDoor_eventSetRoomsAlwaysVisible_Parms), Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerDoor_NoRegister()
	{
		return ATriggerDoor::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter, "OnTriggerEnter" }, // 207737801
		{ &Z_Construct_UFunction_ATriggerDoor_OnTriggerExit, "OnTriggerExit" }, // 3811976489
		{ &Z_Construct_UFunction_ATriggerDoor_SetRoomsAlwaysVisible, "SetRoomsAlwaysVisible" }, // 4232482434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TriggerDoor.h" },
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Door Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerDoor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList_Inner = { "CharacterList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList = { "CharacterList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerDoor, CharacterList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_CharacterList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerDoor_Statics::ClassParams = {
		&ATriggerDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerDoor, 3100546039);
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ATriggerDoor>()
	{
		return ATriggerDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerDoor(Z_Construct_UClass_ATriggerDoor, &ATriggerDoor::StaticClass, TEXT("/Script/ProceduralDungeon"), TEXT("ATriggerDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
