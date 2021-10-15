// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKERNODES_DarkerNodesSettings_generated_h
#error "DarkerNodesSettings.generated.h already included, missing '#pragma once' in DarkerNodesSettings.h"
#endif
#define DARKERNODES_DarkerNodesSettings_generated_h

#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_SPARSE_DATA
#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_RPC_WRAPPERS
#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDarkerNodesSettings(); \
	friend struct Z_Construct_UClass_UDarkerNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UDarkerNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DarkerNodes"), NO_API) \
	DECLARE_SERIALIZER(UDarkerNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUDarkerNodesSettings(); \
	friend struct Z_Construct_UClass_UDarkerNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UDarkerNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DarkerNodes"), NO_API) \
	DECLARE_SERIALIZER(UDarkerNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDarkerNodesSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDarkerNodesSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkerNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkerNodesSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDarkerNodesSettings(UDarkerNodesSettings&&); \
	NO_API UDarkerNodesSettings(const UDarkerNodesSettings&); \
public:


#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDarkerNodesSettings(UDarkerNodesSettings&&); \
	NO_API UDarkerNodesSettings(const UDarkerNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkerNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkerNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDarkerNodesSettings)


#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_PRIVATE_PROPERTY_OFFSET
#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_112_PROLOG
#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_SPARSE_DATA \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_RPC_WRAPPERS \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_INCLASS \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_SPARSE_DATA \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_INCLASS_NO_PURE_DECLS \
	BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKERNODES_API UClass* StaticClass<class UDarkerNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BaseProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h


#define FOREACH_ENUM_EICONSTYLE(op) \
	op(EIconStyle::Line) \
	op(EIconStyle::Solid) 

enum class EIconStyle : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EIconStyle>();

#define FOREACH_ENUM_EBLUEPRINTVARNODESTYLE(op) \
	op(EBlueprintVarNodeStyle::DarkSolid) \
	op(EBlueprintVarNodeStyle::LightSolid) \
	op(EBlueprintVarNodeStyle::DarkGlass) \
	op(EBlueprintVarNodeStyle::LightGlass) 

enum class EBlueprintVarNodeStyle : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>();

#define FOREACH_ENUM_EBLUEPRINTVARNODELINE(op) \
	op(EBlueprintVarNodeLine::Thin) \
	op(EBlueprintVarNodeLine::Thick) 

enum class EBlueprintVarNodeLine : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>();

#define FOREACH_ENUM_EFONTSIZE(op) \
	op(EFontSize::Small) \
	op(EFontSize::Normal) \
	op(EFontSize::Big) \
	op(EFontSize::Bigger) 

enum class EFontSize : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EFontSize>();

#define FOREACH_ENUM_EFONTFAMILY(op) \
	op(EFontFamily::BalsamiqSans) \
	op(EFontFamily::Cannonade) \
	op(EFontFamily::CaskaydiaCove) \
	op(EFontFamily::EudoxusSans) \
	op(EFontFamily::GolosUI) \
	op(EFontFamily::Jua) \
	op(EFontFamily::Junction) \
	op(EFontFamily::NewTelegraph) \
	op(EFontFamily::Roboto) \
	op(EFontFamily::XXIIAven) 

enum class EFontFamily : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EFontFamily>();

#define FOREACH_ENUM_EBUTTONBORDER(op) \
	op(EButtonBorder::None) \
	op(EButtonBorder::Dark) \
	op(EButtonBorder::Light) 

enum class EButtonBorder : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EButtonBorder>();

#define FOREACH_ENUM_EBUTTONPADDING(op) \
	op(EButtonPadding::None) \
	op(EButtonPadding::Small) \
	op(EButtonPadding::Normal) \
	op(EButtonPadding::Big) 

enum class EButtonPadding : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>();

#define FOREACH_ENUM_EPRIMARYCOLOR(op) \
	op(EPrimaryColor::White) \
	op(EPrimaryColor::Orange) \
	op(EPrimaryColor::Cyan) \
	op(EPrimaryColor::Red) \
	op(EPrimaryColor::Purple) \
	op(EPrimaryColor::Green) 

enum class EPrimaryColor : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EPrimaryColor>();

#define FOREACH_ENUM_ETHEMETEMPERATURE(op) \
	op(EThemeTemperature::Cooler) \
	op(EThemeTemperature::Cool) \
	op(EThemeTemperature::Normal) \
	op(EThemeTemperature::Warm) \
	op(EThemeTemperature::Warmer) 

enum class EThemeTemperature : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EThemeTemperature>();

#define FOREACH_ENUM_ETHEMELIGHT(op) \
	op(EThemeLight::Dark) \
	op(EThemeLight::Darker) \
	op(EThemeLight::Darkest) 

enum class EThemeLight : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EThemeLight>();

#define FOREACH_ENUM_EHEADERSTYLE(op) \
	op(EHeaderStyle::Gradient) \
	op(EHeaderStyle::Plain) \
	op(EHeaderStyle::Outline) 

enum class EHeaderStyle : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
