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
COMPOSITE_API UClass* Z_Construct_UClass_AGrupoEnemigos_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseGrupoEnemigos_MetaData[] = {
		{ "Category", "CompositeGameMode" },
		{ "ModuleRelativePath", "CompositeGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseGrupoEnemigos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_ClaseGrupoEnemigos = { "ClaseGrupoEnemigos", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeGameMode, ClaseGrupoEnemigos), Z_Construct_UClass_UClass, Z_Construct_UClass_AGrupoEnemigos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseGrupoEnemigos_MetaData), NewProp_ClaseGrupoEnemigos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeGameMode_Statics::NewProp_ClaseGrupoEnemigos,
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
		{ Z_Construct_UClass_ACompositeGameMode, ACompositeGameMode::StaticClass, TEXT("ACompositeGameMode"), &Z_Registration_Info_UClass_ACompositeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositeGameMode), 1524199089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_3872400900(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_CompositeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
