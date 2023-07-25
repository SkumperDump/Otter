// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtterPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_AOtterPlayer();
	OTTER_API UClass* Z_Construct_UClass_AOtterPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void AOtterPlayer::StaticRegisterNativesAOtterPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOtterPlayer);
	UClass* Z_Construct_UClass_AOtterPlayer_NoRegister()
	{
		return AOtterPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AOtterPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCamera;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbableItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrabbableItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOtterPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OtterPlayer.h" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerSkeletalMesh_MetaData[] = {
		{ "Category", "OtterPlayer" },
		{ "Comment", "// Player skeleton mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
		{ "ToolTip", "Player skeleton mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerSkeletalMesh = { "PlayerSkeletalMesh", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterPlayer, PlayerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "OtterPlayer" },
		{ "Comment", "// Spring arm for camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
		{ "ToolTip", "Spring arm for camera" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "OtterPlayer" },
		{ "Comment", "// Player camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
		{ "ToolTip", "Player camera" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterPlayer, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerCamera_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory_Inner = { "PlayerInventory", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "OtterPlayer" },
		{ "Comment", "// Inventory as AActor array\n" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
		{ "ToolTip", "Inventory as AActor array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterPlayer, PlayerInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterPlayer_Statics::NewProp_GrabbableItem_MetaData[] = {
		{ "Category", "OtterPlayer" },
		{ "Comment", "// Item that can be grabbed\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterPlayer.h" },
		{ "ToolTip", "Item that can be grabbed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterPlayer_Statics::NewProp_GrabbableItem = { "GrabbableItem", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterPlayer, GrabbableItem), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_GrabbableItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::NewProp_GrabbableItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOtterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_PlayerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterPlayer_Statics::NewProp_GrabbableItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOtterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtterPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOtterPlayer_Statics::ClassParams = {
		&AOtterPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOtterPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOtterPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOtterPlayer()
	{
		if (!Z_Registration_Info_UClass_AOtterPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtterPlayer.OuterSingleton, Z_Construct_UClass_AOtterPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOtterPlayer.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<AOtterPlayer>()
	{
		return AOtterPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterPlayer);
	AOtterPlayer::~AOtterPlayer() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOtterPlayer, AOtterPlayer::StaticClass, TEXT("AOtterPlayer"), &Z_Registration_Info_UClass_AOtterPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterPlayer), 1006033590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterPlayer_h_1317237757(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
