// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UseableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWITCHES_UseableInterface_generated_h
#error "UseableInterface.generated.h already included, missing '#pragma once' in UseableInterface.h"
#endif
#define SWITCHES_UseableInterface_generated_h

#define FID_Switches_Source_Switches_UseableInterface_h_13_SPARSE_DATA
#define FID_Switches_Source_Switches_UseableInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Switches_Source_Switches_UseableInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Switches_Source_Switches_UseableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Use_Implementation() {}; \
 \
	DECLARE_FUNCTION(execUse);


#define FID_Switches_Source_Switches_UseableInterface_h_13_ACCESSORS
#define FID_Switches_Source_Switches_UseableInterface_h_13_CALLBACK_WRAPPERS
#define FID_Switches_Source_Switches_UseableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SWITCHES_API UUseableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SWITCHES_API UUseableInterface(UUseableInterface&&); \
	SWITCHES_API UUseableInterface(const UUseableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SWITCHES_API, UUseableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUseableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUseableInterface) \
	SWITCHES_API virtual ~UUseableInterface();


#define FID_Switches_Source_Switches_UseableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUseableInterface(); \
	friend struct Z_Construct_UClass_UUseableInterface_Statics; \
public: \
	DECLARE_CLASS(UUseableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Switches"), SWITCHES_API) \
	DECLARE_SERIALIZER(UUseableInterface)


#define FID_Switches_Source_Switches_UseableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Switches_Source_Switches_UseableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Switches_Source_Switches_UseableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Switches_Source_Switches_UseableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUseableInterface() {} \
public: \
	typedef UUseableInterface UClassType; \
	typedef IUseableInterface ThisClass; \
	static void Execute_Use(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Switches_Source_Switches_UseableInterface_h_10_PROLOG
#define FID_Switches_Source_Switches_UseableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Switches_Source_Switches_UseableInterface_h_13_SPARSE_DATA \
	FID_Switches_Source_Switches_UseableInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Switches_Source_Switches_UseableInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Switches_Source_Switches_UseableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Switches_Source_Switches_UseableInterface_h_13_ACCESSORS \
	FID_Switches_Source_Switches_UseableInterface_h_13_CALLBACK_WRAPPERS \
	FID_Switches_Source_Switches_UseableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWITCHES_API UClass* StaticClass<class UUseableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Switches_Source_Switches_UseableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
