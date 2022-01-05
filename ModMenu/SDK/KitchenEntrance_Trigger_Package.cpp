﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "KitchenEntrance_Trigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AKitchenEntrance_Trigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.OnTriggered");
		
		AKitchenEntrance_Trigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.ExecuteUbergraph_KitchenEntrance_Trigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKitchenEntrance_Trigger_C::ExecuteUbergraph_KitchenEntrance_Trigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.ExecuteUbergraph_KitchenEntrance_Trigger");
		
		AKitchenEntrance_Trigger_C_ExecuteUbergraph_KitchenEntrance_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AKitchenEntrance_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKitchenEntrance_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KitchenEntrance_Trigger.KitchenEntrance_Trigger_C");
		return ptr;
	}

}

