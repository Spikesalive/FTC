// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALDUNGEON_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define PROCEDURALDUNGEON_Room_generated_h

#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomConnection_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FRoomConnection>();

#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_SPARSE_DATA
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_RPC_WRAPPERS
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoom(); \
	friend struct Z_Construct_UClass_URoom_Statics; \
public: \
	DECLARE_CLASS(URoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoom)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_INCLASS \
private: \
	static void StaticRegisterNativesURoom(); \
	friend struct Z_Construct_UClass_URoom_Statics; \
public: \
	DECLARE_CLASS(URoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoom)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoom(URoom&&); \
	NO_API URoom(const URoom&); \
public:


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoom(URoom&&); \
	NO_API URoom(const URoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoom)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Connections() { return STRUCT_OFFSET(URoom, Connections); }


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_26_PROLOG
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_SPARSE_DATA \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_RPC_WRAPPERS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_INCLASS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_SPARSE_DATA \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_INCLASS_NO_PURE_DECLS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
