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
//		Name   -> Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ReceiveExecute
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicaBehindPlayerBreathing_End_Task_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ReceiveExecute");

	UChicaBehindPlayerBreathing_End_Task_C_ReceiveExecute_Params params {};
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicaBehindPlayerBreathing_End_Task_C::ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task");

	UChicaBehindPlayerBreathing_End_Task_C_ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
