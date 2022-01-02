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
//		Name   -> Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGatorGolfOfficeTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.ReceiveBeginPlay");

	AGatorGolfOfficeTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGatorGolfOfficeTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.OnTriggered");

	AGatorGolfOfficeTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.On Badge Collected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorGolfOfficeTrigger_C::On_Badge_Collected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.On Badge Collected");

	AGatorGolfOfficeTrigger_C_On_Badge_Collected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.StartAlarm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorGolfOfficeTrigger_C::StartAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.StartAlarm");

	AGatorGolfOfficeTrigger_C_StartAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.ExecuteUbergraph_GatorGolfOfficeTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorGolfOfficeTrigger_C::ExecuteUbergraph_GatorGolfOfficeTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C.ExecuteUbergraph_GatorGolfOfficeTrigger");

	AGatorGolfOfficeTrigger_C_ExecuteUbergraph_GatorGolfOfficeTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
