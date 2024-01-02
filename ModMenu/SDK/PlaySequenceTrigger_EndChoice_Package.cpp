/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.PlaySequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlaySequenceTrigger_EndChoice_C::PlaySequence(bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.PlaySequence");
		
		APlaySequenceTrigger_EndChoice_C_PlaySequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.FireEscapeConditionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasMetConditions                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlaySequenceTrigger_EndChoice_C::FireEscapeConditionCheck(bool* HasMetConditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.FireEscapeConditionCheck");
		
		APlaySequenceTrigger_EndChoice_C_FireEscapeConditionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasMetConditions != nullptr)
			*HasMetConditions = params.HasMetConditions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_A1CEA053484729074DE2FC8418AB6D01
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnFailure_A1CEA053484729074DE2FC8418AB6D01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_A1CEA053484729074DE2FC8418AB6D01");
		
		APlaySequenceTrigger_EndChoice_C_OnFailure_A1CEA053484729074DE2FC8418AB6D01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_A1CEA053484729074DE2FC8418AB6D01
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnSuccess_A1CEA053484729074DE2FC8418AB6D01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_A1CEA053484729074DE2FC8418AB6D01");
		
		APlaySequenceTrigger_EndChoice_C_OnSuccess_A1CEA053484729074DE2FC8418AB6D01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_7F2250294461044CDA36CD9C7D00F0D9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_EndChoice_C::OnFailure_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_7F2250294461044CDA36CD9C7D00F0D9");
		
		APlaySequenceTrigger_EndChoice_C_OnFailure_7F2250294461044CDA36CD9C7D00F0D9_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_7F2250294461044CDA36CD9C7D00F0D9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_EndChoice_C::OnSuccess_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_7F2250294461044CDA36CD9C7D00F0D9");
		
		APlaySequenceTrigger_EndChoice_C_OnSuccess_7F2250294461044CDA36CD9C7D00F0D9_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnTriggered");
		
		APlaySequenceTrigger_EndChoice_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Sequence Stop Event
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnSequenceStopEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Sequence Stop Event");
		
		APlaySequenceTrigger_EndChoice_C_OnSequenceStopEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Staying
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::Staying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Staying");
		
		APlaySequenceTrigger_EndChoice_C_Staying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Leaving
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::Leaving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Leaving");
		
		APlaySequenceTrigger_EndChoice_C_Leaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Vanny
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::Vanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Vanny");
		
		APlaySequenceTrigger_EndChoice_C_Vanny_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Vanny Intro Stop
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnVannyIntroStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Vanny Intro Stop");
		
		APlaySequenceTrigger_EndChoice_C_OnVannyIntroStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Teleport Finished
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Teleport Finished");
		
		APlaySequenceTrigger_EndChoice_C_OnTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.HandleIAmNotMeAchievementCheck
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::HandleIAmNotMeAchievementCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.HandleIAmNotMeAchievementCheck");
		
		APlaySequenceTrigger_EndChoice_C_HandleIAmNotMeAchievementCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ReceiveBeginPlay");
		
		APlaySequenceTrigger_EndChoice_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Stay VO Finished
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::OnStayVOFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Stay VO Finished");
		
		APlaySequenceTrigger_EndChoice_C_OnStayVOFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ResetTrigger
	 * 		Flags  -> ()
	 */
	void APlaySequenceTrigger_EndChoice_C::ResetTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ResetTrigger");
		
		APlaySequenceTrigger_EndChoice_C_ResetTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ExecuteUbergraph_PlaySequenceTrigger_EndChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_EndChoice_C::ExecuteUbergraph_PlaySequenceTrigger_EndChoice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ExecuteUbergraph_PlaySequenceTrigger_EndChoice");
		
		APlaySequenceTrigger_EndChoice_C_ExecuteUbergraph_PlaySequenceTrigger_EndChoice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaySequenceTrigger_EndChoice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaySequenceTrigger_EndChoice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C");
		return ptr;
	}

}


