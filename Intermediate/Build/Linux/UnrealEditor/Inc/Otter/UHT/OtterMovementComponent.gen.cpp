// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/OtterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOtterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent();
OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOtterMovementComponent **************************************************
void UOtterMovementComponent::StaticRegisterNativesUOtterMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOtterMovementComponent;
UClass* UOtterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UOtterMovementComponent;
	if (!Z_Registration_Info_UClass_UOtterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OtterMovementComponent"),
			Z_Registration_Info_UClass_UOtterMovementComponent.InnerSingleton,
			StaticRegisterNativesUOtterMovementComponent,
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
	return Z_Registration_Info_UClass_UOtterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister()
{
	return UOtterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOtterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is used to represent physics and whatnot for the game */" },
#endif
		{ "IncludePath", "OtterMovementComponent.h" },
		{ "ModuleRelativePath", "OtterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used to represent physics and whatnot for the game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOtterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOtterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Otter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOtterMovementComponent_Statics::DependentSingletons) < 16);
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
UOtterMovementComponent::UOtterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOtterMovementComponent);
UOtterMovementComponent::~UOtterMovementComponent() {}
// ********** End Class UOtterMovementComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h__Script_Otter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOtterMovementComponent, UOtterMovementComponent::StaticClass, TEXT("UOtterMovementComponent"), &Z_Registration_Info_UClass_UOtterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOtterMovementComponent), 2954640702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h__Script_Otter_2377365704(TEXT("/Script/Otter"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h__Script_Otter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h__Script_Otter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
