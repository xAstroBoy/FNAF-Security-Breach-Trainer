/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InInventoryTapes                                           (Parm, OutParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                TapesDonePlaying                                           (Parm, OutParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasBeenCollected                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTapeSaveGameObject_C::GetCollectedTapesData(const class FName& InventoryItemName, bool* HasBeenCollected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData");
		
		UTapeSaveGameObject_C_GetCollectedTapesData_Params params {};
		params.InventoryItemName = InventoryItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasBeenCollected != nullptr)
			*HasBeenCollected = params.HasBeenCollected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTapeSaveGameObject_C.StaticClass
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


