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
//		Name   -> Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetEndTurnTowardsEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               EndTurnTowards                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPITurnTowardsAudio_C::GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetEndTurnTowardsEvent");

	UBPITurnTowardsAudio_C_GetEndTurnTowardsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndTurnTowards != nullptr)
		*EndTurnTowards = params.EndTurnTowards;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetStartTurnTowardsEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               StartTurnTowards                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPITurnTowardsAudio_C::GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetStartTurnTowardsEvent");

	UBPITurnTowardsAudio_C_GetStartTurnTowardsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartTurnTowards != nullptr)
		*StartTurnTowards = params.StartTurnTowards;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
