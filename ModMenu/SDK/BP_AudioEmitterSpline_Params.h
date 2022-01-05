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
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.StopEmitter
	 */
	struct ABP_AudioEmitterSpline_C_StopEmitter_Params
	{
	};

	/**
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.PlayEmitter
	 */
	struct ABP_AudioEmitterSpline_C_PlayEmitter_Params
	{
	};

	/**
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveBeginPlay
	 */
	struct ABP_AudioEmitterSpline_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveTick
	 */
	struct ABP_AudioEmitterSpline_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ToggleInRange
	 */
	struct ABP_AudioEmitterSpline_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ExecuteUbergraph_BP_AudioEmitterSpline
	 */
	struct ABP_AudioEmitterSpline_C_ExecuteUbergraph_BP_AudioEmitterSpline_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
