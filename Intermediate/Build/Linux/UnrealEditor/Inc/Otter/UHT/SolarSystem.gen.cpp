// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/SolarSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolarSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_ASolarSystem();
	OTTER_API UClass* Z_Construct_UClass_ASolarSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void ASolarSystem::StaticRegisterNativesASolarSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASolarSystem);
	UClass* Z_Construct_UClass_ASolarSystem_NoRegister()
	{
		return ASolarSystem::StaticClass();
	}
	struct Z_Construct_UClass_ASolarSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlanetCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sun;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlanetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanetArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASolarSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SolarSystem.h" },
		{ "ModuleRelativePath", "SolarSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData[] = {
		{ "Category", "SolarSystem" },
		{ "Comment", "// Number of planets in solar system\n" },
		{ "ModuleRelativePath", "SolarSystem.h" },
		{ "ToolTip", "Number of planets in solar system" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount = { "PlanetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASolarSystem, PlanetCount), METADATA_PARAMS(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData[] = {
		{ "Category", "SolarSystem" },
		{ "Comment", "// Center of the solar system\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SolarSystem.h" },
		{ "ToolTip", "Center of the solar system" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun = { "Sun", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASolarSystem, Sun), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_Inner = { "PlanetArray", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData[] = {
		{ "Category", "SolarSystem" },
		{ "Comment", "// Array of pointers to planet blueprint classes\n" },
		{ "ModuleRelativePath", "SolarSystem.h" },
		{ "ToolTip", "Array of pointers to planet blueprint classes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray = { "PlanetArray", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASolarSystem, PlanetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASolarSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASolarSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASolarSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASolarSystem_Statics::ClassParams = {
		&ASolarSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASolarSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASolarSystem()
	{
		if (!Z_Registration_Info_UClass_ASolarSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASolarSystem.OuterSingleton, Z_Construct_UClass_ASolarSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASolarSystem.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<ASolarSystem>()
	{
		return ASolarSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASolarSystem);
	ASolarSystem::~ASolarSystem() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASolarSystem, ASolarSystem::StaticClass, TEXT("ASolarSystem"), &Z_Registration_Info_UClass_ASolarSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASolarSystem), 653872280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_630327287(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
