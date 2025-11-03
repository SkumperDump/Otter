// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OtterGameMode.h"

#ifdef OTTER_OtterGameMode_generated_h
#error "OtterGameMode.generated.h already included, missing '#pragma once' in OtterGameMode.h"
#endif
#define OTTER_OtterGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOtterGameMode ***********************************************************
OTTER_API UClass* Z_Construct_UClass_AOtterGameMode_NoRegister();

#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOtterGameMode(); \
	friend struct Z_Construct_UClass_AOtterGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OTTER_API UClass* Z_Construct_UClass_AOtterGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AOtterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Otter"), Z_Construct_UClass_AOtterGameMode_NoRegister) \
	DECLARE_SERIALIZER(AOtterGameMode)


#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOtterGameMode(AOtterGameMode&&) = delete; \
	AOtterGameMode(const AOtterGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OTTER_API, AOtterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOtterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOtterGameMode) \
	OTTER_API virtual ~AOtterGameMode();


#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_9_PROLOG
#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOtterGameMode;

// ********** End Class AOtterGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
