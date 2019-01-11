// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameMode() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameMode_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers();
// End Cross Module References
	void AFPSGameMode::StaticRegisterNativesAFPSGameMode()
	{
		UClass* Class = AFPSGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RespawnDeadPlayers", &AFPSGameMode::execRespawnDeadPlayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameMode, "RespawnDeadPlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameMode_NoRegister()
	{
		return AFPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameMode_RespawnDeadPlayers, "RespawnDeadPlayers" }, // 3569750208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSGameMode.h" },
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameMode_Statics::ClassParams = {
		&AFPSGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameMode, 3487460907);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameMode(Z_Construct_UClass_AFPSGameMode, &AFPSGameMode::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
