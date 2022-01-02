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
//		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UUpdateMissionOnActivated_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ReceiveBeginPlay");

	UUpdateMissionOnActivated_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.On Activatable Activated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUpdateMissionOnActivated_C::On_Activatable_Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.On Activatable Activated");

	UUpdateMissionOnActivated_C_On_Activatable_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ExecuteUbergraph_UpdateMissionOnActivated
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpdateMissionOnActivated_C::ExecuteUbergraph_UpdateMissionOnActivated(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ExecuteUbergraph_UpdateMissionOnActivated");

	UUpdateMissionOnActivated_C_ExecuteUbergraph_UpdateMissionOnActivated_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
