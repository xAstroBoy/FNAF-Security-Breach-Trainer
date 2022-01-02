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
//		Name   -> Function ElChipsEntryTime_Trigger.ElChipsEntryTime_Trigger_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElChipsEntryTime_Trigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElChipsEntryTime_Trigger.ElChipsEntryTime_Trigger_C.ReceiveActorBeginOverlap");

	AElChipsEntryTime_Trigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ElChipsEntryTime_Trigger.ElChipsEntryTime_Trigger_C.ExecuteUbergraph_ElChipsEntryTime_Trigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElChipsEntryTime_Trigger_C::ExecuteUbergraph_ElChipsEntryTime_Trigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElChipsEntryTime_Trigger.ElChipsEntryTime_Trigger_C.ExecuteUbergraph_ElChipsEntryTime_Trigger");

	AElChipsEntryTime_Trigger_C_ExecuteUbergraph_ElChipsEntryTime_Trigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
