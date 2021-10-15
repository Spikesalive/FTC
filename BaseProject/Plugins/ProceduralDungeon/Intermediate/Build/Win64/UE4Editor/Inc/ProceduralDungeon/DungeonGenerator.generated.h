// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URoomData;
enum class EGenerationState : uint8;
class ADoor;
#ifdef PROCEDURALDUNGEON_DungeonGenerator_generated_h
#error "DungeonGenerator.generated.h already included, missing '#pragma once' in DungeonGenerator.h"
#endif
#define PROCEDURALDUNGEON_DungeonGenerator_generated_h

#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_12_DELEGATE \
struct _Script_ProceduralDungeon_eventRoomEvent_Parms \
{ \
	TSubclassOf<URoomData>  NewRoom; \
}; \
static inline void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, TSubclassOf<URoomData>  NewRoom) \
{ \
	_Script_ProceduralDungeon_eventRoomEvent_Parms Parms; \
	Parms.NewRoom=NewRoom; \
	RoomEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_11_DELEGATE \
static inline void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent) \
{ \
	GenerationEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_SPARSE_DATA
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_RPC_WRAPPERS \
	virtual void BeginGeneration_Implementation(uint32 _Seed); \
	virtual bool ContinueToAddRoom_Implementation(); \
	virtual bool IsValidDungeon_Implementation(); \
	virtual TSubclassOf<ADoor>  ChooseDoor_Implementation(TSubclassOf<URoomData>  CurrentRoom, TSubclassOf<URoomData>  NextRoom); \
	virtual TSubclassOf<URoomData>  ChooseNextRoomData_Implementation(TSubclassOf<URoomData>  CurrentRoom); \
	virtual TSubclassOf<URoomData>  ChooseFirstRoomData_Implementation(); \
 \
	DECLARE_FUNCTION(execDispatchRoomAdded); \
	DECLARE_FUNCTION(execDispatchGenerationInit); \
	DECLARE_FUNCTION(execDispatchPostGeneration); \
	DECLARE_FUNCTION(execDispatchPreGeneration); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateTick); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execUnloadAllRooms); \
	DECLARE_FUNCTION(execLoadAllRooms); \
	DECLARE_FUNCTION(execCreateDungeon); \
	DECLARE_FUNCTION(execBeginGeneration); \
	DECLARE_FUNCTION(execOnRoomAdded); \
	DECLARE_FUNCTION(execOnGenerationInit); \
	DECLARE_FUNCTION(execOnPostGeneration); \
	DECLARE_FUNCTION(execOnPreGeneration); \
	DECLARE_FUNCTION(execContinueToAddRoom_Implementation); \
	DECLARE_FUNCTION(execIsValidDungeon_Implementation); \
	DECLARE_FUNCTION(execChooseDoor_Implementation); \
	DECLARE_FUNCTION(execChooseNextRoomData_Implementation); \
	DECLARE_FUNCTION(execChooseFirstRoomData_Implementation); \
	DECLARE_FUNCTION(execGetNbRoom); \
	DECLARE_FUNCTION(execGetRandomRoomData); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execContinueToAddRoom); \
	DECLARE_FUNCTION(execIsValidDungeon); \
	DECLARE_FUNCTION(execChooseDoor); \
	DECLARE_FUNCTION(execChooseNextRoomData); \
	DECLARE_FUNCTION(execChooseFirstRoomData); \
	DECLARE_FUNCTION(execGenerate);


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginGeneration_Implementation(uint32 _Seed); \
 \
	DECLARE_FUNCTION(execDispatchRoomAdded); \
	DECLARE_FUNCTION(execDispatchGenerationInit); \
	DECLARE_FUNCTION(execDispatchPostGeneration); \
	DECLARE_FUNCTION(execDispatchPreGeneration); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateTick); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execUnloadAllRooms); \
	DECLARE_FUNCTION(execLoadAllRooms); \
	DECLARE_FUNCTION(execCreateDungeon); \
	DECLARE_FUNCTION(execBeginGeneration); \
	DECLARE_FUNCTION(execOnRoomAdded); \
	DECLARE_FUNCTION(execOnGenerationInit); \
	DECLARE_FUNCTION(execOnPostGeneration); \
	DECLARE_FUNCTION(execOnPreGeneration); \
	DECLARE_FUNCTION(execContinueToAddRoom_Implementation); \
	DECLARE_FUNCTION(execIsValidDungeon_Implementation); \
	DECLARE_FUNCTION(execChooseDoor_Implementation); \
	DECLARE_FUNCTION(execChooseNextRoomData_Implementation); \
	DECLARE_FUNCTION(execChooseFirstRoomData_Implementation); \
	DECLARE_FUNCTION(execGetNbRoom); \
	DECLARE_FUNCTION(execGetRandomRoomData); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execContinueToAddRoom); \
	DECLARE_FUNCTION(execIsValidDungeon); \
	DECLARE_FUNCTION(execChooseDoor); \
	DECLARE_FUNCTION(execChooseNextRoomData); \
	DECLARE_FUNCTION(execChooseFirstRoomData); \
	DECLARE_FUNCTION(execGenerate);


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_EVENT_PARMS \
	struct DungeonGenerator_eventBeginGeneration_Parms \
	{ \
		uint32 _Seed; \
	}; \
	struct DungeonGenerator_eventChooseDoor_Parms \
	{ \
		TSubclassOf<URoomData>  CurrentRoom; \
		TSubclassOf<URoomData>  NextRoom; \
		TSubclassOf<ADoor>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DungeonGenerator_eventChooseDoor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DungeonGenerator_eventChooseFirstRoomData_Parms \
	{ \
		TSubclassOf<URoomData>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DungeonGenerator_eventChooseFirstRoomData_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DungeonGenerator_eventChooseNextRoomData_Parms \
	{ \
		TSubclassOf<URoomData>  CurrentRoom; \
		TSubclassOf<URoomData>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DungeonGenerator_eventChooseNextRoomData_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DungeonGenerator_eventContinueToAddRoom_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DungeonGenerator_eventContinueToAddRoom_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DungeonGenerator_eventIsValidDungeon_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DungeonGenerator_eventIsValidDungeon_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DungeonGenerator_eventOnRoomAdded_BP_Parms \
	{ \
		TSubclassOf<URoomData>  NewRoom; \
	};


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_CALLBACK_WRAPPERS
#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_INCLASS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonGenerator(ADungeonGenerator&&); \
	NO_API ADungeonGenerator(const ADungeonGenerator&); \
public:


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonGenerator(ADungeonGenerator&&); \
	NO_API ADungeonGenerator(const ADungeonGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator)


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GenerationType() { return STRUCT_OFFSET(ADungeonGenerator, GenerationType); } \
	FORCEINLINE static uint32 __PPO__SeedType() { return STRUCT_OFFSET(ADungeonGenerator, SeedType); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ADungeonGenerator, Seed); } \
	FORCEINLINE static uint32 __PPO__RoomList() { return STRUCT_OFFSET(ADungeonGenerator, RoomList); } \
	FORCEINLINE static uint32 __PPO__DoorList() { return STRUCT_OFFSET(ADungeonGenerator, DoorList); }


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_17_PROLOG \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_EVENT_PARMS


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_SPARSE_DATA \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_RPC_WRAPPERS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_CALLBACK_WRAPPERS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_INCLASS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_SPARSE_DATA \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_CALLBACK_WRAPPERS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_INCLASS_NO_PURE_DECLS \
	BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ADungeonGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BaseProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
