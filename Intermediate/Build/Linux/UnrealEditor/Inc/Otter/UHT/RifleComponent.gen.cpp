// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/RifleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OTTER_API UClass* Z_Construct_UClass_URifleComponent();
	OTTER_API UClass* Z_Construct_UClass_URifleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void URifleComponent::StaticRegisterNativesURifleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URifleComponent);
	UClass* Z_Construct_UClass_URifleComponent_NoRegister()
	{
		return URifleComponent::StaticClass();
	}
	struct Z_Construct_UClass_URifleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URifleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URifleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RifleComponent.h" },
		{ "ModuleRelativePath", "RifleComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URifleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URifleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URifleComponent_Statics::ClassParams = {
		&URifleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URifleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URifleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URifleComponent()
	{
		if (!Z_Registration_Info_UClass_URifleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URifleComponent.OuterSingleton, Z_Construct_UClass_URifleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URifleComponent.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<URifleComponent>()
	{
		return URifleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URifleComponent);
	URifleComponent::~URifleComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_RifleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_RifleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URifleComponent, URifleComponent::StaticClass, TEXT("URifleComponent"), &Z_Registration_Info_UClass_URifleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URifleComponent), 128830143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_RifleComponent_h_3393385097(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_RifleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_RifleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
