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
struct FVector;
struct FHitResult;
#ifdef HALOCE_HaloCEProjectile_generated_h
#error "HaloCEProjectile.generated.h already included, missing '#pragma once' in HaloCEProjectile.h"
#endif
#define HALOCE_HaloCEProjectile_generated_h

#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_SPARSE_DATA
#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHaloCEProjectile(); \
	friend struct Z_Construct_UClass_AHaloCEProjectile_Statics; \
public: \
	DECLARE_CLASS(AHaloCEProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(AHaloCEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHaloCEProjectile(); \
	friend struct Z_Construct_UClass_AHaloCEProjectile_Statics; \
public: \
	DECLARE_CLASS(AHaloCEProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(AHaloCEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHaloCEProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHaloCEProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHaloCEProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHaloCEProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHaloCEProjectile(AHaloCEProjectile&&); \
	NO_API AHaloCEProjectile(const AHaloCEProjectile&); \
public:


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHaloCEProjectile(AHaloCEProjectile&&); \
	NO_API AHaloCEProjectile(const AHaloCEProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHaloCEProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHaloCEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHaloCEProjectile)


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHaloCEProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHaloCEProjectile, ProjectileMovement); }


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_12_PROLOG
#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_SPARSE_DATA \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_RPC_WRAPPERS \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_INCLASS \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaloCE_Source_HaloCE_HaloCEProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_SPARSE_DATA \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_INCLASS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_HaloCEProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALOCE_API UClass* StaticClass<class AHaloCEProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaloCE_Source_HaloCE_HaloCEProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
