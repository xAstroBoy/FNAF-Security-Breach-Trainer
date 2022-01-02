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
//		Name   -> Function SequencerAmbienceState.SequencerAmbienceState_C.SetAmbience
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       SwitchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASequencerAmbienceState_C::SetAmbience(const struct FName& SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SequencerAmbienceState.SequencerAmbienceState_C.SetAmbience");

	ASequencerAmbienceState_C_SetAmbience_Params params {};
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SequencerAmbienceState.SequencerAmbienceState_C.SetState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASequencerAmbienceState_C::SetState(const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SequencerAmbienceState.SequencerAmbienceState_C.SetState");

	ASequencerAmbienceState_C_SetState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SequencerAmbienceState.SequencerAmbienceState_C.ExecuteUbergraph_SequencerAmbienceState
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASequencerAmbienceState_C::ExecuteUbergraph_SequencerAmbienceState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SequencerAmbienceState.SequencerAmbienceState_C.ExecuteUbergraph_SequencerAmbienceState");

	ASequencerAmbienceState_C_ExecuteUbergraph_SequencerAmbienceState_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
