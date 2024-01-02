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
	 * Function TensionControl.TensionControl_C.GetDistVal
	 */
	struct ATensionControl_C_GetDistVal_Params
	{
	public:
		TArray<struct FAIDistanceResult>                           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Dimension1;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1JHV[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NavDistance;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JL4T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TensionControl.TensionControl_C.ReceiveBeginPlay
	 */
	struct ATensionControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TensionControl.TensionControl_C.ReceiveTick
	 */
	struct ATensionControl_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TensionControl.TensionControl_C.PlayStaffBotAlarmMusic
	 */
	struct ATensionControl_C_PlayStaffBotAlarmMusic_Params
	{	};

	/**
	 * Function TensionControl.TensionControl_C.StaffbotMusicTimerExpired
	 */
	struct ATensionControl_C_StaffbotMusicTimerExpired_Params
	{	};

	/**
	 * Function TensionControl.TensionControl_C.StopStaffbotMusic
	 */
	struct ATensionControl_C_StopStaffbotMusic_Params
	{	};

	/**
	 * Function TensionControl.TensionControl_C.ResetSeenTime
	 */
	struct ATensionControl_C_ResetSeenTime_Params
	{	};

	/**
	 * Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControl
	 */
	struct ATensionControl_C_ExecuteUbergraph_TensionControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KVGM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
