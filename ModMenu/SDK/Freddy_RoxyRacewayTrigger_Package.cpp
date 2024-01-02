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
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddy_RoxyRacewayTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ReceiveActorBeginOverlap");
		
		AFreddy_RoxyRacewayTrigger_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AFreddy_RoxyRacewayTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.OnTriggered");
		
		AFreddy_RoxyRacewayTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AFreddy_RoxyRacewayTrigger_C::BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature");
		
		AFreddy_RoxyRacewayTrigger_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ExecuteUbergraph_Freddy_RoxyRacewayTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddy_RoxyRacewayTrigger_C::ExecuteUbergraph_Freddy_RoxyRacewayTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ExecuteUbergraph_Freddy_RoxyRacewayTrigger");
		
		AFreddy_RoxyRacewayTrigger_C_ExecuteUbergraph_Freddy_RoxyRacewayTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddy_RoxyRacewayTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddy_RoxyRacewayTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C");
		return ptr;
	}

}


