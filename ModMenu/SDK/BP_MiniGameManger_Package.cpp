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
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.DestroyAllAISeeker
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::DestroyAllAISeeker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.DestroyAllAISeeker");
		
		ABP_MiniGameManger_C_DestroyAllAISeeker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestSkip
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::PlayerRequestSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestSkip");
		
		ABP_MiniGameManger_C_PlayerRequestSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.On Skip
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::OnSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.On Skip");
		
		ABP_MiniGameManger_C_OnSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.AwardItemToPlayer
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::AwardItemToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.AwardItemToPlayer");
		
		ABP_MiniGameManger_C_AwardItemToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.GetIsGameActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MiniGameManger_C::GetIsGameActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.GetIsGameActive");
		
		ABP_MiniGameManger_C_GetIsGameActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanEndGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MiniGameManger_C::PlayerCanEndGame(E_EndMiniGameType EndType, bool* CanEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanEndGame");
		
		ABP_MiniGameManger_C_PlayerCanEndGame_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEnd != nullptr)
			*CanEnd = params.CanEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanStartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECantStartMinigameReason                           reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_MiniGameManger_C::PlayerCanStartGame(ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanStartGame");
		
		ABP_MiniGameManger_C_PlayerCanStartGame_Params params {};
		
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
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::PlayerRequestEnd(E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestEnd");
		
		ABP_MiniGameManger_C_PlayerRequestEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Started                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECantStartMinigameReason                           reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::PlayerRequestStart(bool ForceStart, bool* Started, ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestStart");
		
		ABP_MiniGameManger_C_PlayerRequestStart_Params params {};
		params.ForceStart = ForceStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Started != nullptr)
			*Started = params.Started;
		if (reason != nullptr)
			*reason = params.reason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::OnEnd(E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.OnEnd");
		
		ABP_MiniGameManger_C_OnEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.On Start
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.On Start");
		
		ABP_MiniGameManger_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.Handle Misc
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::HandleMisc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.Handle Misc");
		
		ABP_MiniGameManger_C_HandleMisc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandlePlayer
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::HandlePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.HandlePlayer");
		
		ABP_MiniGameManger_C_HandlePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandleComponents
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::HandleComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.HandleComponents");
		
		ABP_MiniGameManger_C_HandleComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandleAI
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::HandleAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.HandleAI");
		
		ABP_MiniGameManger_C_HandleAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveTick");
		
		ABP_MiniGameManger_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveBeginPlay");
		
		ABP_MiniGameManger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.QuitToMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::QuitToMainMenu(E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.QuitToMainMenu");
		
		ABP_MiniGameManger_C_QuitToMainMenu_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ExecuteUbergraph_BP_MiniGameManger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::ExecuteUbergraph_BP_MiniGameManger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.ExecuteUbergraph_BP_MiniGameManger");
		
		ABP_MiniGameManger_C_ExecuteUbergraph_BP_MiniGameManger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::OnGameEnd__DelegateSignature(E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameEnd__DelegateSignature");
		
		ABP_MiniGameManger_C_OnGameEnd__DelegateSignature_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_MiniGameManger_C::OnGameStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameStart__DelegateSignature");
		
		ABP_MiniGameManger_C_OnGameStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MiniGameManger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MiniGameManger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameManger.BP_MiniGameManger_C");
		return ptr;
	}

}


