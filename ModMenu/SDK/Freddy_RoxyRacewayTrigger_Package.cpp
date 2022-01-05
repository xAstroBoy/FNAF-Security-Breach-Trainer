/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Freddy_RoxyRacewayTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ExecuteUbergraph_Freddy_RoxyRacewayTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddy_RoxyRacewayTrigger_C::ExecuteUbergraph_Freddy_RoxyRacewayTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddy_RoxyRacewayTrigger_C.StaticClass
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


