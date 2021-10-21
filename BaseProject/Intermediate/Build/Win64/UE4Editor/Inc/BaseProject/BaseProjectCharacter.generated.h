// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEPROJECT_BaseProjectCharacter_generated_h
#error "BaseProjectCharacter.generated.h already included, missing '#pragma once' in BaseProjectCharacter.h"
#endif
#define BASEPROJECT_BaseProjectCharacter_generated_h

#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_SPARSE_DATA
#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_RPC_WRAPPERS
#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseProjectCharacter(); \
	friend struct Z_Construct_UClass_ABaseProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectCharacter)


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseProjectCharacter(); \
	friend struct Z_Construct_UClass_ABaseProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectCharacter)


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectCharacter(ABaseProjectCharacter&&); \
	NO_API ABaseProjectCharacter(const ABaseProjectCharacter&); \
public:


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectCharacter(ABaseProjectCharacter&&); \
	NO_API ABaseProjectCharacter(const ABaseProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseProjectCharacter)


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABaseProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABaseProjectCharacter, FollowCamera); }


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_9_PROLOG
#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_SPARSE_DATA \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_RPC_WRAPPERS \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_INCLASS \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_SPARSE_DATA \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BaseProject_Source_BaseProject_BaseProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEPROJECT_API UClass* StaticClass<class ABaseProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BaseProject_Source_BaseProject_BaseProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
