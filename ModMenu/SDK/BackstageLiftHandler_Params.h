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
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.GetCurrentLift
	 */
	struct ABackstageLiftHandler_C_GetCurrentLift_Params
	{
	public:
		class ABackstageOfficeLift_C*                              CurrentLift;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.Setup Handler
	 */
	struct ABackstageLiftHandler_C_SetupHandler_Params
	{	};

	/**
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.On Lift Stopped
	 */
	struct ABackstageLiftHandler_C_OnLiftStopped_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.ReceiveBeginPlay
	 */
	struct ABackstageLiftHandler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.Debind things
	 */
	struct ABackstageLiftHandler_C_Debindthings_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageLiftHandler.BackstageLiftHandler_C.ExecuteUbergraph_BackstageLiftHandler
	 */
	struct ABackstageLiftHandler_C_ExecuteUbergraph_BackstageLiftHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
