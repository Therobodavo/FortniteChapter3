// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORTNITECHAPTER3_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define FORTNITECHAPTER3_EnemySpawner_generated_h

#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_SPARSE_DATA
#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnWave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	}


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnWave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	}


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteChapter3"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteChapter3"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public:


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner)


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET
#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_9_PROLOG
#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_SPARSE_DATA \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_RPC_WRAPPERS \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_INCLASS \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_SPARSE_DATA \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
	FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORTNITECHAPTER3_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FortniteChapter3_Source_FortniteChapter3_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
