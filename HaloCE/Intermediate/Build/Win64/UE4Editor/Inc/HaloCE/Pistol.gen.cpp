// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_UPistol_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_UPistol();
	HALOCE_API UClass* Z_Construct_UClass_UWeapon();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void UPistol::StaticRegisterNativesUPistol()
	{
	}
	UClass* Z_Construct_UClass_UPistol_NoRegister()
	{
		return UPistol::StaticClass();
	}
	struct Z_Construct_UClass_UPistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pistol.h" },
		{ "ModuleRelativePath", "Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPistol_Statics::ClassParams = {
		&UPistol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPistol, 2948416635);
	template<> HALOCE_API UClass* StaticClass<UPistol>()
	{
		return UPistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPistol(Z_Construct_UClass_UPistol, &UPistol::StaticClass, TEXT("/Script/HaloCE"), TEXT("UPistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
