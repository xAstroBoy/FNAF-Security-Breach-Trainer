﻿#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.DestroyAllAISeeker
	 */
	struct ABP_MiniGameManger_C_DestroyAllAISeeker_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestSkip
	 */
	struct ABP_MiniGameManger_C_PlayerRequestSkip_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.On Skip
	 */
	struct ABP_MiniGameManger_C_OnSkip_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.AwardItemToPlayer
	 */
	struct ABP_MiniGameManger_C_AwardItemToPlayer_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.GetIsGameActive
	 */
	struct ABP_MiniGameManger_C_GetIsGameActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanEndGame
	 */
	struct ABP_MiniGameManger_C_PlayerCanEndGame_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEnd;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F9YH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerCanStartGame
	 */
	struct ABP_MiniGameManger_C_PlayerCanStartGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		ECantStartMinigameReason                                   reason;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8F2J[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestEnd
	 */
	struct ABP_MiniGameManger_C_PlayerRequestEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LF04[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.PlayerRequestStart
	 */
	struct ABP_MiniGameManger_C_PlayerRequestStart_Params
	{
	public:
		bool                                                       ForceStart;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Started;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECantStartMinigameReason                                   reason;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XZNX[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.OnEnd
	 */
	struct ABP_MiniGameManger_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KAKY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.On Start
	 */
	struct ABP_MiniGameManger_C_OnStart_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.Handle Misc
	 */
	struct ABP_MiniGameManger_C_HandleMisc_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.HandlePlayer
	 */
	struct ABP_MiniGameManger_C_HandlePlayer_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.HandleComponents
	 */
	struct ABP_MiniGameManger_C_HandleComponents_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.HandleAI
	 */
	struct ABP_MiniGameManger_C_HandleAI_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveTick
	 */
	struct ABP_MiniGameManger_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.ReceiveBeginPlay
	 */
	struct ABP_MiniGameManger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.QuitToMainMenu
	 */
	struct ABP_MiniGameManger_C_QuitToMainMenu_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.ExecuteUbergraph_BP_MiniGameManger
	 */
	struct ABP_MiniGameManger_C_ExecuteUbergraph_BP_MiniGameManger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameEnd__DelegateSignature
	 */
	struct ABP_MiniGameManger_C_OnGameEnd__DelegateSignature_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGameManger.BP_MiniGameManger_C.OnGameStart__DelegateSignature
	 */
	struct ABP_MiniGameManger_C_OnGameStart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
