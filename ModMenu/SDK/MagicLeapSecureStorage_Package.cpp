/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00A85CF0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureVector(const class FString& Key, const struct FVector& DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");
		
		UMagicLeapSecureStorage_PutSecureVector_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85FC0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DataToStore                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureTransform(const class FString& Key, const struct FTransform& DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");
		
		UMagicLeapSecureStorage_PutSecureTransform_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A86710
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DataToStore                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureString(const class FString& Key, const class FString& DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");
		
		UMagicLeapSecureStorage_PutSecureString_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A86630
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USaveGame*                                   ObjectToStore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");
		
		UMagicLeapSecureStorage_PutSecureSaveGame_Params params {};
		params.Key = Key;
		params.ObjectToStore = ObjectToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85CF0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureRotator(const class FString& Key, const struct FRotator& DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");
		
		UMagicLeapSecureStorage_PutSecureRotator_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A86480
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureInt64(const class FString& Key, int64_t DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");
		
		UMagicLeapSecureStorage_PutSecureInt64_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A86560
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureInt(const class FString& Key, int32_t DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");
		
		UMagicLeapSecureStorage_PutSecureInt_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A863A0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureFloat(const class FString& Key, float DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");
		
		UMagicLeapSecureStorage_PutSecureFloat_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A862C0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureByte(const class FString& Key, unsigned char DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");
		
		UMagicLeapSecureStorage_PutSecureByte_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A861E0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureBool(const class FString& Key, bool DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");
		
		UMagicLeapSecureStorage_PutSecureBool_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A860F0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_PutSecureArray(const class FString& Key, TArray<int32_t> DataToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");
		
		UMagicLeapSecureStorage_PutSecureArray_Params params {};
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85CF0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");
		
		UMagicLeapSecureStorage_GetSecureVector_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85FC0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DataToRetrieve                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");
		
		UMagicLeapSecureStorage_GetSecureTransform_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85EC0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureString(const class FString& Key, class FString* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");
		
		UMagicLeapSecureStorage_GetSecureString_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85DD0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USaveGame*                                   ObjectToRetrieve                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");
		
		UMagicLeapSecureStorage_GetSecureSaveGame_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectToRetrieve != nullptr)
			*ObjectToRetrieve = params.ObjectToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85CF0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");
		
		UMagicLeapSecureStorage_GetSecureRotator_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85B20
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureInt64(const class FString& Key, int64_t* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");
		
		UMagicLeapSecureStorage_GetSecureInt64_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85C10
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureInt(const class FString& Key, int32_t* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");
		
		UMagicLeapSecureStorage_GetSecureInt_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85A30
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureFloat(const class FString& Key, float* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");
		
		UMagicLeapSecureStorage_GetSecureFloat_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85940
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureByte(const class FString& Key, unsigned char* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");
		
		UMagicLeapSecureStorage_GetSecureByte_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85940
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureBool(const class FString& Key, bool* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");
		
		UMagicLeapSecureStorage_GetSecureBool_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A85850
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_GetSecureArray(const class FString& Key, TArray<int32_t>* DataToRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");
		
		UMagicLeapSecureStorage_GetSecureArray_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A857B0
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::STATIC_DeleteSecureData(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");
		
		UMagicLeapSecureStorage_DeleteSecureData_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapSecureStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapSecureStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapSecureStorage.MagicLeapSecureStorage");
		return ptr;
	}

}


