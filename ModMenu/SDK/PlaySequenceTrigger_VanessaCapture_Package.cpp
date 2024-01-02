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
	 * 		Name   -> Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.On Sequence Stop Event
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_VanessaCapture_C::OnSequenceStopEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.On Sequence Stop Event");
		
		APlaySequenceTrigger_VanessaCapture_C_OnSequenceStopEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.On Sequence Starting
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_VanessaCapture_C::OnSequenceStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.On Sequence Starting");
		
		APlaySequenceTrigger_VanessaCapture_C_OnSequenceStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_VanessaCapture_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.OnTriggered");
		
		APlaySequenceTrigger_VanessaCapture_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.ExecuteUbergraph_PlaySequenceTrigger_VanessaCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_VanessaCapture_C::ExecuteUbergraph_PlaySequenceTrigger_VanessaCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C.ExecuteUbergraph_PlaySequenceTrigger_VanessaCapture");
		
		APlaySequenceTrigger_VanessaCapture_C_ExecuteUbergraph_PlaySequenceTrigger_VanessaCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaySequenceTrigger_VanessaCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaySequenceTrigger_VanessaCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C");
		return ptr;
	}

}


