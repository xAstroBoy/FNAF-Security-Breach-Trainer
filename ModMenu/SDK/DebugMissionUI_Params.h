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
	 * Function DebugMissionUI.DebugMissionUI_C.DoHourSkip
	 */
	struct UDebugMissionUI_C_DoHourSkip_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.OnMissionTeleportFinished
	 */
	struct UDebugMissionUI_C_OnMissionTeleportFinished_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.TeleportPlayerToLocation
	 */
	struct UDebugMissionUI_C_TeleportPlayerToLocation_Params
	{
	public:
		unsigned char                                              UnknownData_HJMX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.EjectFromFreddy
	 */
	struct UDebugMissionUI_C_EjectFromFreddy_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.SkipIntro
	 */
	struct UDebugMissionUI_C_SkipIntro_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy
	 */
	struct UDebugMissionUI_C_SpawnOrTeleportFreddy_Params
	{
	public:
		struct FTransform                                          Destination;                                             // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       SickFreddy;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N0OO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		unsigned char                                              UnknownData_KFTB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.UpdateDependentMissions
	 */
	struct UDebugMissionUI_C_UpdateDependentMissions_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        TasksUpdated;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.AwardItems
	 */
	struct UDebugMissionUI_C_AwardItems_Params
	{
	public:
		TArray<class FName>                                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.OnBP_OnGetItemChildren_1
	 */
	struct UDebugMissionUI_C_OnBP_OnGetItemChildren_1_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UObject*>                                     Children;                                                // 0x0008(0x0010)  (Parm, OutParm)
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
	 * Function DebugMissionUI.DebugMissionUI_C.On State Changed
	 */
	struct UDebugMissionUI_C_OnStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFGameState                                             PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature_Params
	{
	public:
		EDbgPlayerPaths                                            NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature_Params
	{
	public:
		EDbgPlayerPaths                                            NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UDebugMissionUI_C_BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{	};

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
