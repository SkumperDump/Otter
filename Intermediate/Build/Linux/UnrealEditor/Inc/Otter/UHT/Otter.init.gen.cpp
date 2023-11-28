// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Otter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Otter()
	{
		if (!Z_Registration_Info_UPackage__Script_Otter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Otter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x34F3CC88,
				0x32A48947,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Otter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Otter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Otter(Z_Construct_UPackage__Script_Otter, TEXT("/Script/Otter"), Z_Registration_Info_UPackage__Script_Otter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x34F3CC88, 0x32A48947));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
