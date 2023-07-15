// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtterCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_AOtterCharacter();
	OTTER_API UClass* Z_Construct_UClass_AOtterCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void AOtterCharacter::StaticRegisterNativesAOtterCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOtterCharacter);
	UClass* Z_Construct_UClass_AOtterCharacter_NoRegister()
	{
		return AOtterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOtterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstPersonCamera_MetaData[];
#endif
		static void NewProp_bUseFirstPersonCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstPersonCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapCameraAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwapCameraAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbableItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrabbableItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOtterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* This is our game character.\n * Here is where we will store things that relate to our character subclass.\n * TODO\n * -Should be exposed to a widget in the editor for heads up display.*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OtterCharacter.h" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "This is our game character.\n* Here is where we will store things that relate to our character subclass.\n* TODO\n* -Should be exposed to a widget in the editor for heads up display." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Should we use first person camera\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Should we use first person camera" },
	};
#endif
	void Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera_SetBit(void* Obj)
	{
		((AOtterCharacter*)Obj)->bUseFirstPersonCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera = { "bUseFirstPersonCamera", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOtterCharacter), &Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Camera boom positioning the camera around the character\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera around the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Player camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Player camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_PlayerCamera_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Inventory as AActor array\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Inventory as AActor array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "/**INPUT*/// MappingContext\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "INPUT// MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Jump Input Action\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Move Input Action\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Look Input Action\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_SwapCameraAction_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Swap Camera Input Action\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Swap Camera Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_SwapCameraAction = { "SwapCameraAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, SwapCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_SwapCameraAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_SwapCameraAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Interact Input Action\n" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Interact Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterCharacter_Statics::NewProp_GrabbableItem_MetaData[] = {
		{ "Category", "OtterCharacter" },
		{ "Comment", "// Item that can be grabbed\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterCharacter.h" },
		{ "ToolTip", "Item that can be grabbed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterCharacter_Statics::NewProp_GrabbableItem = { "GrabbableItem", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterCharacter, GrabbableItem), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_GrabbableItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::NewProp_GrabbableItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOtterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_bUseFirstPersonCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_SwapCameraAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterCharacter_Statics::NewProp_GrabbableItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOtterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOtterCharacter_Statics::ClassParams = {
		&AOtterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOtterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOtterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOtterCharacter()
	{
		if (!Z_Registration_Info_UClass_AOtterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtterCharacter.OuterSingleton, Z_Construct_UClass_AOtterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOtterCharacter.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<AOtterCharacter>()
	{
		return AOtterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterCharacter);
	AOtterCharacter::~AOtterCharacter() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOtterCharacter, AOtterCharacter::StaticClass, TEXT("AOtterCharacter"), &Z_Registration_Info_UClass_AOtterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterCharacter), 1559223353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterCharacter_h_1626983946(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
