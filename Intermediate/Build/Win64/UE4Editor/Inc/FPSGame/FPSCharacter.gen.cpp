// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSCharacter_DestroySelf();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSCharacter_Fire();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetAimOffsets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySelf", &AFPSCharacter::execDestroySelf },
			{ "Fire", &AFPSCharacter::execFire },
			{ "GetAimOffsets", &AFPSCharacter::execGetAimOffsets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "DestroySelf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "DestroySelf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_DestroySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_DestroySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "call Fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics
	{
		struct FPSCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventGetAimOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Retrieve Pitch/Yaw from current camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "GetAimOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FPSCharacter_eventGetAimOffsets_Parms), Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetAimOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetAimOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[];
#endif
		static void NewProp_bDied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1PComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1PComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_DestroySelf, "DestroySelf" }, // 2092932978
		{ &Z_Construct_UFunction_AFPSCharacter_Fire, "Fire" }, // 474515904
		{ &Z_Construct_UFunction_AFPSCharacter_GetAimOffsets, "GetAimOffsets" }, // 1767085929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Identifies if pawn is Died" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bDied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020035, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Current health of the Pawn" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020025, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StarterWeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "default Weapon" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StarterWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "StarterWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, StarterWeaponClass), Z_Construct_UClass_AFPSWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StarterWeaponClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StarterWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName1P_MetaData[] = {
		{ "Category", "WeaponAttachPoint" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "socket or bone name for attaching weapon mesh First Person" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName1P = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponAttachSocketName1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, WeaponAttachSocketName1P), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName3P_MetaData[] = {
		{ "Category", "WeaponAttachPoint" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "socket or bone name for attaching weapon mesh Third Person" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName3P = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponAttachSocketName3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, WeaponAttachSocketName3P), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "currently equipped weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, CurrentWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, FireAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Mesh1PComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Mesh1PComponent = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1PComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, Mesh1PComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Mesh1PComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Mesh1PComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StarterWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponAttachSocketName3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Mesh1PComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1209508404);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
