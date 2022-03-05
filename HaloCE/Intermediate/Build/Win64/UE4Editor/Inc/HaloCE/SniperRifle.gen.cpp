// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/SniperRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperRifle() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_USniperRifle_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_USniperRifle();
	HALOCE_API UClass* Z_Construct_UClass_UWeapon();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void USniperRifle::StaticRegisterNativesUSniperRifle()
	{
	}
	UClass* Z_Construct_UClass_USniperRifle_NoRegister()
	{
		return USniperRifle::StaticClass();
	}
	struct Z_Construct_UClass_USniperRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USniperRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USniperRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SniperRifle.h" },
		{ "ModuleRelativePath", "SniperRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USniperRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USniperRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USniperRifle_Statics::ClassParams = {
		&USniperRifle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USniperRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USniperRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USniperRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USniperRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USniperRifle, 2761914439);
	template<> HALOCE_API UClass* StaticClass<USniperRifle>()
	{
		return USniperRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USniperRifle(Z_Construct_UClass_USniperRifle, &USniperRifle::StaticClass, TEXT("/Script/HaloCE"), TEXT("USniperRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USniperRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
