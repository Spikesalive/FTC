// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALDUNGEON_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PROCEDURALDUNGEON_Door_generated_h

#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_SPARSE_DATA
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execOnDoorClose); \
	DECLARE_FUNCTION(execOnDoorOpen); \
	DECLARE_FUNCTION(execOnDoorUnlock); \
	DECLARE_FUNCTION(execOnDoorLock); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execOnDoorClose); \
	DECLARE_FUNCTION(execOnDoorOpen); \
	DECLARE_FUNCTION(execOnDoorUnlock); \
	DECLARE_FUNCTION(execOnDoorLock); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_EVENT_PARMS
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoomA() { return STRUCT_OFFSET(ADoor, RoomA); } \
	FORCEINLINE static uint32 __PPO__RoomB() { return STRUCT_OFFSET(ADoor, RoomB); } \
	FORCEINLINE static uint32 __PPO__AlwaysVisible() { return STRUCT_OFFSET(ADoor, AlwaysVisible); } \
	FORCEINLINE static uint32 __PPO__AlwaysUnlocked() { return STRUCT_OFFSET(ADoor, AlwaysUnlocked); }


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_12_PROLOG \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_EVENT_PARMS


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_RPC_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_INCLASS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
