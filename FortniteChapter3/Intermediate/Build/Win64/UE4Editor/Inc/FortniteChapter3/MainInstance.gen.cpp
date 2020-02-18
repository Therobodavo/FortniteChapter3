// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteChapter3/MainInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainInstance() {}
// Cross Module References
	FORTNITECHAPTER3_API UClass* Z_Construct_UClass_UMainInstance_NoRegister();
	FORTNITECHAPTER3_API UClass* Z_Construct_UClass_UMainInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_FortniteChapter3();
	FORTNITECHAPTER3_API UFunction* Z_Construct_UFunction_UMainInstance_Init();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UMainInstance::StaticRegisterNativesUMainInstance()
	{
		UClass* Class = UMainInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UMainInstance::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainInstance_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainInstance_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInstance_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainInstance, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainInstance_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInstance_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainInstance_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainInstance_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainInstance_NoRegister()
	{
		return UMainInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemy1BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy1BP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemySpawnerBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemySpawnerBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteChapter3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainInstance_Init, "Init" }, // 3329808646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainInstance.h" },
		{ "ModuleRelativePath", "MainInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainInstance_Statics::NewProp_enemy1BP_MetaData[] = {
		{ "ModuleRelativePath", "MainInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainInstance_Statics::NewProp_enemy1BP = { "enemy1BP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainInstance, enemy1BP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainInstance_Statics::NewProp_enemy1BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::NewProp_enemy1BP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainInstance_Statics::NewProp_enemySpawnerBP_MetaData[] = {
		{ "ModuleRelativePath", "MainInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainInstance_Statics::NewProp_enemySpawnerBP = { "enemySpawnerBP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainInstance, enemySpawnerBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainInstance_Statics::NewProp_enemySpawnerBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::NewProp_enemySpawnerBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainInstance_Statics::NewProp_SpawnActor_MetaData[] = {
		{ "ModuleRelativePath", "MainInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainInstance_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainInstance, SpawnActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainInstance_Statics::NewProp_SpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::NewProp_SpawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainInstance_Statics::NewProp_enemy1BP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainInstance_Statics::NewProp_enemySpawnerBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainInstance_Statics::NewProp_SpawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainInstance_Statics::ClassParams = {
		&UMainInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMainInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainInstance, 768981308);
	template<> FORTNITECHAPTER3_API UClass* StaticClass<UMainInstance>()
	{
		return UMainInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainInstance(Z_Construct_UClass_UMainInstance, &UMainInstance::StaticClass, TEXT("/Script/FortniteChapter3"), TEXT("UMainInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
