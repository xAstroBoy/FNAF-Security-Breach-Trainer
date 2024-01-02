/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.GetUnplayedAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FElevatorAudioOption>                AvailableLines                                             (Parm, OutParm)
	 */
	void UC_Elevator_Audio_C::GetUnplayedAudio(TArray<struct FElevatorAudioOption>* AvailableLines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.GetUnplayedAudio");
		
		UC_Elevator_Audio_C_GetUnplayedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableLines != nullptr)
			*AvailableLines = params.AvailableLines;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.GetAudioToPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FElevatorAudioOption                        Output                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UC_Elevator_Audio_C::GetAudioToPlay(struct FElevatorAudioOption* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.GetAudioToPlay");
		
		UC_Elevator_Audio_C_GetAudioToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_Elevator_Audio_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.ReceiveTick");
		
		UC_Elevator_Audio_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.PlayElevatorAudio
	 * 		Flags  -> ()
	 */
	void UC_Elevator_Audio_C::PlayElevatorAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.PlayElevatorAudio");
		
		UC_Elevator_Audio_C_PlayElevatorAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.BeginElevatorAudio
	 * 		Flags  -> ()
	 */
	void UC_Elevator_Audio_C::BeginElevatorAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.BeginElevatorAudio");
		
		UC_Elevator_Audio_C_BeginElevatorAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.ExecuteUbergraph_C_Elevator_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_Elevator_Audio_C::ExecuteUbergraph_C_Elevator_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.ExecuteUbergraph_C_Elevator_Audio");
		
		UC_Elevator_Audio_C_ExecuteUbergraph_C_Elevator_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_Elevator_Audio.C_Elevator_Audio_C.PlayAudioEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FElevatorAudioData>                  AudiotoPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UC_Elevator_Audio_C::PlayAudioEvent__DelegateSignature(TArray<struct FElevatorAudioData>* AudiotoPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Elevator_Audio.C_Elevator_Audio_C.PlayAudioEvent__DelegateSignature");
		
		UC_Elevator_Audio_C_PlayAudioEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudiotoPlay != nullptr)
			*AudiotoPlay = params.AudiotoPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UC_Elevator_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_Elevator_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_Elevator_Audio.C_Elevator_Audio_C");
		return ptr;
	}

}


