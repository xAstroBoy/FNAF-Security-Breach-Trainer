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
//		Name   -> Function MontyGolfHallwayTrigger.MontyGolfHallwayTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMontyGolfHallwayTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyGolfHallwayTrigger.MontyGolfHallwayTrigger_C.OnTriggered");

	AMontyGolfHallwayTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyGolfHallwayTrigger.MontyGolfHallwayTrigger_C.ExecuteUbergraph_MontyGolfHallwayTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyGolfHallwayTrigger_C::ExecuteUbergraph_MontyGolfHallwayTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyGolfHallwayTrigger.MontyGolfHallwayTrigger_C.ExecuteUbergraph_MontyGolfHallwayTrigger");

	AMontyGolfHallwayTrigger_C_ExecuteUbergraph_MontyGolfHallwayTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
