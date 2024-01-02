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
	 * Function FazcamChargeUI.FazcamChargeUI_C.SequenceEvent__ENTRYPOINTFazcamChargeUI_1
	 */
	struct UFazcamChargeUI_C_SequenceEvent__ENTRYPOINTFazcamChargeUI_1_Params
	{	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.GetFillMeterDelayOffset
	 */
	struct UFazcamChargeUI_C_GetFillMeterDelayOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.Finished_EEC50D0B406493E297CED0B1A9538C1B
	 */
	struct UFazcamChargeUI_C_Finished_EEC50D0B406493E297CED0B1A9538C1B_Params
	{	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.Recharge
	 */
	struct UFazcamChargeUI_C_Recharge_Params
	{	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.CameraFlashed
	 */
	struct UFazcamChargeUI_C_CameraFlashed_Params
	{
	public:
		float                                                      RechargeTime;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.PlayRechargeSFX
	 */
	struct UFazcamChargeUI_C_PlayRechargeSFX_Params
	{	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.CustomEvent
	 */
	struct UFazcamChargeUI_C_CustomEvent_Params
	{	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.ExecuteUbergraph_FazcamChargeUI
	 */
	struct UFazcamChargeUI_C_ExecuteUbergraph_FazcamChargeUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9248[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FazcamChargeUI.FazcamChargeUI_C.RechargeDone__DelegateSignature
	 */
	struct UFazcamChargeUI_C_RechargeDone__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
