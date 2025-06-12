// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/Enemigo2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo2() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo2();
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Class AEnemigo2
void AEnemigo2::StaticRegisterNativesAEnemigo2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo2);
UClass* Z_Construct_UClass_AEnemigo2_NoRegister()
{
	return AEnemigo2::StaticClass();
}
struct Z_Construct_UClass_AEnemigo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemigo2.h" },
		{ "ModuleRelativePath", "Enemigo2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigo2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo2_Statics::ClassParams = {
	&AEnemigo2::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo2_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo2()
{
	if (!Z_Registration_Info_UClass_AEnemigo2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo2.OuterSingleton, Z_Construct_UClass_AEnemigo2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo2.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<AEnemigo2>()
{
	return AEnemigo2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo2);
AEnemigo2::~AEnemigo2() {}
// End Class AEnemigo2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo2, AEnemigo2::StaticClass, TEXT("AEnemigo2"), &Z_Registration_Info_UClass_AEnemigo2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo2), 1403382791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo2_h_25944374(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
