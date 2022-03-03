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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTapeSaveGameObject_C::IncrementTapesPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed");
		
		UTapeSaveGameObject_C_IncrementTapesPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NoOfTapesPlayed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTapeSaveGameObject_C::GetNoOfTapesDone(int32_t* NoOfTapesPlayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone");
		
		UTapeSaveGameObject_C_GetNoOfTapesDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoOfTapesPlayed != nullptr)
			*NoOfTapesPlayed = params.NoOfTapesPlayed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                InInventoryTapes                                           (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UTapeSaveGameObject_C::GetInventoryTapes(TArray<class FName>* InInventoryTapes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes");
		
		UTapeSaveGameObject_C_GetInventoryTapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InInventoryTapes != nullptr)
			*InInventoryTapes = params.InInventoryTapes;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTapeSaveGameObject_C::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll");
		
		UTapeSaveGameObject_C_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                TapesDonePlaying                                           (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UTapeSaveGameObject_C::GetTapesDonePlaying(TArray<class FName>* TapesDonePlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying");
		
		UTapeSaveGameObject_C_GetTapesDonePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapesDonePlaying != nullptr)
			*TapesDonePlaying = params.TapesDonePlaying;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TapeDonePlaying                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTapeSaveGameObject_C::AddTapeDonePlaying(const class FName& TapeDonePlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying");
		
		UTapeSaveGameObject_C_AddTapeDonePlaying_Params params {};
		params.TapeDonePlaying = TapeDonePlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasBeenCollected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTapeSaveGameObject_C::SetCollectedTapesData(const class FName& InventoryItemName, bool HasBeenCollected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData");
		
		UTapeSaveGameObject_C_SetCollectedTapesData_Params params {};
		params.InventoryItemName = InventoryItemName;
		params.HasBeenCollected = HasBeenCollected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasBeenCollected_                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTapeSaveGameObject_C::GetCollectedTapesData(const class FName& InventoryItemName, bool* HasBeenCollected_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData");
		
		UTapeSaveGameObject_C_GetCollectedTapesData_Params params {};
		params.InventoryItemName = InventoryItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasBeenCollected_ != nullptr)
			*HasBeenCollected_ = params.HasBeenCollected_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTapeSaveGameObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTapeSaveGameObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TapeSaveGameObject.TapeSaveGameObject_C");
		return ptr;
	}

}


