// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtterGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OTTER_API UClass* Z_Construct_UClass_AOtterGameMode();
OTTER_API UClass* Z_Construct_UClass_AOtterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References

// Begin Class AOtterGameMode
void AOtterGameMode::StaticRegisterNativesAOtterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOtterGameMode);
UClass* Z_Construct_UClass_AOtterGameMode_NoRegister()
{
	return AOtterGameMode::StaticClass();
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
	0x008802ACu,
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
template<> OTTER_API UClass* StaticClass<AOtterGameMode>()
{
	return AOtterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOtterGameMode);
AOtterGameMode::~AOtterGameMode() {}
// End Class AOtterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOtterGameMode, AOtterGameMode::StaticClass, TEXT("AOtterGameMode"), &Z_Registration_Info_UClass_AOtterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtterGameMode), 2548579182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_3733337635(TEXT("/Script/Otter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
