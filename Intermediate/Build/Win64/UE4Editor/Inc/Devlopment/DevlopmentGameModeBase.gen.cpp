// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Devlopment/DevlopmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevlopmentGameModeBase() {}
// Cross Module References
	DEVLOPMENT_API UClass* Z_Construct_UClass_ADevlopmentGameModeBase_NoRegister();
	DEVLOPMENT_API UClass* Z_Construct_UClass_ADevlopmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Devlopment();
// End Cross Module References
	void ADevlopmentGameModeBase::StaticRegisterNativesADevlopmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADevlopmentGameModeBase_NoRegister()
	{
		return ADevlopmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADevlopmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevlopmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Devlopment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevlopmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DevlopmentGameModeBase.h" },
		{ "ModuleRelativePath", "DevlopmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevlopmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevlopmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevlopmentGameModeBase_Statics::ClassParams = {
		&ADevlopmentGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADevlopmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevlopmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevlopmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevlopmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevlopmentGameModeBase, 3598185876);
	template<> DEVLOPMENT_API UClass* StaticClass<ADevlopmentGameModeBase>()
	{
		return ADevlopmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevlopmentGameModeBase(Z_Construct_UClass_ADevlopmentGameModeBase, &ADevlopmentGameModeBase::StaticClass, TEXT("/Script/Devlopment"), TEXT("ADevlopmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevlopmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
