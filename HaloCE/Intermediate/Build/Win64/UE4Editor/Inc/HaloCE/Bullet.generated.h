// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef HALOCE_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define HALOCE_Bullet_generated_h

#define HaloCE_Source_HaloCE_Bullet_h_18_SPARSE_DATA
#define HaloCE_Source_HaloCE_Bullet_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDirection);


#define HaloCE_Source_HaloCE_Bullet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDirection);


#define HaloCE_Source_HaloCE_Bullet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define HaloCE_Source_HaloCE_Bullet_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define HaloCE_Source_HaloCE_Bullet_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define HaloCE_Source_HaloCE_Bullet_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define HaloCE_Source_HaloCE_Bullet_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulletMesh() { return STRUCT_OFFSET(ABullet, bulletMesh); }


#define HaloCE_Source_HaloCE_Bullet_h_15_PROLOG
#define HaloCE_Source_HaloCE_Bullet_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Bullet_h_18_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Bullet_h_18_SPARSE_DATA \
	HaloCE_Source_HaloCE_Bullet_h_18_RPC_WRAPPERS \
	HaloCE_Source_HaloCE_Bullet_h_18_INCLASS \
	HaloCE_Source_HaloCE_Bullet_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaloCE_Source_HaloCE_Bullet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Bullet_h_18_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Bullet_h_18_SPARSE_DATA \
	HaloCE_Source_HaloCE_Bullet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Bullet_h_18_INCLASS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Bullet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALOCE_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaloCE_Source_HaloCE_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
