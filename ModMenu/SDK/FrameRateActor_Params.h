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
	 * Function FrameRateActor.FrameRateActor_C.ReceiveBeginPlay
	 */
	struct AFrameRateActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrameRateActor.FrameRateActor_C.ReceiveTick
	 */
	struct AFrameRateActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrameRateActor.FrameRateActor_C.ExecuteUbergraph_FrameRateActor
	 */
	struct AFrameRateActor_C_ExecuteUbergraph_FrameRateActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
