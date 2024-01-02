/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.OnTriggered
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KitchenEntrance_Trigger.KitchenEntrance_Trigger_C.ExecuteUbergraph_KitchenEntrance_Trigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKitchenEntrance_Trigger_C::ExecuteUbergraph_KitchenEntrance_Trigger(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKitchenEntrance_Trigger_C.StaticClass
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


