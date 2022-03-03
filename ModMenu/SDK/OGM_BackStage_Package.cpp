/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Skip
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::On_Skip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Skip");
		
		AOGM_BackStage_C_On_Skip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Get Vanny Timer Max
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              VannyTimerMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::Get_Vanny_Timer_Max(float* VannyTimerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Get Vanny Timer Max");
		
		AOGM_BackStage_C_Get_Vanny_Timer_Max_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VannyTimerMax != nullptr)
			*VannyTimerMax = params.VannyTimerMax;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.GetPercentRemainingUntilVannyKillSequence
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::GetPercentRemainingUntilVannyKillSequence(float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.GetPercentRemainingUntilVannyKillSequence");
		
		AOGM_BackStage_C_GetPercentRemainingUntilVannyKillSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.PlayerCanStartGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AOGM_BackStage_C::PlayerCanStartGame(fnaf9_ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.PlayerCanStartGame");
		
		AOGM_BackStage_C_PlayerCanStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (reason != nullptr)
			*reason = params.reason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnEnd
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.OnEnd");
		
		AOGM_BackStage_C_OnEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnPlayerExitVent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::OnPlayerExitVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.OnPlayerExitVent");
		
		AOGM_BackStage_C_OnPlayerExitVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Freddy Reach
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::On_Freddy_Reach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Freddy Reach");
		
		AOGM_BackStage_C_On_Freddy_Reach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ShuffleScreens
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::ShuffleScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.ShuffleScreens");
		
		AOGM_BackStage_C_ShuffleScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Start
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Start");
		
		AOGM_BackStage_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOGM_BackStage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.ReceiveBeginPlay");
		
		AOGM_BackStage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::OnBadgeHolderOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderOpened");
		
		AOGM_BackStage_C_OnBadgeHolderOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.After Intro Overscreen Sequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::After_Intro_Overscreen_Sequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.After Intro Overscreen Sequence");
		
		AOGM_BackStage_C_After_Intro_Overscreen_Sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Freddy Reaches Vent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::Freddy_Reaches_Vent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Freddy Reaches Vent");
		
		AOGM_BackStage_C_Freddy_Reaches_Vent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Gregory Exit Vent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::Gregory_Exit_Vent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Gregory Exit Vent");
		
		AOGM_BackStage_C_Gregory_Exit_Vent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Drain Power Door
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AmountToDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::Drain_Power_Door(float AmountToDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Drain Power Door");
		
		AOGM_BackStage_C_Drain_Power_Door_Params params {};
		params.AmountToDrain = AmountToDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderInteract
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::OnBadgeHolderInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderInteract");
		
		AOGM_BackStage_C_OnBadgeHolderInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.ReceiveTick");
		
		AOGM_BackStage_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.SpawnRoxyAndMonty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::SpawnRoxyAndMonty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.SpawnRoxyAndMonty");
		
		AOGM_BackStage_C_SpawnRoxyAndMonty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Freddy Remove Vent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::Freddy_Remove_Vent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Freddy Remove Vent");
		
		AOGM_BackStage_C_Freddy_Remove_Vent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Load and Play Video
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::Load_and_Play_Video()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Load and Play Video");
		
		AOGM_BackStage_C_Load_and_Play_Video_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Play Video
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::Play_Video(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Play Video");
		
		AOGM_BackStage_C_Play_Video_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.StreamLevels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_BackStage_C::StreamLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.StreamLevels");
		
		AOGM_BackStage_C_StreamLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Drain Power Room
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount_to_Drain                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::Drain_Power_Room(float Amount_to_Drain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Drain Power Room");
		
		AOGM_BackStage_C_Drain_Power_Room_Params params {};
		params.Amount_to_Drain = Amount_to_Drain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ExecuteUbergraph_OGM_BackStage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::ExecuteUbergraph_OGM_BackStage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.ExecuteUbergraph_OGM_BackStage");
		
		AOGM_BackStage_C_ExecuteUbergraph_OGM_BackStage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOGM_BackStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOGM_BackStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OGM_BackStage.OGM_BackStage_C");
		return ptr;
	}

}


