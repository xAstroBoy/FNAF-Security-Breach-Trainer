// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddy_RoxyRacewayTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ReceiveActorBeginOverlap");

	AFreddy_RoxyRacewayTrigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFreddy_RoxyRacewayTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.OnTriggered");

	AFreddy_RoxyRacewayTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AFreddy_RoxyRacewayTrigger_C::BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature");

	AFreddy_RoxyRacewayTrigger_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ExecuteUbergraph_Freddy_RoxyRacewayTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddy_RoxyRacewayTrigger_C::ExecuteUbergraph_Freddy_RoxyRacewayTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Freddy_RoxyRacewayTrigger.Freddy_RoxyRacewayTrigger_C.ExecuteUbergraph_Freddy_RoxyRacewayTrigger");

	AFreddy_RoxyRacewayTrigger_C_ExecuteUbergraph_Freddy_RoxyRacewayTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
