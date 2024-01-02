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
	 * Function PlayerHUD.PlayerHUD_C.GetInteractViewLocation
	 */
	struct UPlayerHUD_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FY9T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles
	 */
	struct UPlayerHUD_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetHUDInstruction
	 */
	struct UPlayerHUD_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetInteractibleType
	 */
	struct UPlayerHUD_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CanPlayerInteract
	 */
	struct UPlayerHUD_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8I9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.UpdateUIOnTick
	 */
	struct UPlayerHUD_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetInstructionOverride
	 */
	struct UPlayerHUD_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.InteractIgnoresTrace
	 */
	struct UPlayerHUD_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SequenceEvent__ENTRYPOINTPlayerHUD_1
	 */
	struct UPlayerHUD_C_SequenceEvent__ENTRYPOINTPlayerHUD_1_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions
	 */
	struct UPlayerHUD_C_CheckPlayerPawnRestrictions_Params
	{
	public:
		TArray<EPlayerPawnType>                                    TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Result;                                                  // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ResetProgressWheel
	 */
	struct UPlayerHUD_C_ResetProgressWheel_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get Stamina Percent
	 */
	struct UPlayerHUD_C_GetStaminaPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BPZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName
	 */
	struct UPlayerHUD_C_GetItemOrMessageName_Params
	{
	public:
		class FName                                                InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ItemDisplayName;                                         // 0x0008(0x0018)  (Parm, OutParm)
		class UTexture2D*                                          ItemDisplayIcon;                                         // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8E21833B77
	 */
	struct UPlayerHUD_C_OnFailure_15B15A4D4874B9BBFB090A8E21833B77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8E21833B77
	 */
	struct UPlayerHUD_C_OnSuccess_15B15A4D4874B9BBFB090A8E21833B77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7
	 */
	struct UPlayerHUD_C_Finished_150D8164404ADE44D3D17D8F55A7B8A7_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3C52D074E
	 */
	struct UPlayerHUD_C_OnFailure_868BB5014224F3E09C1895B3C52D074E_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3C52D074E
	 */
	struct UPlayerHUD_C_OnSuccess_868BB5014224F3E09C1895B3C52D074E_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975
	 */
	struct UPlayerHUD_C_Finished_DB237C8C45C17E7AA2665584748A4975_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8EB394CA85
	 */
	struct UPlayerHUD_C_OnFailure_15B15A4D4874B9BBFB090A8EB394CA85_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85
	 */
	struct UPlayerHUD_C_OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3573AF6BC
	 */
	struct UPlayerHUD_C_OnFailure_868BB5014224F3E09C1895B3573AF6BC_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3573AF6BC
	 */
	struct UPlayerHUD_C_OnSuccess_868BB5014224F3E09C1895B3573AF6BC_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6
	 */
	struct UPlayerHUD_C_OnFailure_BF721F5A4230E920D7AB0496A5DE48C6_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6
	 */
	struct UPlayerHUD_C_OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_AB03661843CC503A6CB2D5BF99086A7C
	 */
	struct UPlayerHUD_C_OnFailure_AB03661843CC503A6CB2D5BF99086A7C_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_AB03661843CC503A6CB2D5BF99086A7C
	 */
	struct UPlayerHUD_C_OnSuccess_AB03661843CC503A6CB2D5BF99086A7C_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_185BD7B94C5005FD6F01E39AB745E86F
	 */
	struct UPlayerHUD_C_Finished_185BD7B94C5005FD6F01E39AB745E86F_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D
	 */
	struct UPlayerHUD_C_Finished_10D10B594F13742D8823F39890BDEC3D_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6
	 */
	struct UPlayerHUD_C_Finished_7533C45845F3B117AD0CED818D58DFA6_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Construct
	 */
	struct UPlayerHUD_C_Construct_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Tick
	 */
	struct UPlayerHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.AllowShortcutCommand
	 */
	struct UPlayerHUD_C_AllowShortcutCommand_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnPlayerHoverExit
	 */
	struct UPlayerHUD_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnPlayerHoverEnter
	 */
	struct UPlayerHUD_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Update
	 */
	struct UPlayerHUD_C_Update_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasRtx;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Has2080;                                                 // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Interactible Display
	 */
	struct UPlayerHUD_C_SetupInteractibleDisplay_Params
	{
	public:
		class UObject*                                             Interactible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Collected Display
	 */
	struct UPlayerHUD_C_SetupCollectedDisplay_Params
	{
	public:
		class FName                                                CollectedItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Information Anim Finished
	 */
	struct UPlayerHUD_C_OnInformationAnimFinished_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Update Hold Progress
	 */
	struct UPlayerHUD_C_UpdateHoldProgress_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress
	 */
	struct UPlayerHUD_C_CancelHoldProgress_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Complete Hold Progress
	 */
	struct UPlayerHUD_C_CompleteHoldProgress_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Init Hold Progress
	 */
	struct UPlayerHUD_C_InitHoldProgress_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Security Level Updated
	 */
	struct UPlayerHUD_C_OnSecurityLevelUpdated_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Party Level Updated
	 */
	struct UPlayerHUD_C_OnPartyLevelUpdated_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Party Pass Used
	 */
	struct UPlayerHUD_C_OnPartyPassUsed_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Begin Save
	 */
	struct UPlayerHUD_C_OnBeginSave_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On End Save
	 */
	struct UPlayerHUD_C_OnEndSave_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed
	 */
	struct UPlayerHUD_C_OnTrailerModeChanged_Params
	{
	public:
		bool                                                       TrailerEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Hide Objective List
	 */
	struct UPlayerHUD_C_HideObjectiveList_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Set Skip Info
	 */
	struct UPlayerHUD_C_SetSkipInfo_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SetRechargeStationText
	 */
	struct UPlayerHUD_C_SetRechargeStationText_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Item Collected
	 */
	struct UPlayerHUD_C_OnItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Requirement Display
	 */
	struct UPlayerHUD_C_SetupRequirementDisplay_Params
	{
	public:
		EConditionFailReason                                       Requirements;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLPO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Stop Requirement Display
	 */
	struct UPlayerHUD_C_StopRequirementDisplay_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Set Informational Message
	 */
	struct UPlayerHUD_C_SetInformationalMessage_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Hide Informational Message
	 */
	struct UPlayerHUD_C_HideInformationalMessage_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Stamina Depleted
	 */
	struct UPlayerHUD_C_OnStaminaDepleted_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Stamina Replenished
	 */
	struct UPlayerHUD_C_OnStaminaReplenished_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ShowInstructions
	 */
	struct UPlayerHUD_C_ShowInstructions_Params
	{
	public:
		E_InstructionCard_Type                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.HideInstructions
	 */
	struct UPlayerHUD_C_HideInstructions_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim
	 */
	struct UPlayerHUD_C_PlayInstructionCardAnim_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Objective Display
	 */
	struct UPlayerHUD_C_SetupObjectiveDisplay_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Stop Objective Display
	 */
	struct UPlayerHUD_C_StopObjectiveDisplay_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay
	 */
	struct UPlayerHUD_C_ShowCollectedItemDisplay_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected
	 */
	struct UPlayerHUD_C_DebugStopShowingItemsCollected_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.MoveMissionHUD
	 */
	struct UPlayerHUD_C_MoveMissionHUD_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnPlayerInteract
	 */
	struct UPlayerHUD_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnPlayerInteractCancel
	 */
	struct UPlayerHUD_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.HideRequirementPanel
	 */
	struct UPlayerHUD_C_HideRequirementPanel_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.BeginSkipFade
	 */
	struct UPlayerHUD_C_BeginSkipFade_Params
	{
	public:
		float                                                      DelayDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ShowSkip
	 */
	struct UPlayerHUD_C_ShowSkip_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD
	 */
	struct UPlayerHUD_C_ExecuteUbergraph_PlayerHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
