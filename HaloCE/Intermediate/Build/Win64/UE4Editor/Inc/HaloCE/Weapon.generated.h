// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef HALOCE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define HALOCE_Weapon_generated_h

#define HaloCE_Source_HaloCE_Weapon_h_19_SPARSE_DATA
#define HaloCE_Source_HaloCE_Weapon_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetDirDeflection); \
	DECLARE_FUNCTION(execSetCanShoot); \
	DECLARE_FUNCTION(execSetReloadTime); \
	DECLARE_FUNCTION(execSetMagCount); \
	DECLARE_FUNCTION(execSetMagCapacity); \
	DECLARE_FUNCTION(execSetMaxAmmoCount); \
	DECLARE_FUNCTION(execSetMaxAmmo); \
	DECLARE_FUNCTION(execGetFireRate); \
	DECLARE_FUNCTION(execGetIsAutomatic); \
	DECLARE_FUNCTION(execGetCanShoot); \
	DECLARE_FUNCTION(execGetReloadTime); \
	DECLARE_FUNCTION(execGetMagCount); \
	DECLARE_FUNCTION(execGetMagCapacity); \
	DECLARE_FUNCTION(execGetMaxAmmoCount); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot);


#define HaloCE_Source_HaloCE_Weapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetDirDeflection); \
	DECLARE_FUNCTION(execSetCanShoot); \
	DECLARE_FUNCTION(execSetReloadTime); \
	DECLARE_FUNCTION(execSetMagCount); \
	DECLARE_FUNCTION(execSetMagCapacity); \
	DECLARE_FUNCTION(execSetMaxAmmoCount); \
	DECLARE_FUNCTION(execSetMaxAmmo); \
	DECLARE_FUNCTION(execGetFireRate); \
	DECLARE_FUNCTION(execGetIsAutomatic); \
	DECLARE_FUNCTION(execGetCanShoot); \
	DECLARE_FUNCTION(execGetReloadTime); \
	DECLARE_FUNCTION(execGetMagCount); \
	DECLARE_FUNCTION(execGetMagCapacity); \
	DECLARE_FUNCTION(execGetMaxAmmoCount); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot);


#define HaloCE_Source_HaloCE_Weapon_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define HaloCE_Source_HaloCE_Weapon_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HaloCE"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define HaloCE_Source_HaloCE_Weapon_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public:


#define HaloCE_Source_HaloCE_Weapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeapon)


#define HaloCE_Source_HaloCE_Weapon_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_bullet() { return STRUCT_OFFSET(UWeapon, m_bullet); } \
	FORCEINLINE static uint32 __PPO__m_maxAmmo() { return STRUCT_OFFSET(UWeapon, m_maxAmmo); } \
	FORCEINLINE static uint32 __PPO__m_maxAmmoCount() { return STRUCT_OFFSET(UWeapon, m_maxAmmoCount); } \
	FORCEINLINE static uint32 __PPO__m_magCapacity() { return STRUCT_OFFSET(UWeapon, m_magCapacity); } \
	FORCEINLINE static uint32 __PPO__m_magCount() { return STRUCT_OFFSET(UWeapon, m_magCount); } \
	FORCEINLINE static uint32 __PPO__m_reloadTime() { return STRUCT_OFFSET(UWeapon, m_reloadTime); } \
	FORCEINLINE static uint32 __PPO__m_fireRate() { return STRUCT_OFFSET(UWeapon, m_fireRate); } \
	FORCEINLINE static uint32 __PPO__m_isAutomatic() { return STRUCT_OFFSET(UWeapon, m_isAutomatic); } \
	FORCEINLINE static uint32 __PPO__m_canShoot() { return STRUCT_OFFSET(UWeapon, m_canShoot); }


#define HaloCE_Source_HaloCE_Weapon_h_16_PROLOG
#define HaloCE_Source_HaloCE_Weapon_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Weapon_h_19_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Weapon_h_19_SPARSE_DATA \
	HaloCE_Source_HaloCE_Weapon_h_19_RPC_WRAPPERS \
	HaloCE_Source_HaloCE_Weapon_h_19_INCLASS \
	HaloCE_Source_HaloCE_Weapon_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaloCE_Source_HaloCE_Weapon_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaloCE_Source_HaloCE_Weapon_h_19_PRIVATE_PROPERTY_OFFSET \
	HaloCE_Source_HaloCE_Weapon_h_19_SPARSE_DATA \
	HaloCE_Source_HaloCE_Weapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Weapon_h_19_INCLASS_NO_PURE_DECLS \
	HaloCE_Source_HaloCE_Weapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALOCE_API UClass* StaticClass<class UWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaloCE_Source_HaloCE_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
