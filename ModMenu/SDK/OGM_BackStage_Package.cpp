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
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Skip
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::OnSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Skip");
		
		AOGM_BackStage_C_OnSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Get Vanny Timer Max
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VannyTimerMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::GetVannyTimerMax(float* VannyTimerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Get Vanny Timer Max");
		
		AOGM_BackStage_C_GetVannyTimerMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VannyTimerMax != nullptr)
			*VannyTimerMax = params.VannyTimerMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.GetPercentRemainingUntilVannyKillSequence
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.PlayerCanStartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECantStartMinigameReason                           reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AOGM_BackStage_C::PlayerCanStartGame(ECantStartMinigameReason* reason)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::OnEnd(E_EndMiniGameType EndType)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnPlayerExitVent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Freddy Reach
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::OnFreddyReach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Freddy Reach");
		
		AOGM_BackStage_C_OnFreddyReach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ShuffleScreens
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.On Start
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.On Start");
		
		AOGM_BackStage_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderOpened
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.After Intro Overscreen Sequence
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::AfterIntroOverscreenSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.After Intro Overscreen Sequence");
		
		AOGM_BackStage_C_AfterIntroOverscreenSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Freddy Reaches Vent
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::FreddyReachesVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Freddy Reaches Vent");
		
		AOGM_BackStage_C_FreddyReachesVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Gregory Exit Vent
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::GregoryExitVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Gregory Exit Vent");
		
		AOGM_BackStage_C_GregoryExitVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Drain Power Door
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AmountToDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::DrainPowerDoor(float AmountToDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Drain Power Door");
		
		AOGM_BackStage_C_DrainPowerDoor_Params params {};
		params.AmountToDrain = AmountToDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderInteract
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ReceiveTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.SpawnRoxyAndMonty
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Freddy Remove Vent
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::FreddyRemoveVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Freddy Remove Vent");
		
		AOGM_BackStage_C_FreddyRemoveVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Load and Play Video
	 * 		Flags  -> ()
	 */
	void AOGM_BackStage_C::LoadandPlayVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Load and Play Video");
		
		AOGM_BackStage_C_LoadandPlayVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Play Video
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::PlayVideo(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Play Video");
		
		AOGM_BackStage_C_PlayVideo_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.StreamLevels
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.Drain Power Room
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AmounttoDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_BackStage_C::DrainPowerRoom(float AmounttoDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_BackStage.OGM_BackStage_C.Drain Power Room");
		
		AOGM_BackStage_C_DrainPowerRoom_Params params {};
		params.AmounttoDrain = AmounttoDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_BackStage.OGM_BackStage_C.ExecuteUbergraph_OGM_BackStage
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOGM_BackStage_C.StaticClass
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


