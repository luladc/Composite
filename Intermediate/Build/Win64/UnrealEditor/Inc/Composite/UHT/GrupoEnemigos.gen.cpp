// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/GrupoEnemigos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrupoEnemigos() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo1_NoRegister();
COMPOSITE_API UClass* Z_Construct_UClass_AGrupoEnemigos();
COMPOSITE_API UClass* Z_Construct_UClass_AGrupoEnemigos_NoRegister();
COMPOSITE_API UClass* Z_Construct_UClass_UIEnemigo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Class AGrupoEnemigos Function StartPatrol
struct Z_Construct_UFunction_AGrupoEnemigos_StartPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ordena a todos los enemigos que persigan al objetivo dado\n" },
#endif
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ordena a todos los enemigos que persigan al objetivo dado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrupoEnemigos_StartPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrupoEnemigos, nullptr, "StartPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrupoEnemigos_StartPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrupoEnemigos_StartPatrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGrupoEnemigos_StartPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrupoEnemigos_StartPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrupoEnemigos::execStartPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPatrol();
	P_NATIVE_END;
}
// End Class AGrupoEnemigos Function StartPatrol

// Begin Class AGrupoEnemigos
void AGrupoEnemigos::StaticRegisterNativesAGrupoEnemigos()
{
	UClass* Class = AGrupoEnemigos::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartPatrol", &AGrupoEnemigos::execStartPatrol },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrupoEnemigos);
UClass* Z_Construct_UClass_AGrupoEnemigos_NoRegister()
{
	return AGrupoEnemigos::StaticClass();
}
struct Z_Construct_UClass_AGrupoEnemigos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GrupoEnemigos.h" },
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[] = {
		{ "Category", "Grupo Enemigos" },
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseEnemigo1_MetaData[] = {
		{ "Category", "Grupo" },
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CantidadEnemigos_MetaData[] = {
		{ "Category", "Grupo" },
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separacion_MetaData[] = {
		{ "Category", "Grupo" },
		{ "ModuleRelativePath", "GrupoEnemigos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseEnemigo1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CantidadEnemigos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Separacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrupoEnemigos_StartPatrol, "StartPatrol" }, // 1915383360
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrupoEnemigos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo1_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupoEnemigos, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigos_MetaData), NewProp_Enemigos_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_ClaseEnemigo1 = { "ClaseEnemigo1", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupoEnemigos, ClaseEnemigo1), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemigo1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseEnemigo1_MetaData), NewProp_ClaseEnemigo1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_CantidadEnemigos = { "CantidadEnemigos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupoEnemigos, CantidadEnemigos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CantidadEnemigos_MetaData), NewProp_CantidadEnemigos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Separacion = { "Separacion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupoEnemigos, Separacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separacion_MetaData), NewProp_Separacion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrupoEnemigos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Enemigos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Enemigos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_ClaseEnemigo1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_CantidadEnemigos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoEnemigos_Statics::NewProp_Separacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoEnemigos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrupoEnemigos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoEnemigos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrupoEnemigos_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEnemigo_NoRegister, (int32)VTABLE_OFFSET(AGrupoEnemigos, IIEnemigo), false },  // 3170062454
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrupoEnemigos_Statics::ClassParams = {
	&AGrupoEnemigos::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGrupoEnemigos_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoEnemigos_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoEnemigos_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrupoEnemigos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrupoEnemigos()
{
	if (!Z_Registration_Info_UClass_AGrupoEnemigos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrupoEnemigos.OuterSingleton, Z_Construct_UClass_AGrupoEnemigos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrupoEnemigos.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<AGrupoEnemigos>()
{
	return AGrupoEnemigos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrupoEnemigos);
AGrupoEnemigos::~AGrupoEnemigos() {}
// End Class AGrupoEnemigos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_GrupoEnemigos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrupoEnemigos, AGrupoEnemigos::StaticClass, TEXT("AGrupoEnemigos"), &Z_Registration_Info_UClass_AGrupoEnemigos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrupoEnemigos), 1800547536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_GrupoEnemigos_h_2952982567(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_GrupoEnemigos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_GrupoEnemigos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
