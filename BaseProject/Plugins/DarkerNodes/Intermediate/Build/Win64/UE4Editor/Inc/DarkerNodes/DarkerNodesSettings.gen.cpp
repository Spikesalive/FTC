// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Public/DarkerNodesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkerNodesSettings() {}
// Cross Module References
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EIconStyle();
	UPackage* Z_Construct_UPackage__Script_DarkerNodes();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EFontSize();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EFontFamily();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EButtonBorder();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EPrimaryColor();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EThemeTemperature();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EThemeLight();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle();
	DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister();
	DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EIconStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EIconStyle, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EIconStyle"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EIconStyle>()
	{
		return EIconStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIconStyle(EIconStyle_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EIconStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EIconStyle_Hash() { return 2066303823U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EIconStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIconStyle"), 0, Get_Z_Construct_UEnum_DarkerNodes_EIconStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIconStyle::Line", (int64)EIconStyle::Line },
				{ "EIconStyle::Solid", (int64)EIconStyle::Solid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Line.Name", "EIconStyle::Line" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Solid.Name", "EIconStyle::Solid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EIconStyle",
				"EIconStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintVarNodeStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeStyle"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>()
	{
		return EBlueprintVarNodeStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintVarNodeStyle(EBlueprintVarNodeStyle_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EBlueprintVarNodeStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Hash() { return 1813350597U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintVarNodeStyle"), 0, Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintVarNodeStyle::DarkSolid", (int64)EBlueprintVarNodeStyle::DarkSolid },
				{ "EBlueprintVarNodeStyle::LightSolid", (int64)EBlueprintVarNodeStyle::LightSolid },
				{ "EBlueprintVarNodeStyle::DarkGlass", (int64)EBlueprintVarNodeStyle::DarkGlass },
				{ "EBlueprintVarNodeStyle::LightGlass", (int64)EBlueprintVarNodeStyle::LightGlass },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DarkGlass.Name", "EBlueprintVarNodeStyle::DarkGlass" },
				{ "DarkSolid.Name", "EBlueprintVarNodeStyle::DarkSolid" },
				{ "LightGlass.Name", "EBlueprintVarNodeStyle::LightGlass" },
				{ "LightSolid.Name", "EBlueprintVarNodeStyle::LightSolid" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EBlueprintVarNodeStyle",
				"EBlueprintVarNodeStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintVarNodeLine_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeLine"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>()
	{
		return EBlueprintVarNodeLine_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintVarNodeLine(EBlueprintVarNodeLine_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EBlueprintVarNodeLine"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Hash() { return 149034841U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintVarNodeLine"), 0, Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintVarNodeLine::Thin", (int64)EBlueprintVarNodeLine::Thin },
				{ "EBlueprintVarNodeLine::Thick", (int64)EBlueprintVarNodeLine::Thick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Thick.Name", "EBlueprintVarNodeLine::Thick" },
				{ "Thin.Name", "EBlueprintVarNodeLine::Thin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EBlueprintVarNodeLine",
				"EBlueprintVarNodeLine",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFontSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EFontSize, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EFontSize"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EFontSize>()
	{
		return EFontSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontSize(EFontSize_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EFontSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EFontSize_Hash() { return 1440395356U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EFontSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontSize"), 0, Get_Z_Construct_UEnum_DarkerNodes_EFontSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontSize::Small", (int64)EFontSize::Small },
				{ "EFontSize::Normal", (int64)EFontSize::Normal },
				{ "EFontSize::Big", (int64)EFontSize::Big },
				{ "EFontSize::Bigger", (int64)EFontSize::Bigger },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Big.Name", "EFontSize::Big" },
				{ "Bigger.Name", "EFontSize::Bigger" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Normal.Name", "EFontSize::Normal" },
				{ "Small.Name", "EFontSize::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EFontSize",
				"EFontSize",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFontFamily_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EFontFamily, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EFontFamily"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EFontFamily>()
	{
		return EFontFamily_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontFamily(EFontFamily_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EFontFamily"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EFontFamily_Hash() { return 3406565660U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EFontFamily()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontFamily"), 0, Get_Z_Construct_UEnum_DarkerNodes_EFontFamily_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontFamily::BalsamiqSans", (int64)EFontFamily::BalsamiqSans },
				{ "EFontFamily::Cannonade", (int64)EFontFamily::Cannonade },
				{ "EFontFamily::CaskaydiaCove", (int64)EFontFamily::CaskaydiaCove },
				{ "EFontFamily::EudoxusSans", (int64)EFontFamily::EudoxusSans },
				{ "EFontFamily::GolosUI", (int64)EFontFamily::GolosUI },
				{ "EFontFamily::Jua", (int64)EFontFamily::Jua },
				{ "EFontFamily::Junction", (int64)EFontFamily::Junction },
				{ "EFontFamily::NewTelegraph", (int64)EFontFamily::NewTelegraph },
				{ "EFontFamily::Roboto", (int64)EFontFamily::Roboto },
				{ "EFontFamily::XXIIAven", (int64)EFontFamily::XXIIAven },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BalsamiqSans.DisplayName", "BalsamiqSans (Handwritten)" },
				{ "BalsamiqSans.Name", "EFontFamily::BalsamiqSans" },
				{ "BlueprintType", "true" },
				{ "Cannonade.DisplayName", "Cannonade (Sans Serif)" },
				{ "Cannonade.Name", "EFontFamily::Cannonade" },
				{ "CaskaydiaCove.DisplayName", "Caskaydia Cove (Monospace)" },
				{ "CaskaydiaCove.Name", "EFontFamily::CaskaydiaCove" },
				{ "EudoxusSans.DisplayName", "Exodus Sans (Sans Serif)" },
				{ "EudoxusSans.Name", "EFontFamily::EudoxusSans" },
				{ "GolosUI.DisplayName", "Golos UI (Sans Serif)" },
				{ "GolosUI.Name", "EFontFamily::GolosUI" },
				{ "Jua.DisplayName", "Jua (Handwritten)" },
				{ "Jua.Name", "EFontFamily::Jua" },
				{ "Junction.DisplayName", "Junction (Sans Serif)" },
				{ "Junction.Name", "EFontFamily::Junction" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "NewTelegraph.DisplayName", "New Telegraph (Slab Serif)" },
				{ "NewTelegraph.Name", "EFontFamily::NewTelegraph" },
				{ "Roboto.DisplayName", "Roboto (Sans Serif)" },
				{ "Roboto.Name", "EFontFamily::Roboto" },
				{ "XXIIAven.DisplayName", "XXII Aven (Sans Serif)" },
				{ "XXIIAven.Name", "EFontFamily::XXIIAven" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EFontFamily",
				"EFontFamily",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EButtonBorder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EButtonBorder, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EButtonBorder"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EButtonBorder>()
	{
		return EButtonBorder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonBorder(EButtonBorder_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EButtonBorder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EButtonBorder_Hash() { return 562641048U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EButtonBorder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonBorder"), 0, Get_Z_Construct_UEnum_DarkerNodes_EButtonBorder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonBorder::None", (int64)EButtonBorder::None },
				{ "EButtonBorder::Dark", (int64)EButtonBorder::Dark },
				{ "EButtonBorder::Light", (int64)EButtonBorder::Light },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dark.Name", "EButtonBorder::Dark" },
				{ "Light.Name", "EButtonBorder::Light" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "None.Name", "EButtonBorder::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EButtonBorder",
				"EButtonBorder",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EButtonPadding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EButtonPadding, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EButtonPadding"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>()
	{
		return EButtonPadding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonPadding(EButtonPadding_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EButtonPadding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EButtonPadding_Hash() { return 2552835171U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonPadding"), 0, Get_Z_Construct_UEnum_DarkerNodes_EButtonPadding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonPadding::None", (int64)EButtonPadding::None },
				{ "EButtonPadding::Small", (int64)EButtonPadding::Small },
				{ "EButtonPadding::Normal", (int64)EButtonPadding::Normal },
				{ "EButtonPadding::Big", (int64)EButtonPadding::Big },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Big.Name", "EButtonPadding::Big" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "None.Name", "EButtonPadding::None" },
				{ "Normal.Name", "EButtonPadding::Normal" },
				{ "Small.Name", "EButtonPadding::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EButtonPadding",
				"EButtonPadding",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPrimaryColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EPrimaryColor, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EPrimaryColor"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EPrimaryColor>()
	{
		return EPrimaryColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryColor(EPrimaryColor_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EPrimaryColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EPrimaryColor_Hash() { return 708351833U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EPrimaryColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryColor"), 0, Get_Z_Construct_UEnum_DarkerNodes_EPrimaryColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryColor::White", (int64)EPrimaryColor::White },
				{ "EPrimaryColor::Orange", (int64)EPrimaryColor::Orange },
				{ "EPrimaryColor::Cyan", (int64)EPrimaryColor::Cyan },
				{ "EPrimaryColor::Red", (int64)EPrimaryColor::Red },
				{ "EPrimaryColor::Purple", (int64)EPrimaryColor::Purple },
				{ "EPrimaryColor::Green", (int64)EPrimaryColor::Green },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cyan.Name", "EPrimaryColor::Cyan" },
				{ "Green.Name", "EPrimaryColor::Green" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Orange.Name", "EPrimaryColor::Orange" },
				{ "Purple.Name", "EPrimaryColor::Purple" },
				{ "Red.Name", "EPrimaryColor::Red" },
				{ "White.Name", "EPrimaryColor::White" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EPrimaryColor",
				"EPrimaryColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EThemeTemperature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EThemeTemperature, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EThemeTemperature"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EThemeTemperature>()
	{
		return EThemeTemperature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThemeTemperature(EThemeTemperature_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EThemeTemperature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EThemeTemperature_Hash() { return 3705413836U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EThemeTemperature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThemeTemperature"), 0, Get_Z_Construct_UEnum_DarkerNodes_EThemeTemperature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThemeTemperature::Cooler", (int64)EThemeTemperature::Cooler },
				{ "EThemeTemperature::Cool", (int64)EThemeTemperature::Cool },
				{ "EThemeTemperature::Normal", (int64)EThemeTemperature::Normal },
				{ "EThemeTemperature::Warm", (int64)EThemeTemperature::Warm },
				{ "EThemeTemperature::Warmer", (int64)EThemeTemperature::Warmer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cool.Name", "EThemeTemperature::Cool" },
				{ "Cooler.Name", "EThemeTemperature::Cooler" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Normal.Name", "EThemeTemperature::Normal" },
				{ "Warm.Name", "EThemeTemperature::Warm" },
				{ "Warmer.Name", "EThemeTemperature::Warmer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EThemeTemperature",
				"EThemeTemperature",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EThemeLight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EThemeLight, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EThemeLight"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EThemeLight>()
	{
		return EThemeLight_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThemeLight(EThemeLight_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EThemeLight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EThemeLight_Hash() { return 2107993634U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EThemeLight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThemeLight"), 0, Get_Z_Construct_UEnum_DarkerNodes_EThemeLight_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThemeLight::Dark", (int64)EThemeLight::Dark },
				{ "EThemeLight::Darker", (int64)EThemeLight::Darker },
				{ "EThemeLight::Darkest", (int64)EThemeLight::Darkest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dark.Name", "EThemeLight::Dark" },
				{ "Darker.Name", "EThemeLight::Darker" },
				{ "Darkest.Name", "EThemeLight::Darkest" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EThemeLight",
				"EThemeLight",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHeaderStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EHeaderStyle, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EHeaderStyle"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>()
	{
		return EHeaderStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeaderStyle(EHeaderStyle_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EHeaderStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Hash() { return 1012545789U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeaderStyle"), 0, Get_Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeaderStyle::Gradient", (int64)EHeaderStyle::Gradient },
				{ "EHeaderStyle::Plain", (int64)EHeaderStyle::Plain },
				{ "EHeaderStyle::Outline", (int64)EHeaderStyle::Outline },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gradient.Name", "EHeaderStyle::Gradient" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Outline.Name", "EHeaderStyle::Outline" },
				{ "Plain.Name", "EHeaderStyle::Plain" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EHeaderStyle",
				"EHeaderStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDarkerNodesSettings::StaticRegisterNativesUDarkerNodesSettings()
	{
	}
	UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister()
	{
		return UDarkerNodesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDarkerNodesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[];
#endif
		static void NewProp_MasterActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGlobalSettings_MetaData[];
#endif
		static void NewProp_UseGlobalSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGlobalSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadGlobalSettings_MetaData[];
#endif
		static void NewProp_LoadGlobalSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LoadGlobalSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadDefaultStyle_MetaData[];
#endif
		static void NewProp_ReloadDefaultStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadDefaultStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMaterials_MetaData[];
#endif
		static void NewProp_UpdateMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeLight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightTheme_MetaData[];
#endif
		static void NewProp_LightTheme_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LightTheme;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeTemperature_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeTemperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeTemperature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryColor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonPadding_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonBorder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonBorder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FontSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontFamily_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FontFamily;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomRegularFont_MetaData[];
#endif
		static void NewProp_UseCustomRegularFont_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomRegularFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegularFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomBoldFont_MetaData[];
#endif
		static void NewProp_UseCustomBoldFont_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomBoldFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoldFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoldFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomItalicFont_MetaData[];
#endif
		static void NewProp_UseCustomItalicFont_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomItalicFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItalicFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItalicFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateBlueprintTheme_MetaData[];
#endif
		static void NewProp_ActivateBlueprintTheme_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateBlueprintTheme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintRegularNodeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueprintRegularNodeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueprintVarNodeRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintVarNodeLine_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintVarNodeLine;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintVarNodeStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintVarNodeStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintNodeHeaderOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueprintNodeHeaderOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintNodeHeaderSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueprintNodeHeaderSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendNodes_MetaData[];
#endif
		static void NewProp_ExtendNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExtendNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBlueprintGrid_MetaData[];
#endif
		static void NewProp_DisableBlueprintGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableBlueprintGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableUMGGrid_MetaData[];
#endif
		static void NewProp_DisableUMGGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableUMGGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginAxisOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginAxisOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomScrollbar_MetaData[];
#endif
		static void NewProp_UseCustomScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomScrollbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomIcons_MetaData[];
#endif
		static void NewProp_UseCustomIcons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomIcons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IconStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseIconColorization_MetaData[];
#endif
		static void NewProp_UseIconColorization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseIconColorization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomPanels_MetaData[];
#endif
		static void NewProp_UseCustomPanels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomPanels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomButton_MetaData[];
#endif
		static void NewProp_UseCustomButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteColors_MetaData[];
#endif
		static void NewProp_OverwriteColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverwriteColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGreyCustomization_MetaData[];
#endif
		static void NewProp_UseGreyCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGreyCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyDark_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyDark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseColorCustomization_MetaData[];
#endif
		static void NewProp_UseColorCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseColorCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPrimaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseWindowCustomization_MetaData[];
#endif
		static void NewProp_UseWindowCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseWindowCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWindowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainWindowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildWindowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildWindowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintColorCustomization_MetaData[];
#endif
		static void NewProp_UseBlueprintColorCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBlueprintColorCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridRuleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridRuleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridCenterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridCenterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularNodeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegularNodeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularNodeBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegularNodeBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarNodeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarNodeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarNodeBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarNodeBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseButtonColorCustomization_MetaData[];
#endif
		static void NewProp_UseButtonColorCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseButtonColorCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonBorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonBorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPrimary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWarning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonDanger_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonDanger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTextureResources_MetaData[];
#endif
		static void NewProp_ReloadTextureResources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadTextureResources;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDarkerNodesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Darker Nodes Plugin" },
		{ "IncludePath", "DarkerNodesSettings.h" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate or deactivate the whole plugin. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the whole plugin. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->MasterActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n\x09If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n      If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseGlobalSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings = { "UseGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Force reload the global settings (if it was modified outside this instance for example). */" },
		{ "EditCondition", "UseGlobalSettings" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Force reload the global settings (if it was modified outside this instance for example)." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->LoadGlobalSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings = { "LoadGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Reload the default style (you must disable Master Activate first). */" },
		{ "EditCondition", "!MasterActivate" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Reload the default style (you must disable Master Activate first)." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ReloadDefaultStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle = { "ReloadDefaultStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* This should fix missing elements by updating and saving the theme materials. */" },
		{ "DisplayName", "Fix Missing Elements" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "This should fix missing elements by updating and saving the theme materials." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UpdateMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials = { "UpdateMaterials", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate_MetaData[] = {
		{ "Comment", "/* Internal value to fix elements on plugin update. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Internal value to fix elements on plugin update." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, PluginVersionUpdate), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the grey background (making it lighter or darker). Default: darker */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the grey background (making it lighter or darker). Default: darker" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight = { "ThemeLight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeLight), Z_Construct_UEnum_DarkerNodes_EThemeLight, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Use light theme and invert luminosity (warning: experimental feature) */" },
		{ "DisplayName", "Light Theme (experimental)" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use light theme and invert luminosity (warning: experimental feature)" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->LightTheme = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme = { "LightTheme", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the grey background (making it more orange or cyan). Default: normal */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the grey background (making it more orange or cyan). Default: normal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature = { "ThemeTemperature", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeTemperature), Z_Construct_UEnum_DarkerNodes_EThemeTemperature, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the primary color. Default: orange */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the primary color. Default: orange" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor = { "PrimaryColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, PrimaryColor), Z_Construct_UEnum_DarkerNodes_EPrimaryColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "ButtonsAndTextFields" },
		{ "Comment", "/* Padding of buttons and text fields. Default: normal */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Padding of buttons and text fields. Default: normal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonPadding), Z_Construct_UEnum_DarkerNodes_EButtonPadding, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonRadius_MetaData[] = {
		{ "Category", "ButtonsAndTextFields" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Radius of buttons and text fields. Default: 2px */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Radius of buttons and text fields. Default: 2px" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonRadius = { "ButtonRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonRadius), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonRadius_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder_MetaData[] = {
		{ "Category", "ButtonsAndTextFields" },
		{ "Comment", "/* Add a border to buttons and text fields. Default: None */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Add a border to buttons and text fields. Default: None" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder = { "ButtonBorder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonBorder), Z_Construct_UEnum_DarkerNodes_EButtonBorder, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Font to use in the editor (it won't work on all texts). Default: Normal */" },
		{ "DisplayName", "Font Size (experimental)" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Font to use in the editor (it won't work on all texts). Default: Normal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, FontSize), Z_Construct_UEnum_DarkerNodes_EFontSize, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Font to use in the editor. Default: Roboto */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Font to use in the editor. Default: Roboto" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily = { "FontFamily", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, FontFamily), Z_Construct_UEnum_DarkerNodes_EFontFamily, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for regular texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for regular texts. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomRegularFont = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont = { "UseCustomRegularFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the regular TTF font. */" },
		{ "EditCondition", "UseCustomRegularFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the regular TTF font." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont = { "RegularFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for bold texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for bold texts. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomBoldFont = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont = { "UseCustomBoldFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the bold TTF font. */" },
		{ "EditCondition", "UseCustomBoldFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the bold TTF font." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont = { "BoldFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BoldFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for italic texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for italic texts. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomItalicFont = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont = { "UseCustomItalicFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the italic TTF font. */" },
		{ "EditCondition", "UseCustomItalicFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the italic TTF font." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont = { "ItalicFont", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ItalicFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Activate or deactivate the blueprint theme. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the blueprint theme. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ActivateBlueprintTheme = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme = { "ActivateBlueprintTheme", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Radius of regular nodes. Default: 2px */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Radius of regular nodes. Default: 2px" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius = { "BlueprintRegularNodeRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintRegularNodeRadius), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Radius of var nodes. Default: 2px */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Radius of var nodes. Default: 2px" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius = { "BlueprintVarNodeRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeRadius), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Style of the VarNode top line. Default: Thin */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Style of the VarNode top line. Default: Thin" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine = { "BlueprintVarNodeLine", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeLine), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Style of the VarNode background. Default: Dark Glass */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Style of the VarNode background. Default: Dark Glass" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle = { "BlueprintVarNodeStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeStyle), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Opacity of blueprint nodes header. Default: 0.25 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Opacity of blueprint nodes header. Default: 0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity = { "BlueprintNodeHeaderOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintNodeHeaderOpacity), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Saturation of blueprint nodes header. Default: 1.0 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Saturation of blueprint nodes header. Default: 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation = { "BlueprintNodeHeaderSaturation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintNodeHeaderSaturation), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Add a padding to make nodes match the grid on the top left corner. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Add a padding to make nodes match the grid on the top left corner. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ExtendNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes = { "ExtendNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Disable the blueprint grid. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Disable the blueprint grid. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->DisableBlueprintGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid = { "DisableBlueprintGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Disable the UMG grid. Default: false */" },
		{ "EditCondition", "DisableBlueprintGrid" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Disable the UMG grid. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->DisableUMGGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid = { "DisableUMGGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Opacity of the origin axis of the background grid. Default: 0.5 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Opacity of the origin axis of the background grid. Default: 0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity = { "OriginAxisOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, OriginAxisOpacity), METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Use the dark scrollbar instead of the white one. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use the dark scrollbar instead of the white one. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar = { "UseCustomScrollbar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Use the custom icons of Darker Nodes. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use the custom icons of Darker Nodes. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomIcons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons = { "UseCustomIcons", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Change the style of the custom icons. Default: Line */" },
		{ "EditCondition", "UseCustomIcons" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Change the style of the custom icons. Default: Line" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle = { "IconStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, IconStyle), Z_Construct_UEnum_DarkerNodes_EIconStyle, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Make icons colored by group. Default: true */" },
		{ "EditCondition", "UseCustomIcons" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Make icons colored by group. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseIconColorization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization = { "UseIconColorization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Use the custom panels of Darker Nodes. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use the custom panels of Darker Nodes. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomPanels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels = { "UseCustomPanels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Use the custom buttons, text fields and checkboxes of Darker Nodes. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use the custom buttons, text fields and checkboxes of Darker Nodes. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton = { "UseCustomButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* When \"Use [Type] Customization\" is unticked, overwrite the customized colors with the current theme colors. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "When \"Use [Type] Customization\" is unticked, overwrite the customized colors with the current theme colors. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->OverwriteColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors = { "OverwriteColors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData[] = {
		{ "Category", "Customization|Background" },
		{ "Comment", "/* Customize the backgrounds more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the backgrounds more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseGreyCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization = { "UseGreyCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData[] = {
		{ "Category", "Customization|Background" },
		{ "Comment", "/* Dark background of the theme. Default: RGB(20,20,20) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Dark background of the theme. Default: RGB(20,20,20)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark = { "GreyDark", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyDark), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData[] = {
		{ "Category", "Customization|Background" },
		{ "Comment", "/* Base background of the theme. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Base background of the theme. Default: RGB(40,40,40)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase = { "GreyBase", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyBase), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData[] = {
		{ "Category", "Customization|Background" },
		{ "Comment", "/* Light background of the theme. Default: RGB(80,80,80) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Light background of the theme. Default: RGB(80,80,80)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight = { "GreyLight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyLight), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseColorCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization = { "UseColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Hover color on dark background. Default: RGB(229,110,23) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Hover color on dark background. Default: RGB(229,110,23)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor = { "CustomPrimaryColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, CustomPrimaryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Text color of the theme. Default: RGB(200,200,200) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Text color of the theme. Default: RGB(200,200,200)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ScrollbarColor_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Color of the scrollbar. Default: RGB(20,20,20) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color of the scrollbar. Default: RGB(20,20,20)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ScrollbarColor = { "ScrollbarColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ScrollbarColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ScrollbarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ScrollbarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseWindowCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization = { "UseWindowCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Outline color of the main editor window. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseWindowCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Outline color of the main editor window. Default: RGB(40,40,40)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor = { "MainWindowColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, MainWindowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Outline color of child editor windows. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseWindowCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Outline color of child editor windows. Default: RGB(40,40,40)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor = { "ChildWindowColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ChildWindowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Customize the colors of Blueprint graphs. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors of Blueprint graphs. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseBlueprintColorCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization = { "UseBlueprintColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid lines in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid lines in Blueprint graphs and UMG editor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor = { "GridLineColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid rules in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid rules in Blueprint graphs and UMG editor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor = { "GridRuleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridRuleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid center in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid center in Blueprint graphs and UMG editor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor = { "GridCenterColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridCenterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Background of regular Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Background of regular Blueprint nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground = { "RegularNodeBackground", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularNodeBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Border of regular Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Border of regular Blueprint nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder = { "RegularNodeBorder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularNodeBorder), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Background of var Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Background of var Blueprint nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground = { "VarNodeBackground", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, VarNodeBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Border of var Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Border of var Blueprint nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder = { "VarNodeBorder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, VarNodeBorder), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseButtonColorCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization = { "UseButtonColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorderColor_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for buttons border. Default: RGB(20,20,20) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for buttons border. Default: RGB(20,20,20)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorderColor = { "ButtonBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for primary buttons. Default: RGB(0,96,178) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for primary buttons. Default: RGB(0,96,178)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary = { "ButtonPrimary", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonPrimary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for success buttons. Default: RGB(58,161,17) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for success buttons. Default: RGB(58,161,17)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess = { "ButtonSuccess", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonSuccess), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for info buttons. Default: RGB(0,96,178) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for info buttons. Default: RGB(0,96,178)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo = { "ButtonInfo", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonInfo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for warning buttons. Default: RGB(223,179,0) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for warning buttons. Default: RGB(223,179,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning = { "ButtonWarning", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonWarning), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData[] = {
		{ "Category", "Customization|Buttons" },
		{ "Comment", "/* Color for danger buttons. Default: RGB(178,0,0) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for danger buttons. Default: RGB(178,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger = { "ButtonDanger", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonDanger), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Force texture resources reload. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Force texture resources reload." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ReloadTextureResources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources = { "ReloadTextureResources", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomScrollbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_IconStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseIconColorization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomPanels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ScrollbarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonBorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDarkerNodesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkerNodesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams = {
		&UDarkerNodesSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDarkerNodesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDarkerNodesSettings, 2330223867);
	template<> DARKERNODES_API UClass* StaticClass<UDarkerNodesSettings>()
	{
		return UDarkerNodesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDarkerNodesSettings(Z_Construct_UClass_UDarkerNodesSettings, &UDarkerNodesSettings::StaticClass, TEXT("/Script/DarkerNodes"), TEXT("UDarkerNodesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkerNodesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
