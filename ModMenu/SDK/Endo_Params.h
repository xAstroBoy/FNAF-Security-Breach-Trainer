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
	 * Function Endo.Endo_C.DeterminedBeingWatched
	 */
	struct AEndo_C_DeterminedBeingWatched_Params
	{
	};

	/**
	 * Function Endo.Endo_C.ReceiveBeginPlay
	 */
	struct AEndo_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Endo.Endo_C.ReceiveTick
	 */
	struct AEndo_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Endo.Endo_C.Wake Endo
	 */
	struct AEndo_C_Wake_Endo_Params
	{
	};

	/**
	 * Function Endo.Endo_C.EndoSleep
	 */
	struct AEndo_C_EndoSleep_Params
	{
	};

	/**
	 * Function Endo.Endo_C.ExecuteUbergraph_Endo
	 */
	struct AEndo_C_ExecuteUbergraph_Endo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
