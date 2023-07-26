// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtterVehicle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_AOtterVehicle();
	OTTER_API UClass* Z_Construct_UClass_AOtterVehicle_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void AOtterVehicle::StaticRegisterNativesAOtterVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOtterVehicle);
	UClass* Z_Construct_UClass_AOtterVehicle_NoRegister()
	{
		return AOtterVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AOtterVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleHitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleHitbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleEhxaust_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleEhxaust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrustAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThrustAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOtterVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OtterVehicle.h" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleHitbox_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "// Vehicle hitbox\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "Vehicle hitbox" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleHitbox = { "VehicleHitbox", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleHitbox), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleHitbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleHitbox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleStaticMeshComponent_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "// Vehicle static mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "Vehicle static mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleStaticMeshComponent = { "VehicleStaticMeshComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleEhxaust_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "// Vehicle exhaust\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "Vehicle exhaust" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleEhxaust = { "VehicleEhxaust", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleEhxaust), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleEhxaust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleEhxaust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMovementComponent_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "// Otter move component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "Otter move component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMovementComponent = { "VehicleMovementComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleMovementComponent), Z_Construct_UClass_UOtterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMappingContext_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "/**INPUT*/// Mapping context\n" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "INPUT// Mapping context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMappingContext = { "VehicleMappingContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_ThrustAction_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "Comment", "// Thrust action\n" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
		{ "ToolTip", "Thrust action" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_ThrustAction = { "ThrustAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, ThrustAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_ThrustAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_ThrustAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOtterVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleHitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleEhxaust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_ThrustAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOtterVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtterVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOtterVehicle_Statics::ClassParams = {
		&AOtterVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOtterVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOtterVehicle()
	{
		if (!Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton, Z_Construct_UClass_AOtterVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<AOtterVehicle>()
	{
		return AOtterVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterVehicle);
	AOtterVehicle::~AOtterVehicle() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOtterVehicle, AOtterVehicle::StaticClass, TEXT("AOtterVehicle"), &Z_Registration_Info_UClass_AOtterVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterVehicle), 2223390553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_4135720901(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
