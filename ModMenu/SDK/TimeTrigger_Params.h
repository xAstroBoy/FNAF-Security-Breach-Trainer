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
	 * Function TimeTrigger.TimeTrigger_C.Start Timer
	 */
	struct UTimeTrigger_C_StartTimer_Params
	{
	public:
		int32_t                                                    CurrentTimeHour;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentTimeMinute;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TimerEndHour;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TimerEndMinute;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      TimerEndEvent;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		bool                                                       DoNotDespawnAI;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UTKW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.Handle Minute Check
	 */
	struct UTimeTrigger_C_HandleMinuteCheck_Params
	{
	public:
		int32_t                                                    CurrentMinute;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.ReceiveBeginPlay
	 */
	struct UTimeTrigger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.On Timer Started
	 */
	struct UTimeTrigger_C_OnTimerStarted_Params
	{	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed
	 */
	struct UTimeTrigger_C_OnGameClockTImeHasChanged_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.On Clock State Changed
	 */
	struct UTimeTrigger_C_OnClockStateChanged_Params
	{
	public:
		bool                                                       bIsRunning;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.ExecuteUbergraph_TimeTrigger
	 */
	struct UTimeTrigger_C_ExecuteUbergraph_TimeTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimeTrigger.TimeTrigger_C.TimerInvoked__DelegateSignature
	 */
	struct UTimeTrigger_C_TimerInvoked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
