// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/Enemigo1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo();
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo1();
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo1_NoRegister();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Class AEnemigo1 Function GetMovementSpeed
struct Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics
{
	struct Enemigo1_eventGetMovementSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo1_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "GetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::Enemigo1_eventGetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::Enemigo1_eventGetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo1_GetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_GetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execGetMovementSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
	P_NATIVE_END;
}
// End Class AEnemigo1 Function GetMovementSpeed

// Begin Class AEnemigo1 Function GetPatrolRadius
struct Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics
{
	struct Enemigo1_eventGetPatrolRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo1_eventGetPatrolRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "GetPatrolRadius", nullptr, nullptr, Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::Enemigo1_eventGetPatrolRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::Enemigo1_eventGetPatrolRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo1_GetPatrolRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_GetPatrolRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execGetPatrolRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPatrolRadius();
	P_NATIVE_END;
}
// End Class AEnemigo1 Function GetPatrolRadius

// Begin Class AEnemigo1 Function SetMovementSpeed
struct Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics
{
	struct Enemigo1_eventSetMovementSpeed_Parms
	{
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter y Setter para las propiedades\n" },
#endif
		{ "ModuleRelativePath", "Enemigo1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter y Setter para las propiedades" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo1_eventSetMovementSpeed_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "SetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::Enemigo1_eventSetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::Enemigo1_eventSetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo1_SetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_SetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execSetMovementSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeed(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class AEnemigo1 Function SetMovementSpeed

// Begin Class AEnemigo1 Function SetPatrolRadius
struct Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics
{
	struct Enemigo1_eventSetPatrolRadius_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo1_eventSetPatrolRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "SetPatrolRadius", nullptr, nullptr, Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::Enemigo1_eventSetPatrolRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::Enemigo1_eventSetPatrolRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo1_SetPatrolRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_SetPatrolRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execSetPatrolRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPatrolRadius(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class AEnemigo1 Function SetPatrolRadius

// Begin Class AEnemigo1 Function StartPatrol
struct Z_Construct_UFunction_AEnemigo1_StartPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para iniciar el movimiento de patrulla\n" },
#endif
		{ "ModuleRelativePath", "Enemigo1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para iniciar el movimiento de patrulla" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_StartPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "StartPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_StartPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_StartPatrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigo1_StartPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_StartPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execStartPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPatrol();
	P_NATIVE_END;
}
// End Class AEnemigo1 Function StartPatrol

// Begin Class AEnemigo1 Function StopPatrol
struct Z_Construct_UFunction_AEnemigo1_StopPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para detener el movimiento de patrulla\n" },
#endif
		{ "ModuleRelativePath", "Enemigo1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para detener el movimiento de patrulla" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo1_StopPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo1, nullptr, "StopPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo1_StopPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo1_StopPatrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigo1_StopPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo1_StopPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo1::execStopPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPatrol();
	P_NATIVE_END;
}
// End Class AEnemigo1 Function StopPatrol

// Begin Class AEnemigo1
void AEnemigo1::StaticRegisterNativesAEnemigo1()
{
	UClass* Class = AEnemigo1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementSpeed", &AEnemigo1::execGetMovementSpeed },
		{ "GetPatrolRadius", &AEnemigo1::execGetPatrolRadius },
		{ "SetMovementSpeed", &AEnemigo1::execSetMovementSpeed },
		{ "SetPatrolRadius", &AEnemigo1::execSetPatrolRadius },
		{ "StartPatrol", &AEnemigo1::execStartPatrol },
		{ "StopPatrol", &AEnemigo1::execStopPatrol },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo1);
UClass* Z_Construct_UClass_AEnemigo1_NoRegister()
{
	return AEnemigo1::StaticClass();
}
struct Z_Construct_UClass_AEnemigo1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemigo1.h" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigo1_GetMovementSpeed, "GetMovementSpeed" }, // 2292381427
		{ &Z_Construct_UFunction_AEnemigo1_GetPatrolRadius, "GetPatrolRadius" }, // 2773478283
		{ &Z_Construct_UFunction_AEnemigo1_SetMovementSpeed, "SetMovementSpeed" }, // 895689285
		{ &Z_Construct_UFunction_AEnemigo1_SetPatrolRadius, "SetPatrolRadius" }, // 2206259049
		{ &Z_Construct_UFunction_AEnemigo1_StartPatrol, "StartPatrol" }, // 2762132140
		{ &Z_Construct_UFunction_AEnemigo1_StopPatrol, "StopPatrol" }, // 680933985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigo1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1_Statics::ClassParams = {
	&AEnemigo1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo1()
{
	if (!Z_Registration_Info_UClass_AEnemigo1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo1.OuterSingleton, Z_Construct_UClass_AEnemigo1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo1.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<AEnemigo1>()
{
	return AEnemigo1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1);
AEnemigo1::~AEnemigo1() {}
// End Class AEnemigo1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo1, AEnemigo1::StaticClass, TEXT("AEnemigo1"), &Z_Registration_Info_UClass_AEnemigo1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo1), 3544325419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_3137180157(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
