/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BPITurnTowardsAudio_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetEndTurnTowardsEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               EndTurnTowards                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPITurnTowardsAudio_C::GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetEndTurnTowardsEvent");
		
		UBPITurnTowardsAudio_C_GetEndTurnTowardsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndTurnTowards != nullptr)
			*EndTurnTowards = params.EndTurnTowards;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetStartTurnTowardsEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               StartTurnTowards                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPITurnTowardsAudio_C::GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetStartTurnTowardsEvent");
		
		UBPITurnTowardsAudio_C_GetStartTurnTowardsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTurnTowards != nullptr)
			*StartTurnTowards = params.StartTurnTowards;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPITurnTowardsAudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPITurnTowardsAudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPITurnTowardsAudio.BPITurnTowardsAudio_C");
		return ptr;
	}

}


