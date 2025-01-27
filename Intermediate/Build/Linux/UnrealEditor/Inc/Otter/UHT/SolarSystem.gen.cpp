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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlanetCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlanetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPlanetClass;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SolarSystem.h" },
		{ "ModuleRelativePath", "SolarSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData[] = {
		{ "Category", "SolarSystem" },
		{ "ModuleRelativePath", "SolarSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount = { "PlanetCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASolarSystem, PlanetCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData), Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData[] = {
		{ "Category", "SolarSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Center of the solar system\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SolarSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center of the solar system" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun = { "Sun", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASolarSystem, Sun), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData), Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_DefaultPlanetClass_MetaData[] = {
		{ "Category", "SolarSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default planet blueprint class\n" },
#endif
		{ "ModuleRelativePath", "SolarSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default planet blueprint class" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_DefaultPlanetClass = { "DefaultPlanetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASolarSystem, DefaultPlanetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_DefaultPlanetClass_MetaData), Z_Construct_UClass_ASolarSystem_Statics::NewProp_DefaultPlanetClass_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_Inner = { "PlanetArray", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData[] = {
		{ "Category", "SolarSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of pointers to planet blueprint classes\n" },
#endif
		{ "ModuleRelativePath", "SolarSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of pointers to planet blueprint classes" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray = { "PlanetArray", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASolarSystem, PlanetArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData), Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASolarSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_PlanetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_Sun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASolarSystem_Statics::NewProp_DefaultPlanetClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASolarSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASolarSystem_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ASolarSystem, ASolarSystem::StaticClass, TEXT("ASolarSystem"), &Z_Registration_Info_UClass_ASolarSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASolarSystem), 560113201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_917326388(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_SolarSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
