// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORTNITECHAPTER3_MainInstance_generated_h
#error "MainInstance.generated.h already included, missing '#pragma once' in MainInstance.h"
#endif
#define FORTNITECHAPTER3_MainInstance_generated_h

#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_SPARSE_DATA
#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainInstance(); \
	friend struct Z_Construct_UClass_UMainInstance_Statics; \
public: \
	DECLARE_CLASS(UMainInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FortniteChapter3"), NO_API) \
	DECLARE_SERIALIZER(UMainInstance)


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainInstance(); \
	friend struct Z_Construct_UClass_UMainInstance_Statics; \
public: \
	DECLARE_CLASS(UMainInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FortniteChapter3"), NO_API) \
	DECLARE_SERIALIZER(UMainInstance)


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainInstance(UMainInstance&&); \
	NO_API UMainInstance(const UMainInstance&); \
public:


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainInstance(UMainInstance&&); \
	NO_API UMainInstance(const UMainInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMainInstance)


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_12_PROLOG
#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_SPARSE_DATA \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_RPC_WRAPPERS \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_INCLASS \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_SPARSE_DATA \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_INCLASS_NO_PURE_DECLS \
	FortniteChapter3_Source_FortniteChapter3_MainInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORTNITECHAPTER3_API UClass* StaticClass<class UMainInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FortniteChapter3_Source_FortniteChapter3_MainInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
