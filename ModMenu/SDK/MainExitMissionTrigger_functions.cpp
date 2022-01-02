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
//		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.CanTrigger
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AMainExitMissionTrigger_C::CanTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.CanTrigger");

	AMainExitMissionTrigger_C_CanTrigger_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainExitMissionTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.ReceiveBeginPlay");

	AMainExitMissionTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainExitMissionTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.OnTriggered");

	AMainExitMissionTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.ExecuteUbergraph_MainExitMissionTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainExitMissionTrigger_C::ExecuteUbergraph_MainExitMissionTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.ExecuteUbergraph_MainExitMissionTrigger");

	AMainExitMissionTrigger_C_ExecuteUbergraph_MainExitMissionTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
