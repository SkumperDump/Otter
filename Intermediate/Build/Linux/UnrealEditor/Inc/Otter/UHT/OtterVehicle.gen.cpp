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
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_AOtterDefaultPawn();
	OTTER_API UClass* Z_Construct_UClass_AOtterVehicle();
	OTTER_API UClass* Z_Construct_UClass_AOtterVehicle_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_UOtterInteractInterface_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleExhaust_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleExhaust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOtterVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOtterDefaultPawn,
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMesh_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMesh = { "VehicleMesh", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust = { "VehicleExhaust", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOtterVehicle, VehicleExhaust), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOtterVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOtterVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOtterInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AOtterVehicle, IOtterInteractInterface), false },  // 3159053137
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AOtterVehicle, AOtterVehicle::StaticClass, TEXT("AOtterVehicle"), &Z_Registration_Info_UClass_AOtterVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterVehicle), 3692736191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_3539359578(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
