// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEA/GEAGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEAGameMode() {}
// Cross Module References
	GEA_API UClass* Z_Construct_UClass_AGEAGameMode_NoRegister();
	GEA_API UClass* Z_Construct_UClass_AGEAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GEA();
// End Cross Module References
	void AGEAGameMode::StaticRegisterNativesAGEAGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGEAGameMode);
	UClass* Z_Construct_UClass_AGEAGameMode_NoRegister()
	{
		return AGEAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGEAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GEA,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GEAGameMode.h" },
		{ "ModuleRelativePath", "GEAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGEAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGEAGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGEAGameMode_Statics::ClassParams = {
		&AGEAGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGEAGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGEAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGEAGameMode()
	{
		if (!Z_Registration_Info_UClass_AGEAGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGEAGameMode.OuterSingleton, Z_Construct_UClass_AGEAGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGEAGameMode.OuterSingleton;
	}
	template<> GEA_API UClass* StaticClass<AGEAGameMode>()
	{
		return AGEAGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGEAGameMode);
	struct Z_CompiledInDeferFile_FID_GEA_Source_GEA_GEAGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GEA_Source_GEA_GEAGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGEAGameMode, AGEAGameMode::StaticClass, TEXT("AGEAGameMode"), &Z_Registration_Info_UClass_AGEAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGEAGameMode), 626184615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GEA_Source_GEA_GEAGameMode_h_1383426020(TEXT("/Script/GEA"),
		Z_CompiledInDeferFile_FID_GEA_Source_GEA_GEAGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GEA_Source_GEA_GEAGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
