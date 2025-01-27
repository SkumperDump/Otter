// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent();
	OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void UOtterMovementComponent::StaticRegisterNativesUOtterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOtterMovementComponent);
	UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister()
	{
		return UOtterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOtterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOtterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOtterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is used to represent physics and whatnot for the game */" },
#endif
		{ "IncludePath", "OtterMovementComponent.h" },
		{ "ModuleRelativePath", "OtterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used to represent physics and whatnot for the game" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOtterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOtterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOtterMovementComponent_Statics::ClassParams = {
		&UOtterMovementComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOtterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOtterMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOtterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UOtterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOtterMovementComponent.OuterSingleton, Z_Construct_UClass_UOtterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOtterMovementComponent.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<UOtterMovementComponent>()
	{
		return UOtterMovementComponent::StaticClass();
	}
	UOtterMovementComponent::UOtterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOtterMovementComponent);
	UOtterMovementComponent::~UOtterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOtterMovementComponent, UOtterMovementComponent::StaticClass, TEXT("UOtterMovementComponent"), &Z_Registration_Info_UClass_UOtterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOtterMovementComponent), 1588424068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_155855692(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
