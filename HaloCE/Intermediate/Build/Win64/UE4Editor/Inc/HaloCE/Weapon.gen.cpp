// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_UWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HALOCE_API UClass* Z_Construct_UClass_ABullet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWeapon::execgetDirDeflection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_defRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->getDirDeflection(Z_Param_defRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetCanShoot)
	{
		P_GET_UBOOL(Z_Param__shootAuto);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanShoot(Z_Param__shootAuto);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetReloadTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__reloadTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReloadTime(Z_Param__reloadTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetMagCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__magCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagCount(Z_Param__magCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetMagCapacity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__magCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagCapacity(Z_Param__magCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetMaxAmmoCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__maxAmmoCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAmmoCount(Z_Param__maxAmmoCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execSetMaxAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__maxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAmmo(Z_Param__maxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetFireRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFireRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetIsAutomatic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAutomatic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetReloadTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetReloadTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetMagCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMagCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetMagCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMagCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetMaxAmmoCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmoCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execGetMaxAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeapon::execShoot)
	{
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FVector,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot(Z_Param_SpawnRotation,Z_Param_SpawnLocation,Z_Param_direction);
		P_NATIVE_END;
	}
	void UWeapon::StaticRegisterNativesUWeapon()
	{
		UClass* Class = UWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanShoot", &UWeapon::execGetCanShoot },
			{ "getDirDeflection", &UWeapon::execgetDirDeflection },
			{ "GetFireRate", &UWeapon::execGetFireRate },
			{ "GetIsAutomatic", &UWeapon::execGetIsAutomatic },
			{ "GetMagCapacity", &UWeapon::execGetMagCapacity },
			{ "GetMagCount", &UWeapon::execGetMagCount },
			{ "GetMaxAmmo", &UWeapon::execGetMaxAmmo },
			{ "GetMaxAmmoCount", &UWeapon::execGetMaxAmmoCount },
			{ "GetReloadTime", &UWeapon::execGetReloadTime },
			{ "Reload", &UWeapon::execReload },
			{ "SetCanShoot", &UWeapon::execSetCanShoot },
			{ "SetMagCapacity", &UWeapon::execSetMagCapacity },
			{ "SetMagCount", &UWeapon::execSetMagCount },
			{ "SetMaxAmmo", &UWeapon::execSetMaxAmmo },
			{ "SetMaxAmmoCount", &UWeapon::execSetMaxAmmoCount },
			{ "SetReloadTime", &UWeapon::execSetReloadTime },
			{ "Shoot", &UWeapon::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeapon_GetCanShoot_Statics
	{
		struct Weapon_eventGetCanShoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Weapon_eventGetCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventGetCanShoot_Parms), &Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetCanShoot", nullptr, nullptr, sizeof(Weapon_eventGetCanShoot_Parms), Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetCanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetCanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_getDirDeflection_Statics
	{
		struct Weapon_eventgetDirDeflection_Parms
		{
			float defRadius;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::NewProp_defRadius = { "defRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventgetDirDeflection_Parms, defRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventgetDirDeflection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::NewProp_defRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "getDirDeflection", nullptr, nullptr, sizeof(Weapon_eventgetDirDeflection_Parms), Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_getDirDeflection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_getDirDeflection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetFireRate_Statics
	{
		struct Weapon_eventGetFireRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeapon_GetFireRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetFireRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetFireRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetFireRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetFireRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetFireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetFireRate", nullptr, nullptr, sizeof(Weapon_eventGetFireRate_Parms), Z_Construct_UFunction_UWeapon_GetFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetFireRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetFireRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetFireRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetFireRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetFireRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics
	{
		struct Weapon_eventGetIsAutomatic_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Weapon_eventGetIsAutomatic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventGetIsAutomatic_Parms), &Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetIsAutomatic", nullptr, nullptr, sizeof(Weapon_eventGetIsAutomatic_Parms), Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetIsAutomatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetIsAutomatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics
	{
		struct Weapon_eventGetMagCapacity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetMagCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetMagCapacity", nullptr, nullptr, sizeof(Weapon_eventGetMagCapacity_Parms), Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetMagCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetMagCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetMagCount_Statics
	{
		struct Weapon_eventGetMagCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_GetMagCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetMagCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetMagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetMagCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetMagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetMagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetMagCount", nullptr, nullptr, sizeof(Weapon_eventGetMagCount_Parms), Z_Construct_UFunction_UWeapon_GetMagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetMagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetMagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetMagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics
	{
		struct Weapon_eventGetMaxAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ----- Getters\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "----- Getters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetMaxAmmo", nullptr, nullptr, sizeof(Weapon_eventGetMaxAmmo_Parms), Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics
	{
		struct Weapon_eventGetMaxAmmoCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetMaxAmmoCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetMaxAmmoCount", nullptr, nullptr, sizeof(Weapon_eventGetMaxAmmoCount_Parms), Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetMaxAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetMaxAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_GetReloadTime_Statics
	{
		struct Weapon_eventGetReloadTime_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetReloadTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "GetReloadTime", nullptr, nullptr, sizeof(Weapon_eventGetReloadTime_Parms), Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_GetReloadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_GetReloadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetCanShoot_Statics
	{
		struct Weapon_eventSetCanShoot_Parms
		{
			bool _shootAuto;
		};
		static void NewProp__shootAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shootAuto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::NewProp__shootAuto_SetBit(void* Obj)
	{
		((Weapon_eventSetCanShoot_Parms*)Obj)->_shootAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::NewProp__shootAuto = { "_shootAuto", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventSetCanShoot_Parms), &Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::NewProp__shootAuto_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::NewProp__shootAuto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetCanShoot", nullptr, nullptr, sizeof(Weapon_eventSetCanShoot_Parms), Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetCanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetCanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics
	{
		struct Weapon_eventSetMagCapacity_Parms
		{
			int32 _magCapacity;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__magCapacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::NewProp__magCapacity = { "_magCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventSetMagCapacity_Parms, _magCapacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::NewProp__magCapacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetMagCapacity", nullptr, nullptr, sizeof(Weapon_eventSetMagCapacity_Parms), Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetMagCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetMagCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetMagCount_Statics
	{
		struct Weapon_eventSetMagCount_Parms
		{
			int32 _magCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__magCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_SetMagCount_Statics::NewProp__magCount = { "_magCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventSetMagCount_Parms, _magCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetMagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetMagCount_Statics::NewProp__magCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetMagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetMagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetMagCount", nullptr, nullptr, sizeof(Weapon_eventSetMagCount_Parms), Z_Construct_UFunction_UWeapon_SetMagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetMagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetMagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetMagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics
	{
		struct Weapon_eventSetMaxAmmo_Parms
		{
			int32 _maxAmmo;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__maxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::NewProp__maxAmmo = { "_maxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventSetMaxAmmo_Parms, _maxAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::NewProp__maxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ----- Setters \n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "----- Setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetMaxAmmo", nullptr, nullptr, sizeof(Weapon_eventSetMaxAmmo_Parms), Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics
	{
		struct Weapon_eventSetMaxAmmoCount_Parms
		{
			int32 _maxAmmoCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__maxAmmoCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::NewProp__maxAmmoCount = { "_maxAmmoCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventSetMaxAmmoCount_Parms, _maxAmmoCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::NewProp__maxAmmoCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetMaxAmmoCount", nullptr, nullptr, sizeof(Weapon_eventSetMaxAmmoCount_Parms), Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetMaxAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetMaxAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_SetReloadTime_Statics
	{
		struct Weapon_eventSetReloadTime_Parms
		{
			int32 _reloadTime;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__reloadTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::NewProp__reloadTime = { "_reloadTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventSetReloadTime_Parms, _reloadTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::NewProp__reloadTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "SetReloadTime", nullptr, nullptr, sizeof(Weapon_eventSetReloadTime_Parms), Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_SetReloadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_SetReloadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeapon_Shoot_Statics
	{
		struct Weapon_eventShoot_Parms
		{
			FRotator SpawnRotation;
			FVector SpawnLocation;
			FVector direction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventShoot_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventShoot_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventShoot_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeapon_Shoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeapon_Shoot_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeapon_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon, nullptr, "Shoot", nullptr, nullptr, sizeof(Weapon_eventShoot_Parms), Z_Construct_UFunction_UWeapon_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_Shoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeapon_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeapon_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeapon_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeapon_NoRegister()
	{
		return UWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_bullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_maxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_maxAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_magCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_magCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_magCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_magCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_reloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_isAutomatic_MetaData[];
#endif
		static void NewProp_m_isAutomatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_isAutomatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_canShoot_MetaData[];
#endif
		static void NewProp_m_canShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_canShoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeapon_GetCanShoot, "GetCanShoot" }, // 3217169085
		{ &Z_Construct_UFunction_UWeapon_getDirDeflection, "getDirDeflection" }, // 2824655132
		{ &Z_Construct_UFunction_UWeapon_GetFireRate, "GetFireRate" }, // 2902949503
		{ &Z_Construct_UFunction_UWeapon_GetIsAutomatic, "GetIsAutomatic" }, // 441175251
		{ &Z_Construct_UFunction_UWeapon_GetMagCapacity, "GetMagCapacity" }, // 3167621290
		{ &Z_Construct_UFunction_UWeapon_GetMagCount, "GetMagCount" }, // 3220694826
		{ &Z_Construct_UFunction_UWeapon_GetMaxAmmo, "GetMaxAmmo" }, // 2328436523
		{ &Z_Construct_UFunction_UWeapon_GetMaxAmmoCount, "GetMaxAmmoCount" }, // 456291350
		{ &Z_Construct_UFunction_UWeapon_GetReloadTime, "GetReloadTime" }, // 2008977243
		{ &Z_Construct_UFunction_UWeapon_Reload, "Reload" }, // 2131430794
		{ &Z_Construct_UFunction_UWeapon_SetCanShoot, "SetCanShoot" }, // 3277290525
		{ &Z_Construct_UFunction_UWeapon_SetMagCapacity, "SetMagCapacity" }, // 950978742
		{ &Z_Construct_UFunction_UWeapon_SetMagCount, "SetMagCount" }, // 1164845048
		{ &Z_Construct_UFunction_UWeapon_SetMaxAmmo, "SetMaxAmmo" }, // 3568002965
		{ &Z_Construct_UFunction_UWeapon_SetMaxAmmoCount, "SetMaxAmmoCount" }, // 2466187906
		{ &Z_Construct_UFunction_UWeapon_SetReloadTime, "SetReloadTime" }, // 1890394292
		{ &Z_Construct_UFunction_UWeapon_Shoot, "Shoot" }, // 3353567635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_bullet_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_bullet = { "m_bullet", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_bullet), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_bullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmo_MetaData[] = {
		{ "Category", "ammo" },
		{ "Comment", "// All the ammo you can carry\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "All the ammo you can carry" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmo = { "m_maxAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_maxAmmo), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmoCount_MetaData[] = {
		{ "Category", "ammo" },
		{ "Comment", "// All the ammo you are carrying\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "All the ammo you are carrying" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmoCount = { "m_maxAmmoCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_maxAmmoCount), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCapacity_MetaData[] = {
		{ "Category", "ammo" },
		{ "Comment", "// All the magazine the weapon can have\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "All the magazine the weapon can have" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCapacity = { "m_magCapacity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_magCapacity), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCount_MetaData[] = {
		{ "Category", "ammo" },
		{ "Comment", "// The magazine the weapon has\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The magazine the weapon has" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCount = { "m_magCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_magCount), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_reloadTime_MetaData[] = {
		{ "Category", "ammo" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_reloadTime = { "m_reloadTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_reloadTime), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_reloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_fireRate_MetaData[] = {
		{ "Category", "ammo" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_fireRate = { "m_fireRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeapon, m_fireRate), METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_fireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_fireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic_MetaData[] = {
		{ "Category", "ammo" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic_SetBit(void* Obj)
	{
		((UWeapon*)Obj)->m_isAutomatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic = { "m_isAutomatic", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeapon), &Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot_MetaData[] = {
		{ "Category", "ammo" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot_SetBit(void* Obj)
	{
		((UWeapon*)Obj)->m_canShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot = { "m_canShoot", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeapon), &Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_bullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_maxAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_magCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_fireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_isAutomatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_Statics::NewProp_m_canShoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeapon_Statics::ClassParams = {
		&UWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeapon, 1163954195);
	template<> HALOCE_API UClass* StaticClass<UWeapon>()
	{
		return UWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeapon(Z_Construct_UClass_UWeapon, &UWeapon::StaticClass, TEXT("/Script/HaloCE"), TEXT("UWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
