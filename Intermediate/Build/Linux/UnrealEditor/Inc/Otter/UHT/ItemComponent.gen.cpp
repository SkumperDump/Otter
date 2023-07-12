// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otter/ItemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OTTER_API UClass* Z_Construct_UClass_UItemComponent();
	OTTER_API UClass* Z_Construct_UClass_UItemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Otter();
// End Cross Module References
	void UItemComponent::StaticRegisterNativesUItemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemComponent);
	UClass* Z_Construct_UClass_UItemComponent_NoRegister()
	{
		return UItemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UItemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponentMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Otter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "ItemComponent.h" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemComponent_Statics::NewProp_ItemComponentMesh_MetaData[] = {
		{ "Category", "ItemComponent" },
		{ "Comment", "// ItemComponent mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemComponent.h" },
		{ "ToolTip", "ItemComponent mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_ItemComponentMesh = { "ItemComponentMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemComponent, ItemComponentMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemComponent_Statics::NewProp_ItemComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::NewProp_ItemComponentMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_ItemComponentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemComponent_Statics::ClassParams = {
		&UItemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemComponent()
	{
		if (!Z_Registration_Info_UClass_UItemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemComponent.OuterSingleton, Z_Construct_UClass_UItemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemComponent.OuterSingleton;
	}
	template<> OTTER_API UClass* StaticClass<UItemComponent>()
	{
		return UItemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemComponent);
	UItemComponent::~UItemComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_ItemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_ItemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemComponent, UItemComponent::StaticClass, TEXT("UItemComponent"), &Z_Registration_Info_UClass_UItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemComponent), 3382382623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_ItemComponent_h_920420516(TEXT("/Script/Otter"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_ItemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_Otter_Source_Otter_ItemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
