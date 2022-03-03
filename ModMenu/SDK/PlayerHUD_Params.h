#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles
	 */
	struct UPlayerHUD_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CanPlayerInteract
	 */
	struct UPlayerHUD_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	 * Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions
	 */
	struct UPlayerHUD_C_CheckPlayerPawnRestrictions_Params
	{
	public:
		TArray<fnaf9_EPlayerPawnType>                              TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0010(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ResetProgressWheel
	 */
	struct UPlayerHUD_C_ResetProgressWheel_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get Stamina Percent
	 */
	struct UPlayerHUD_C_Get_Stamina_Percent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName
	 */
	struct UPlayerHUD_C_GetItemOrMessageName_Params
	{
	public:
		class FName                                                InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ItemDisplayName;                                         // 0x0008(0x0018)  (Parm, OutParm)
		class UTexture2D*                                          Item_Display_Icon;                                       // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7
	 */
	struct UPlayerHUD_C_Finished_150D8164404ADE44D3D17D8F55A7B8A7_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975
	 */
	struct UPlayerHUD_C_Finished_DB237C8C45C17E7AA2665584748A4975_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6
	 */
	struct UPlayerHUD_C_OnFailure_BF721F5A4230E920D7AB0496A5DE48C6_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6
	 */
	struct UPlayerHUD_C_OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6_Params
	{
	};

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
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D
	 */
	struct UPlayerHUD_C_OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D
	 */
	struct UPlayerHUD_C_OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnFailure_B754F15B4449FCC342E9AAB708667094
	 */
	struct UPlayerHUD_C_OnFailure_B754F15B4449FCC342E9AAB708667094_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.OnSuccess_B754F15B4449FCC342E9AAB708667094
	 */
	struct UPlayerHUD_C_OnSuccess_B754F15B4449FCC342E9AAB708667094_Params
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
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D
	 */
	struct UPlayerHUD_C_Finished_10D10B594F13742D8823F39890BDEC3D_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6
	 */
	struct UPlayerHUD_C_Finished_7533C45845F3B117AD0CED818D58DFA6_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Information Anim Finished
	 */
	struct UPlayerHUD_C_On_Information_Anim_Finished_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Update Hold Progress
	 */
	struct UPlayerHUD_C_Update_Hold_Progress_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress
	 */
	struct UPlayerHUD_C_Cancel_Hold_Progress_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Complete Hold Progress
	 */
	struct UPlayerHUD_C_Complete_Hold_Progress_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Init Hold Progress
	 */
	struct UPlayerHUD_C_Init_Hold_Progress_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Security Level Updated
	 */
	struct UPlayerHUD_C_On_Security_Level_Updated_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	 * Function PlayerHUD.PlayerHUD_C.On Party Level Updated
	 */
	struct UPlayerHUD_C_On_Party_Level_Updated_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Collected Display
	 */
	struct UPlayerHUD_C_Setup_Collected_Display_Params
	{
	public:
		class FName                                                CollectedItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Party Pass Used
	 */
	struct UPlayerHUD_C_On_Party_Pass_Used_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Begin Save
	 */
	struct UPlayerHUD_C_On_Begin_Save_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On End Save
	 */
	struct UPlayerHUD_C_On_End_Save_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed
	 */
	struct UPlayerHUD_C_On_Trailer_Mode_Changed_Params
	{
	public:
		bool                                                       TrailerEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Hide Objective List
	 */
	struct UPlayerHUD_C_Hide_Objective_List_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Set Skip Info
	 */
	struct UPlayerHUD_C_Set_Skip_Info_Params
	{
	};

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
	struct UPlayerHUD_C_On_Item_Collected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Requirement Display
	 */
	struct UPlayerHUD_C_Setup_Requirement_Display_Params
	{
	public:
		fnaf9_EConditionFailReason                                 Requirements;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Stop Requirement Display
	 */
	struct UPlayerHUD_C_Stop_Requirement_Display_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Set Informational Message
	 */
	struct UPlayerHUD_C_Set_Informational_Message_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Hide Informational Message
	 */
	struct UPlayerHUD_C_Hide_Informational_Message_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Stamina Depleted
	 */
	struct UPlayerHUD_C_On_Stamina_Depleted_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.On Stamina Replenished
	 */
	struct UPlayerHUD_C_On_Stamina_Replenished_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ShowInstructions
	 */
	struct UPlayerHUD_C_ShowInstructions_Params
	{
	public:
		E_InstructionCard_Type_E_InstructionCard_Type              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.HideInstructions
	 */
	struct UPlayerHUD_C_HideInstructions_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim
	 */
	struct UPlayerHUD_C_PlayInstructionCardAnim_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Objective Display
	 */
	struct UPlayerHUD_C_Setup_Objective_Display_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Stop Objective Display
	 */
	struct UPlayerHUD_C_Stop_Objective_Display_Params
	{
	};

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
	 * Function PlayerHUD.PlayerHUD_C.Construct
	 */
	struct UPlayerHUD_C_Construct_Params
	{
	};

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
	 * Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay
	 */
	struct UPlayerHUD_C_ShowCollectedItemDisplay_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected
	 */
	struct UPlayerHUD_C_DebugStopShowingItemsCollected_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.MoveMissionHUD
	 */
	struct UPlayerHUD_C_MoveMissionHUD_Params
	{
	};

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
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.HideRequirementPanel
	 */
	struct UPlayerHUD_C_HideRequirementPanel_Params
	{
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Setup Interactible Display
	 */
	struct UPlayerHUD_C_Setup_Interactible_Display_Params
	{
	public:
		class UObject*                                             Interactible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

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
