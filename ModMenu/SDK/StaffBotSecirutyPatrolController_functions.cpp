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
//		Name   -> Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaffBotSecirutyPatrolController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ReceiveBeginPlay");

	AStaffBotSecirutyPatrolController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ExecuteUbergraph_StaffBotSecirutyPatrolController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffBotSecirutyPatrolController_C::ExecuteUbergraph_StaffBotSecirutyPatrolController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ExecuteUbergraph_StaffBotSecirutyPatrolController");

	AStaffBotSecirutyPatrolController_C_ExecuteUbergraph_StaffBotSecirutyPatrolController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
