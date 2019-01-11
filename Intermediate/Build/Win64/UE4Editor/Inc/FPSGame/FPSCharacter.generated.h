// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef FPSGAME_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSGAME_FPSCharacter_generated_h

#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroySelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroySelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets(); \
		P_NATIVE_END; \
	}


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroySelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroySelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets(); \
		P_NATIVE_END; \
	}


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1PComponent() { return STRUCT_OFFSET(AFPSCharacter, Mesh1PComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFPSCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AFPSCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName3P() { return STRUCT_OFFSET(AFPSCharacter, WeaponAttachSocketName3P); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName1P() { return STRUCT_OFFSET(AFPSCharacter, WeaponAttachSocketName1P); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(AFPSCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AFPSCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(AFPSCharacter, bDied); }


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_18_PROLOG
#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
	MFPSGame_Source_FPSGame_Public_FPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MFPSGame_Source_FPSGame_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
