// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/Shotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_UShotgun_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_UShotgun();
	HALOCE_API UClass* Z_Construct_UClass_UWeapon();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void UShotgun::StaticRegisterNativesUShotgun()
	{
	}
	UClass* Z_Construct_UClass_UShotgun_NoRegister()
	{
		return UShotgun::StaticClass();
	}
	struct Z_Construct_UClass_UShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Shotgun.h" },
		{ "ModuleRelativePath", "Shotgun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotgun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShotgun_Statics::ClassParams = {
		&UShotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShotgun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShotgun, 2392921862);
	template<> HALOCE_API UClass* StaticClass<UShotgun>()
	{
		return UShotgun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShotgun(Z_Construct_UClass_UShotgun, &UShotgun::StaticClass, TEXT("/Script/HaloCE"), TEXT("UShotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
