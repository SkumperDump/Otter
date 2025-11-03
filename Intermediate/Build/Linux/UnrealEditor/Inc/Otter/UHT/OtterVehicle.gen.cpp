// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterVehicle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOtterVehicle() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
OTTER_API UClass* Z_Construct_UClass_AOtterDefaultPawn();
OTTER_API UClass* Z_Construct_UClass_AOtterVehicle();
OTTER_API UClass* Z_Construct_UClass_AOtterVehicle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOtterVehicle ************************************************************
void AOtterVehicle::StaticRegisterNativesAOtterVehicle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOtterVehicle;
UClass* AOtterVehicle::GetPrivateStaticClass()
{
	using TClass = AOtterVehicle;
	if (!Z_Registration_Info_UClass_AOtterVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OtterVehicle"),
			Z_Registration_Info_UClass_AOtterVehicle.InnerSingleton,
			StaticRegisterNativesAOtterVehicle,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AOtterVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_AOtterVehicle_NoRegister()
{
	return AOtterVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOtterVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OtterVehicle.h" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleExhaust_MetaData[] = {
		{ "Category", "OtterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OtterVehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleExhaust;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtterVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust = { "VehicleExhaust", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOtterVehicle, VehicleExhaust), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleExhaust_MetaData), NewProp_VehicleExhaust_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOtterVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOtterVehicle_Statics::NewProp_VehicleExhaust,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOtterVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOtterDefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Otter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::DependentSingletons) < 16);
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOtterVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AOtterVehicle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOtterVehicle()
{
	if (!Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton, Z_Construct_UClass_AOtterVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOtterVehicle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterVehicle);
AOtterVehicle::~AOtterVehicle() {}
// ********** End Class AOtterVehicle **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h__Script_Otter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOtterVehicle, AOtterVehicle::StaticClass, TEXT("AOtterVehicle"), &Z_Registration_Info_UClass_AOtterVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterVehicle), 2994385268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h__Script_Otter_3562985051(TEXT("/Script/Otter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h__Script_Otter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterVehicle_h__Script_Otter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
