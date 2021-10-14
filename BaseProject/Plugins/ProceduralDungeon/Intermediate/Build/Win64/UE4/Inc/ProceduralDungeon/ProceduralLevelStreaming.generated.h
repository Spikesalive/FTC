// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UProceduralLevelStreaming;
class URoomData;
struct FVector;
struct FRotator;
class UWorld;
#ifdef PROCEDURALDUNGEON_ProceduralLevelStreaming_generated_h
#error "ProceduralLevelStreaming.generated.h already included, missing '#pragma once' in ProceduralLevelStreaming.h"
#endif
#define PROCEDURALDUNGEON_ProceduralLevelStreaming_generated_h

#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_SPARSE_DATA
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelDynamicUnloaded); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadLevelInstanceBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadLevelInstance);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelDynamicUnloaded); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadLevelInstanceBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadLevelInstance);


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralLevelStreaming(); \
	friend struct Z_Construct_UClass_UProceduralLevelStreaming_Statics; \
public: \
	DECLARE_CLASS(UProceduralLevelStreaming, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UProceduralLevelStreaming)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralLevelStreaming(); \
	friend struct Z_Construct_UClass_UProceduralLevelStreaming_Statics; \
public: \
	DECLARE_CLASS(UProceduralLevelStreaming, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UProceduralLevelStreaming)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralLevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralLevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralLevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralLevelStreaming); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralLevelStreaming(UProceduralLevelStreaming&&); \
	NO_API UProceduralLevelStreaming(const UProceduralLevelStreaming&); \
public:


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralLevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralLevelStreaming(UProceduralLevelStreaming&&); \
	NO_API UProceduralLevelStreaming(const UProceduralLevelStreaming&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralLevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralLevelStreaming); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralLevelStreaming)


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_14_PROLOG
#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_RPC_WRAPPERS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_INCLASS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_SPARSE_DATA \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralLevelStreaming."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UProceduralLevelStreaming>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralLevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
