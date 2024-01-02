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
	 * 		Name   -> Function TriggeredObjectInterface.TriggeredObjectInterface_C.TriggerHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AObjectTrigger_C*                            Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTriggeredObjectInterface_C::TriggerHit(class AObjectTrigger_C* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggeredObjectInterface.TriggeredObjectInterface_C.TriggerHit");
		
		UTriggeredObjectInterface_C_TriggerHit_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggeredObjectInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggeredObjectInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TriggeredObjectInterface.TriggeredObjectInterface_C");
		return ptr;
	}

}


