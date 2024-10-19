// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Game/LevelMapActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelMapActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREAL_GAME_API UClass* Z_Construct_UClass_ALevelMapActor();
	UNREAL_GAME_API UClass* Z_Construct_UClass_ALevelMapActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_Game();
// End Cross Module References
	void ALevelMapActor::StaticRegisterNativesALevelMapActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelMapActor);
	UClass* Z_Construct_UClass_ALevelMapActor_NoRegister()
	{
		return ALevelMapActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelMapActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_percent_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_start_percent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_percent_decrease_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_percent_decrease;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelMapActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelMapActor.h" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::NewProp_width_MetaData[] = {
		{ "Category", "LevelMapActor" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelMapActor_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelMapActor, width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::NewProp_width_MetaData), Z_Construct_UClass_ALevelMapActor_Statics::NewProp_width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::NewProp_height_MetaData[] = {
		{ "Category", "LevelMapActor" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelMapActor_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelMapActor, height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::NewProp_height_MetaData), Z_Construct_UClass_ALevelMapActor_Statics::NewProp_height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::NewProp_shape_MetaData[] = {
		{ "Category", "LevelMapActor" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelMapActor_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelMapActor, shape), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::NewProp_shape_MetaData), Z_Construct_UClass_ALevelMapActor_Statics::NewProp_shape_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::NewProp_start_percent_MetaData[] = {
		{ "Category", "LevelMapActor" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ALevelMapActor_Statics::NewProp_start_percent = { "start_percent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelMapActor, start_percent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::NewProp_start_percent_MetaData), Z_Construct_UClass_ALevelMapActor_Statics::NewProp_start_percent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelMapActor_Statics::NewProp_percent_decrease_MetaData[] = {
		{ "Category", "LevelMapActor" },
		{ "ModuleRelativePath", "LevelMapActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ALevelMapActor_Statics::NewProp_percent_decrease = { "percent_decrease", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelMapActor, percent_decrease), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::NewProp_percent_decrease_MetaData), Z_Construct_UClass_ALevelMapActor_Statics::NewProp_percent_decrease_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelMapActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelMapActor_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelMapActor_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelMapActor_Statics::NewProp_shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelMapActor_Statics::NewProp_start_percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelMapActor_Statics::NewProp_percent_decrease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelMapActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelMapActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelMapActor_Statics::ClassParams = {
		&ALevelMapActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelMapActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelMapActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelMapActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALevelMapActor()
	{
		if (!Z_Registration_Info_UClass_ALevelMapActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelMapActor.OuterSingleton, Z_Construct_UClass_ALevelMapActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelMapActor.OuterSingleton;
	}
	template<> UNREAL_GAME_API UClass* StaticClass<ALevelMapActor>()
	{
		return ALevelMapActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelMapActor);
	ALevelMapActor::~ALevelMapActor() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Game_Source_Unreal_Game_LevelMapActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Game_Source_Unreal_Game_LevelMapActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelMapActor, ALevelMapActor::StaticClass, TEXT("ALevelMapActor"), &Z_Registration_Info_UClass_ALevelMapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelMapActor), 675681065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Game_Source_Unreal_Game_LevelMapActor_h_1392125298(TEXT("/Script/Unreal_Game"),
		Z_CompiledInDeferFile_FID_Unreal_Game_Source_Unreal_Game_LevelMapActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Game_Source_Unreal_Game_LevelMapActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
