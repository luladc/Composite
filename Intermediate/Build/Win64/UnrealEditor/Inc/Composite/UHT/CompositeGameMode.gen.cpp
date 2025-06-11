// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/CompositeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeGameMode() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_ACompositeGameMode();
COMPOSITE_API UClass* Z_Construct_UClass_ACompositeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Class ACompositeGameMode
void ACompositeGameMode::StaticRegisterNativesACompositeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACompositeGameMode);
UClass* Z_Construct_UClass_ACompositeGameMode_NoRegister()
{
	return ACompositeGameMode::StaticClass();
}
struct Z_Construct_UClass_ACompositeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CompositeGameMode.h" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigo1_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigo2_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigos2_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigo1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigo2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigos2_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemigos2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, Jugador), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jugador_MetaData), NewProp_Jugador_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigo1 = { "Enemigo1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, Enemigo1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigo1_MetaData), NewProp_Enemigo1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigo2 = { "Enemigo2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, Enemigo2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigo2_MetaData), NewProp_Enemigo2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigos_MetaData), NewProp_Enemigos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos2_Inner = { "Enemigos2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos2 = { "Enemigos2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, Enemigos2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigos2_MetaData), NewProp_Enemigos2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigo1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigo2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos2_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_Enemigos2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACompositeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositeGameMode_Statics::ClassParams = {
	&ACompositeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACompositeGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACompositeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACompositeGameMode()
{
	if (!Z_Registration_Info_UClass_ACompositeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositeGameMode.OuterSingleton, Z_Construct_UClass_ACompositeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACompositeGameMode.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<ACompositeGameMode>()
{
	return ACompositeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositeGameMode);
ACompositeGameMode::~ACompositeGameMode() {}
// End Class ACompositeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACompositeGameMode, ACompositeGameMode::StaticClass, TEXT("ACompositeGameMode"), &Z_Registration_Info_UClass_ACompositeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositeGameMode), 2501754871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_4036994590(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
