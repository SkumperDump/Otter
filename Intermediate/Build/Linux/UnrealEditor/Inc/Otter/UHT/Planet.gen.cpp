// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/Planet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_APlanet();
	OTTER_API UClass* Z_Construct_UClass_APlanet_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_ASolarSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void APlanet::StaticRegisterNativesAPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlanet);
	UClass* Z_Construct_UClass_APlanet_NoRegister()
	{
		return APlanet::StaticClass();
	}
	struct Z_Construct_UClass_APlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolarSystemActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SolarSystemActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Planet.h" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "// Terrain of planet\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planet.h" },
		{ "ToolTip", "Terrain of planet" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh = { "PlanetMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanet, PlanetMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_SolarSystemActor_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "// Solar system we are in\n" },
		{ "ModuleRelativePath", "Planet.h" },
		{ "ToolTip", "Solar system we are in" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_SolarSystemActor = { "SolarSystemActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanet, SolarSystemActor), Z_Construct_UClass_ASolarSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanet_Statics::NewProp_SolarSystemActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_SolarSystemActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_SolarSystemActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlanet_Statics::ClassParams = {
		&APlanet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanet()
	{
		if (!Z_Registration_Info_UClass_APlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlanet.OuterSingleton, Z_Construct_UClass_APlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlanet.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<APlanet>()
	{
		return APlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanet);
	APlanet::~APlanet() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlanet, APlanet::StaticClass, TEXT("APlanet"), &Z_Registration_Info_UClass_APlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlanet), 1371435246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_2379735260(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
