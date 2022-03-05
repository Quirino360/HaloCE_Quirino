// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HALOCE_Shotgun_generated_h
#error "Shotgun.generated.h already included, missing '#pragma once' in Shotgun.h"
#endif
#define HALOCE_Shotgun_generated_h

#define HaloCE_Source_HaloCE_Shotgun_h_15_SPARSE_DATA
#define HaloCE_Source_HaloCE_Shotgun_h_15_RPC_WRAPPERS
#define HaloCE_Source_HaloCE_Shotgun_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HaloCE_Source_HaloCE_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShotgun(); \
	friend struct Z_Construct_UClass_UShotgun_Statics; \
public: \
	DECLARE_CLASS(UShotgun, UWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(UShotgun)


#define HaloCE_Source_HaloCE_Shotgun_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUShotgun(); \
	friend struct Z_Construct_UClass_UShotgun_Statics; \
public: \
	DECLARE_CLASS(UShotgun, UWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(UShotgun)


#define HaloCE_Source_HaloCE_Shotgun_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShotgun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShotgun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShotgun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShotgun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShotgun(UShotgun&&); \
	NO_API UShotgun(const UShotgun&); \
public:


#define HaloCE_Source_HaloCE_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShotgun(UShotgun&&); \
	NO_API UShotgun(const UShotgun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShotgun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShotgun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShotgun)


#define HaloCE_Source_HaloCE_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET
#define HaloCE_Source_HaloCE_Shotgun_h_12_PROLOG
#define HaloCE_Source_HaloCE_Shotgun_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Shotgun_h_15_SPARSE_DATA \
	HaloCE_Source_HaloCE_Shotgun_h_15_RPC_WRAPPERS \
	HaloCE_Source_HaloCE_Shotgun_h_15_INCLASS \
	HaloCE_Source_HaloCE_Shotgun_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaloCE_Source_HaloCE_Shotgun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Shotgun_h_15_SPARSE_DATA \
	HaloCE_Source_HaloCE_Shotgun_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALOCE_API UClass* StaticClass<class UShotgun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaloCE_Source_HaloCE_Shotgun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
