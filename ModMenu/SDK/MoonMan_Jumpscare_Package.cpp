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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonMan_Jumpscare_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointSave");
		
		AMoonMan_Jumpscare_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonMan_Jumpscare_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnGameDataLoaded");
		
		AMoonMan_Jumpscare_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonMan_Jumpscare_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnStoreGameData");
		
		AMoonMan_Jumpscare_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoonMan_Jumpscare_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostSaveGame");
		
		AMoonMan_Jumpscare_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMoonMan_Jumpscare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ReceiveBeginPlay");
		
		AMoonMan_Jumpscare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoonMan_Jumpscare_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostGameLoad");
		
		AMoonMan_Jumpscare_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonMan_Jumpscare_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointLoad");
		
		AMoonMan_Jumpscare_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ExecuteUbergraph_MoonMan_Jumpscare
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonMan_Jumpscare_C::ExecuteUbergraph_MoonMan_Jumpscare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ExecuteUbergraph_MoonMan_Jumpscare");
		
		AMoonMan_Jumpscare_C_ExecuteUbergraph_MoonMan_Jumpscare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMoonMan_Jumpscare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonMan_Jumpscare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoonMan_Jumpscare.MoonMan_Jumpscare_C");
		return ptr;
	}

}


