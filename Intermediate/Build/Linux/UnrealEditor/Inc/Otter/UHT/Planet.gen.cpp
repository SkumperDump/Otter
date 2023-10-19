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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_AOtterDefaultPawn();
	OTTER_API UClass* Z_Construct_UClass_APlanet();
	OTTER_API UClass* Z_Construct_UClass_APlanet_NoRegister();
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlanetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOtterDefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Planet.h" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData[] = {
		{ "Category", "Planet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Terrain of planet\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Terrain of planet" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh = { "PlanetMesh", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, PlanetMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_PlanetScale_MetaData[] = {
		{ "Category", "Planet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of planet\n" },
#endif
		{ "ModuleRelativePath", "Planet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of planet" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_PlanetScale = { "PlanetScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, PlanetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_PlanetScale_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_PlanetScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_PlanetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_PlanetScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlanet_Statics::ClassParams = {
		&APlanet::StaticClass,
		"Game",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams), Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_APlanet, APlanet::StaticClass, TEXT("APlanet"), &Z_Registration_Info_UClass_APlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlanet), 3342941657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_3843380152(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_Planet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
