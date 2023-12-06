// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ToolBarStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolBarStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

static_assert(std::is_polymorphic<FToolBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FToolBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolBarStyle;
class UScriptStruct* FToolBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ToolBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FToolBarStyle>()
{
	return FToolBarStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolBarStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsComboButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsComboButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsToggleButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsToggleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformBlockWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformBlockWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformBlockHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformBlockHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumColumns_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumColumns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndentedBlockPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndentedBlockPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLabels_MetaData[];
#endif
		static void NewProp_bShowLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentMaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonContentMaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentFillWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonContentFillWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPaddingWithVisibleLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconPaddingWithVisibleLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPaddingWithCollapsedLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconPaddingWithCollapsedLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a toolbar \n */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "Represents the appearance of a toolbar" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolBarStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the background of the toolbar */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the background of the toolbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu*/" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush = { "ExpandBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ExpandBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush = { "SeparatorBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SeparatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle = { "LabelStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, LabelStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData) }; // 1973404513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle = { "EditableTextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, EditableTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData) }; // 2960022542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton = { "ToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData) }; // 2749292455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData) }; // 919780963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle = { "SettingsButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData) }; // 1902661672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton = { "SettingsComboButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsComboButton), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData) }; // 919780963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton = { "SettingsToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData) }; // 2749292455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData) }; // 1902661672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, LabelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth = { "UniformBlockWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, UniformBlockWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight = { "UniformBlockHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, UniformBlockHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns = { "NumColumns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, NumColumns), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding = { "IconPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding = { "SeparatorPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SeparatorPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding = { "ComboButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ComboButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding = { "CheckBoxPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, CheckBoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding = { "BlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding = { "IndentedBlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IndentedBlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding = { "BackgroundPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BackgroundPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData) }; // 2692624173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit(void* Obj)
	{
		((FToolBarStyle*)Obj)->bShowLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels = { "bShowLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolBarStyle), &Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth = { "ButtonContentMaxWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonContentMaxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth = { "ButtonContentFillWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonContentFillWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel = { "IconPaddingWithVisibleLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPaddingWithVisibleLabel), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel = { "IconPaddingWithCollapsedLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPaddingWithCollapsedLabel), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel_MetaData), Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel_MetaData) }; // 2235102396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ToolBarStyle",
		Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers),
		sizeof(FToolBarStyle),
		alignof(FToolBarStyle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FToolBarStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo[] = {
		{ FToolBarStyle::StaticStruct, Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewStructOps, TEXT("ToolBarStyle"), &Z_Registration_Info_UScriptStruct_ToolBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolBarStyle), 870693516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_4225549381(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
