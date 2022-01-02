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
//		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaircaseRoomTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.OnTriggered");

	AStaircaseRoomTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.ExecuteUbergraph_StaircaseRoomTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaircaseRoomTrigger_C::ExecuteUbergraph_StaircaseRoomTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.ExecuteUbergraph_StaircaseRoomTrigger");

	AStaircaseRoomTrigger_C_ExecuteUbergraph_StaircaseRoomTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
