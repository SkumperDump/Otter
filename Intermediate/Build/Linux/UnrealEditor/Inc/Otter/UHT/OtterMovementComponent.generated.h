// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OtterMovementComponent.h"

#ifdef OTTER_OtterMovementComponent_generated_h
#error "OtterMovementComponent.generated.h already included, missing '#pragma once' in OtterMovementComponent.h"
#endif
#define OTTER_OtterMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOtterMovementComponent **************************************************
OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister();

#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOtterMovementComponent(); \
	friend struct Z_Construct_UClass_UOtterMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OTTER_API UClass* Z_Construct_UClass_UOtterMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOtterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Otter"), Z_Construct_UClass_UOtterMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UOtterMovementComponent)


#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOtterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOtterMovementComponent(UOtterMovementComponent&&) = delete; \
	UOtterMovementComponent(const UOtterMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOtterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOtterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOtterMovementComponent) \
	NO_API virtual ~UOtterMovementComponent();


#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_11_PROLOG
#define FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOtterMovementComponent;

// ********** End Class UOtterMovementComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_Otter_Source_Otter_OtterMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
