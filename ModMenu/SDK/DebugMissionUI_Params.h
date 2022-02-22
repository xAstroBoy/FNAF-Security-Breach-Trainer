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
	 * Function DebugMissionUI.DebugMissionUI_C.DoHourSkip
	 */
	struct UDebugMissionUI_C_DoHourSkip_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.OnMissionTeleportFinished
	 */
	struct UDebugMissionUI_C_OnMissionTeleportFinished_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.TeleportPlayerToLocation
	 */
	struct UDebugMissionUI_C_TeleportPlayerToLocation_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.EjectFromFreddy
	 */
	struct UDebugMissionUI_C_EjectFromFreddy_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.SkipIntro
	 */
	struct UDebugMissionUI_C_SkipIntro_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy
	 */
	struct UDebugMissionUI_C_Spawn_Or_Teleport_Freddy_Params
	{
	public:
		struct FTransform                                          Destination;                                             // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       SickFreddy;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AFreddy_C*                                           Freddy;                                                  // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.SetUpTaskActivateStates
	 */
	struct UDebugMissionUI_C_SetUpTaskActivateStates_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.AwardTaskItems
	 */
	struct UDebugMissionUI_C_AwardTaskItems_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.CompleteMissionTask
	 */
	struct UDebugMissionUI_C_CompleteMissionTask_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InfoState;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.UpdateDependentMissions
	 */
	struct UDebugMissionUI_C_UpdateDependentMissions_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        TasksUpdated;                                            // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.AwardItems
	 */
	struct UDebugMissionUI_C_AwardItems_Params
	{
	public:
		TArray<class FName>                                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.OnBP_OnGetItemChildren_1
	 */
	struct UDebugMissionUI_C_OnBP_OnGetItemChildren_1_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UObject*>                                     Children;                                                // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.PreConstruct
	 */
	struct UDebugMissionUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.On State Changed
	 */
	struct UDebugMissionUI_C_On_State_Changed_Params
	{
	public:
		fnaf9_EFNAFGameState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		fnaf9_EFNAFGameState                                       PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature_Params
	{
	public:
		DbgPlayerPaths_EDbgPlayerPaths                             NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature_Params
	{
	public:
		DbgPlayerPaths_EDbgPlayerPaths                             NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.ExecuteUbergraph_DebugMissionUI
	 */
	struct UDebugMissionUI_C_ExecuteUbergraph_DebugMissionUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
