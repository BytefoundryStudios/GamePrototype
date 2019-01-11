// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSWeapon() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSWeapon_Fire();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSWeapon_ServerFire();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFPSWeapon_ServerFire = FName(TEXT("ServerFire"));
	void AFPSWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSWeapon_ServerFire),NULL);
	}
	void AFPSWeapon::StaticRegisterNativesAFPSWeapon()
	{
		UClass* Class = AFPSWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AFPSWeapon::execFire },
			{ "ServerFire", &AFPSWeapon::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSWeapon_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, "ServerFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSWeapon_NoRegister()
	{
		return AFPSWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSWeapon_Fire, "Fire" }, // 511535166
		{ &Z_Construct_UFunction_AFPSWeapon_ServerFire, "ServerFire" }, // 315441838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSWeapon.h" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFPSWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFPSWeapon, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh3P_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "ToolTip", "weapon mesh: 3rd person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh3P = { UE4CodeGen_Private::EPropertyClass::Object, "GunMesh3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFPSWeapon, GunMesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh1P_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "ToolTip", "weapon mesh: 1st person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "GunMesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFPSWeapon, GunMesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunMesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSWeapon_Statics::ClassParams = {
		&AFPSWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFPSWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSWeapon, 1447014130);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSWeapon(Z_Construct_UClass_AFPSWeapon, &AFPSWeapon::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
