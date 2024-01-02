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
	 * Function RotationThreshold.RotationThreshold_C.Start
	 */
	struct URotationThreshold_C_Start_Params
	{	};

	/**
	 * Function RotationThreshold.RotationThreshold_C.ReceiveTick
	 */
	struct URotationThreshold_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RotationThreshold.RotationThreshold_C.Stop
	 */
	struct URotationThreshold_C_Stop_Params
	{	};

	/**
	 * Function RotationThreshold.RotationThreshold_C.ExecuteUbergraph_RotationThreshold
	 */
	struct URotationThreshold_C_ExecuteUbergraph_RotationThreshold_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RotationThreshold.RotationThreshold_C.OnRotationThresholdReached__DelegateSignature
	 */
	struct URotationThreshold_C_OnRotationThresholdReached__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
