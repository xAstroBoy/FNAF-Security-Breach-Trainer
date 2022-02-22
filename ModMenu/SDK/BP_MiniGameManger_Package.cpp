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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.DestroyAllAISeeker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestSkip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.On Skip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiniGameManger_C::On_Skip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.On Skip");
		
		ABP_MiniGameManger_C_On_Skip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.AwardItemToPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.GetIsGameActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Active_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MiniGameManger_C::GetIsGameActive(bool* Active_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.GetIsGameActive");
		
		ABP_MiniGameManger_C_GetIsGameActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active_ != nullptr)
			*Active_ = params.Active_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanEndGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MiniGameManger_C::PlayerCanEndGame(E_EndMiniGameType_E_EndMiniGameType EndType, bool* CanEnd)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanStartGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_MiniGameManger_C::PlayerCanStartGame(fnaf9_ECantStartMinigameReason* reason)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::PlayerRequestEnd(E_EndMiniGameType_E_EndMiniGameType EndType)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestStart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Started                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::PlayerRequestStart(bool ForceStart, bool* Started, fnaf9_ECantStartMinigameReason* reason)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnEnd
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.On Start
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiniGameManger_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.On Start");
		
		ABP_MiniGameManger_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.Handle Misc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiniGameManger_C::Handle_Misc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.Handle Misc");
		
		ABP_MiniGameManger_C_Handle_Misc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandlePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandleComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.HandleAI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.QuitToMainMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                End_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::QuitToMainMenu(E_EndMiniGameType_E_EndMiniGameType End_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.QuitToMainMenu");
		
		ABP_MiniGameManger_C_QuitToMainMenu_Params params {};
		params.End_Type = End_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.GregoryKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiniGameManger_C::GregoryKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniGameManger.BP_MiniGameManger_C.GregoryKilled");
		
		ABP_MiniGameManger_C_GregoryKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.ExecuteUbergraph_BP_MiniGameManger
	 * 		Flags  -> (Final)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniGameManger_C::OnGameEnd__DelegateSignature(E_EndMiniGameType_E_EndMiniGameType EndType)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MiniGameManger_C.StaticClass
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


