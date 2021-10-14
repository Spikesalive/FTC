// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROCEDURALDUNGEON_TriggerType_generated_h
#error "TriggerType.generated.h already included, missing '#pragma once' in TriggerType.h"
#endif
#define PROCEDURALDUNGEON_TriggerType_generated_h

#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_11_DELEGATE \
struct _Script_ProceduralDungeon_eventTriggerArrayEvent_Parms \
{ \
	TArray<AActor*> Actor; \
}; \
static inline void FTriggerArrayEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerArrayEvent, const TArray<AActor*>& Actor) \
{ \
	_Script_ProceduralDungeon_eventTriggerArrayEvent_Parms Parms; \
	Parms.Actor=Actor; \
	TriggerArrayEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_10_DELEGATE \
struct _Script_ProceduralDungeon_eventTriggerEvent_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerEvent, AActor* Actor) \
{ \
	_Script_ProceduralDungeon_eventTriggerEvent_Parms Parms; \
	Parms.Actor=Actor; \
	TriggerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_SPARSE_DATA
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerDeactivate); \
	DECLARE_FUNCTION(execTriggerActivate); \
	DECLARE_FUNCTION(execTriggerTick); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter); \
	DECLARE_FUNCTION(execGetActorList); \
	DECLARE_FUNCTION(execIsActivated);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerDeactivate); \
	DECLARE_FUNCTION(execTriggerActivate); \
	DECLARE_FUNCTION(execTriggerTick); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter); \
	DECLARE_FUNCTION(execGetActorList); \
	DECLARE_FUNCTION(execIsActivated);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerType(); \
	friend struct Z_Construct_UClass_UTriggerType_Statics; \
public: \
	DECLARE_CLASS(UTriggerType, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UTriggerType)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerType(); \
	friend struct Z_Construct_UClass_UTriggerType_Statics; \
public: \
	DECLARE_CLASS(UTriggerType, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UTriggerType)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerType(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerType(UTriggerType&&); \
	NO_API UTriggerType(const UTriggerType&); \
public:


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerType(UTriggerType&&); \
	NO_API UTriggerType(const UTriggerType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerType)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActivated() { return STRUCT_OFFSET(UTriggerType, bIsActivated); } \
	FORCEINLINE static uint32 __PPO__ActorList() { return STRUCT_OFFSET(UTriggerType, ActorList); } \
	FORCEINLINE static uint32 __PPO__TickTimer() { return STRUCT_OFFSET(UTriggerType, TickTimer); } \
	FORCEINLINE static uint32 __PPO__ActivationTimer() { return STRUCT_OFFSET(UTriggerType, ActivationTimer); }


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_14_PROLOG
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_RPC_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_INCLASS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UTriggerType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
