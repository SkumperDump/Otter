// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOtterGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OTTER_API UClass* Z_Construct_UClass_AOtterGameMode();
OTTER_API UClass* Z_Construct_UClass_AOtterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOtterGameMode ***********************************************************
void AOtterGameMode::StaticRegisterNativesAOtterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOtterGameMode;
UClass* AOtterGameMode::GetPrivateStaticClass()
{
	using TClass = AOtterGameMode;
	if (!Z_Registration_Info_UClass_AOtterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OtterGameMode"),
			Z_Registration_Info_UClass_AOtterGameMode.InnerSingleton,
			StaticRegisterNativesAOtterGameMode,
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
	return Z_Registration_Info_UClass_AOtterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AOtterGameMode_NoRegister()
{
	return AOtterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOtterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OtterGameMode.h" },
		{ "ModuleRelativePath", "OtterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOtterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Otter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOtterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOtterGameMode_Statics::ClassParams = {
	&AOtterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOtterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOtterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOtterGameMode()
{
	if (!Z_Registration_Info_UClass_AOtterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtterGameMode.OuterSingleton, Z_Construct_UClass_AOtterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOtterGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterGameMode);
AOtterGameMode::~AOtterGameMode() {}
// ********** End Class AOtterGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h__Script_Otter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOtterGameMode, AOtterGameMode::StaticClass, TEXT("AOtterGameMode"), &Z_Registration_Info_UClass_AOtterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterGameMode), 2720520308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h__Script_Otter_1157059730(TEXT("/Script/Otter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h__Script_Otter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h__Script_Otter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
