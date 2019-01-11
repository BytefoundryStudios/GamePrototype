// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSWeapon_generated_h
#error "FPSWeapon.generated.h already included, missing '#pragma once' in FPSWeapon.h"
#endif
#define FPSGAME_FPSWeapon_generated_h

#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_EVENT_PARMS
#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_CALLBACK_WRAPPERS
#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public:


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSWeapon)


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GunMesh1P() { return STRUCT_OFFSET(AFPSWeapon, GunMesh1P); } \
	FORCEINLINE static uint32 __PPO__GunMesh3P() { return STRUCT_OFFSET(AFPSWeapon, GunMesh3P); }


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_14_PROLOG \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_EVENT_PARMS


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_RPC_WRAPPERS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_CALLBACK_WRAPPERS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_INCLASS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_CALLBACK_WRAPPERS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_INCLASS_NO_PURE_DECLS \
	MFPSGame_Source_FPSGame_Public_FPSWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MFPSGame_Source_FPSGame_Public_FPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
