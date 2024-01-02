#pragma once

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
	 * Function OGM_BackStage.OGM_BackStage_C.On Skip
	 */
	struct AOGM_BackStage_C_OnSkip_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Get Vanny Timer Max
	 */
	struct AOGM_BackStage_C_GetVannyTimerMax_Params
	{
	public:
		float                                                      VannyTimerMax;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.GetPercentRemainingUntilVannyKillSequence
	 */
	struct AOGM_BackStage_C_GetPercentRemainingUntilVannyKillSequence_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.PlayerCanStartGame
	 */
	struct AOGM_BackStage_C_PlayerCanStartGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		ECantStartMinigameReason                                   reason;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MRRL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.OnEnd
	 */
	struct AOGM_BackStage_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_88LK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.OnPlayerExitVent
	 */
	struct AOGM_BackStage_C_OnPlayerExitVent_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.On Freddy Reach
	 */
	struct AOGM_BackStage_C_OnFreddyReach_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.ShuffleScreens
	 */
	struct AOGM_BackStage_C_ShuffleScreens_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.On Start
	 */
	struct AOGM_BackStage_C_OnStart_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.ReceiveBeginPlay
	 */
	struct AOGM_BackStage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderOpened
	 */
	struct AOGM_BackStage_C_OnBadgeHolderOpened_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.After Intro Overscreen Sequence
	 */
	struct AOGM_BackStage_C_AfterIntroOverscreenSequence_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Freddy Reaches Vent
	 */
	struct AOGM_BackStage_C_FreddyReachesVent_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Gregory Exit Vent
	 */
	struct AOGM_BackStage_C_GregoryExitVent_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Drain Power Door
	 */
	struct AOGM_BackStage_C_DrainPowerDoor_Params
	{
	public:
		float                                                      AmountToDrain;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.OnBadgeHolderInteract
	 */
	struct AOGM_BackStage_C_OnBadgeHolderInteract_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.ReceiveTick
	 */
	struct AOGM_BackStage_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.SpawnRoxyAndMonty
	 */
	struct AOGM_BackStage_C_SpawnRoxyAndMonty_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Freddy Remove Vent
	 */
	struct AOGM_BackStage_C_FreddyRemoveVent_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Load and Play Video
	 */
	struct AOGM_BackStage_C_LoadandPlayVideo_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Play Video
	 */
	struct AOGM_BackStage_C_PlayVideo_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.StreamLevels
	 */
	struct AOGM_BackStage_C_StreamLevels_Params
	{	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.Drain Power Room
	 */
	struct AOGM_BackStage_C_DrainPowerRoom_Params
	{
	public:
		float                                                      AmounttoDrain;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_BackStage.OGM_BackStage_C.ExecuteUbergraph_OGM_BackStage
	 */
	struct AOGM_BackStage_C_ExecuteUbergraph_OGM_BackStage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
