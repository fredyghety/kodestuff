// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWITCHES_CaptureZone_generated_h
#error "CaptureZone.generated.h already included, missing '#pragma once' in CaptureZone.h"
#endif
#define SWITCHES_CaptureZone_generated_h

#define FID_Switches_Source_Switches_CaptureZone_h_21_SPARSE_DATA
#define FID_Switches_Source_Switches_CaptureZone_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Switches_Source_Switches_CaptureZone_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Switches_Source_Switches_CaptureZone_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Switches_Source_Switches_CaptureZone_h_21_ACCESSORS
#define FID_Switches_Source_Switches_CaptureZone_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureZone(); \
	friend struct Z_Construct_UClass_ACaptureZone_Statics; \
public: \
	DECLARE_CLASS(ACaptureZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Switches"), NO_API) \
	DECLARE_SERIALIZER(ACaptureZone) \
	virtual UObject* _getUObject() const override { return const_cast<ACaptureZone*>(this); }


#define FID_Switches_Source_Switches_CaptureZone_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaptureZone(ACaptureZone&&); \
	NO_API ACaptureZone(const ACaptureZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureZone) \
	NO_API virtual ~ACaptureZone();


#define FID_Switches_Source_Switches_CaptureZone_h_18_PROLOG
#define FID_Switches_Source_Switches_CaptureZone_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Switches_Source_Switches_CaptureZone_h_21_SPARSE_DATA \
	FID_Switches_Source_Switches_CaptureZone_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Switches_Source_Switches_CaptureZone_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Switches_Source_Switches_CaptureZone_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Switches_Source_Switches_CaptureZone_h_21_ACCESSORS \
	FID_Switches_Source_Switches_CaptureZone_h_21_INCLASS_NO_PURE_DECLS \
	FID_Switches_Source_Switches_CaptureZone_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWITCHES_API UClass* StaticClass<class ACaptureZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Switches_Source_Switches_CaptureZone_h


#define FOREACH_ENUM_EFLAGSTATE(op) \
	op(EFlagState::UP) \
	op(EFlagState::Down) 

enum class EFlagState : uint8;
template<> struct TIsUEnumClass<EFlagState> { enum { Value = true }; };
template<> SWITCHES_API UEnum* StaticEnum<EFlagState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
