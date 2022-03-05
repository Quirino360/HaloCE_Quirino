// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef HALOCE_HaloCECharacter_generated_h
#error "HaloCECharacter.generated.h already included, missing '#pragma once' in HaloCECharacter.h"
#endif
#define HALOCE_HaloCECharacter_generated_h

#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_SPARSE_DATA
#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHaloCECharacter(); \
	friend struct Z_Construct_UClass_AHaloCECharacter_Statics; \
public: \
	DECLARE_CLASS(AHaloCECharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(AHaloCECharacter)


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAHaloCECharacter(); \
	friend struct Z_Construct_UClass_AHaloCECharacter_Statics; \
public: \
	DECLARE_CLASS(AHaloCECharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(AHaloCECharacter)


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHaloCECharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHaloCECharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHaloCECharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHaloCECharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHaloCECharacter(AHaloCECharacter&&); \
	NO_API AHaloCECharacter(const AHaloCECharacter&); \
public:


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHaloCECharacter(AHaloCECharacter&&); \
	NO_API AHaloCECharacter(const AHaloCECharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHaloCECharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHaloCECharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHaloCECharacter)


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AHaloCECharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AHaloCECharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AHaloCECharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AHaloCECharacter, FirstPersonCameraComponent); }


#define HaloCE_Source_HaloCE_HaloCECharacter_h_21_PROLOG
#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_SPARSE_DATA \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_RPC_WRAPPERS \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_INCLASS \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaloCE_Source_HaloCE_HaloCECharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_SPARSE_DATA \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_INCLASS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_HaloCECharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALOCE_API UClass* StaticClass<class AHaloCECharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaloCE_Source_HaloCE_HaloCECharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
