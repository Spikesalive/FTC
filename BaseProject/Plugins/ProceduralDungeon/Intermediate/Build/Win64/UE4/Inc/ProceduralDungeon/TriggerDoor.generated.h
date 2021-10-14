// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROCEDURALDUNGEON_TriggerDoor_generated_h
#error "TriggerDoor.generated.h already included, missing '#pragma once' in TriggerDoor.h"
#endif
#define PROCEDURALDUNGEON_TriggerDoor_generated_h

#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_SPARSE_DATA
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRoomsAlwaysVisible); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRoomsAlwaysVisible); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerDoor(); \
	friend struct Z_Construct_UClass_ATriggerDoor_Statics; \
public: \
	DECLARE_CLASS(ATriggerDoor, ADoor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ATriggerDoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerDoor(); \
	friend struct Z_Construct_UClass_ATriggerDoor_Statics; \
public: \
	DECLARE_CLASS(ATriggerDoor, ADoor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ATriggerDoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerDoor(ATriggerDoor&&); \
	NO_API ATriggerDoor(const ATriggerDoor&); \
public:


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerDoor(ATriggerDoor&&); \
	NO_API ATriggerDoor(const ATriggerDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerDoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ATriggerDoor, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__CharacterList() { return STRUCT_OFFSET(ATriggerDoor, CharacterList); }


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_12_PROLOG
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_RPC_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_INCLASS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ATriggerDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
