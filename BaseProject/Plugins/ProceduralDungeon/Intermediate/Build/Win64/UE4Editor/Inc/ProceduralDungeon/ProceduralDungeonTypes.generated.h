// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALDUNGEON_ProceduralDungeonTypes_generated_h
#error "ProceduralDungeonTypes.generated.h already included, missing '#pragma once' in ProceduralDungeonTypes.h"
#endif
#define PROCEDURALDUNGEON_ProceduralDungeonTypes_generated_h

#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoorDef_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FDoorDef>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h


#define FOREACH_ENUM_ESEEDTYPE(op) \
	op(ESeedType::Random) \
	op(ESeedType::AutoIncrement) \
	op(ESeedType::Fixed) \
	op(ESeedType::NbType) 

enum class ESeedType : uint8;
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<ESeedType>();

#define FOREACH_ENUM_EGENERATIONTYPE(op) \
	op(EGenerationType::DFS) \
	op(EGenerationType::BFS) \
	op(EGenerationType::NbType) 

enum class EGenerationType : uint8;
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationType>();

#define FOREACH_ENUM_EDOORDIRECTION(op) \
	op(EDoorDirection::North) \
	op(EDoorDirection::East) \
	op(EDoorDirection::West) \
	op(EDoorDirection::South) \
	op(EDoorDirection::NbDirection) 

enum class EDoorDirection : uint8;
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDoorDirection>();

#define FOREACH_ENUM_EGENERATIONSTATE(op) \
	op(EGenerationState::None) \
	op(EGenerationState::Generation) \
	op(EGenerationState::Load) \
	op(EGenerationState::Initialization) \
	op(EGenerationState::Unload) \
	op(EGenerationState::NbState) 

enum class EGenerationState : uint8;
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
