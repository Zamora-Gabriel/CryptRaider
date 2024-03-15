// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaiderGame/ObjectRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectRotator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CRYPTRAIDERGAME_API UClass* Z_Construct_UClass_UObjectRotator();
	CRYPTRAIDERGAME_API UClass* Z_Construct_UClass_UObjectRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaiderGame();
// End Cross Module References
	void UObjectRotator::StaticRegisterNativesUObjectRotator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectRotator);
	UClass* Z_Construct_UClass_UObjectRotator_NoRegister()
	{
		return UObjectRotator::StaticClass();
	}
	struct Z_Construct_UClass_UObjectRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleToRotate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngleToRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldRotate_MetaData[];
#endif
		static void NewProp_ShouldRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldRotate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaiderGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectRotator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectRotator.h" },
		{ "ModuleRelativePath", "ObjectRotator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectRotator_Statics::NewProp_AngleToRotate_MetaData[] = {
		{ "Category", "ObjectRotator" },
		{ "ModuleRelativePath", "ObjectRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectRotator_Statics::NewProp_AngleToRotate = { "AngleToRotate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectRotator, AngleToRotate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::NewProp_AngleToRotate_MetaData), Z_Construct_UClass_UObjectRotator_Statics::NewProp_AngleToRotate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectRotator_Statics::NewProp_RotateTime_MetaData[] = {
		{ "Category", "ObjectRotator" },
		{ "ModuleRelativePath", "ObjectRotator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectRotator_Statics::NewProp_RotateTime = { "RotateTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectRotator, RotateTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::NewProp_RotateTime_MetaData), Z_Construct_UClass_UObjectRotator_Statics::NewProp_RotateTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate_MetaData[] = {
		{ "Category", "ObjectRotator" },
		{ "ModuleRelativePath", "ObjectRotator.h" },
	};
#endif
	void Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate_SetBit(void* Obj)
	{
		((UObjectRotator*)Obj)->ShouldRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate = { "ShouldRotate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectRotator), &Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate_MetaData), Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectRotator_Statics::NewProp_AngleToRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectRotator_Statics::NewProp_RotateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectRotator_Statics::NewProp_ShouldRotate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectRotator_Statics::ClassParams = {
		&UObjectRotator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectRotator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectRotator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectRotator()
	{
		if (!Z_Registration_Info_UClass_UObjectRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectRotator.OuterSingleton, Z_Construct_UClass_UObjectRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectRotator.OuterSingleton;
	}
	template<> CRYPTRAIDERGAME_API UClass* StaticClass<UObjectRotator>()
	{
		return UObjectRotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectRotator);
	UObjectRotator::~UObjectRotator() {}
	struct Z_CompiledInDeferFile_FID_Repos_UnrealProjects_CryptRaider_CryptRaider___copia_CryptRaider_CryptRaiderGame_Source_CryptRaiderGame_ObjectRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_UnrealProjects_CryptRaider_CryptRaider___copia_CryptRaider_CryptRaiderGame_Source_CryptRaiderGame_ObjectRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectRotator, UObjectRotator::StaticClass, TEXT("UObjectRotator"), &Z_Registration_Info_UClass_UObjectRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectRotator), 1904827647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_UnrealProjects_CryptRaider_CryptRaider___copia_CryptRaider_CryptRaiderGame_Source_CryptRaiderGame_ObjectRotator_h_4147749564(TEXT("/Script/CryptRaiderGame"),
		Z_CompiledInDeferFile_FID_Repos_UnrealProjects_CryptRaider_CryptRaider___copia_CryptRaider_CryptRaiderGame_Source_CryptRaiderGame_ObjectRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_UnrealProjects_CryptRaider_CryptRaider___copia_CryptRaider_CryptRaiderGame_Source_CryptRaiderGame_ObjectRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
