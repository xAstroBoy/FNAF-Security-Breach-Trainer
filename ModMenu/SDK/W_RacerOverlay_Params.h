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
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetCanMove
	 */
	struct UW_RacerOverlay_C_GetCanMove_Params
	{
	public:
		bool                                                       CanMove;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetLastTime
	 */
	struct UW_RacerOverlay_C_GetLastTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetBestTime
	 */
	struct UW_RacerOverlay_C_GetBestTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetLapTime
	 */
	struct UW_RacerOverlay_C_GetLapTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetLap
	 */
	struct UW_RacerOverlay_C_GetLap_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GetPosition
	 */
	struct UW_RacerOverlay_C_GetPosition_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.CanMove
	 */
	struct UW_RacerOverlay_C_CanMove_Params
	{
	public:
		bool                                                       New_Can_Move;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.StartRaceCountdown
	 */
	struct UW_RacerOverlay_C_StartRaceCountdown_Params
	{
	public:
		float                                                      TimeTillStart;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.StartRace
	 */
	struct UW_RacerOverlay_C_StartRace_Params
	{
	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.GameEnd
	 */
	struct UW_RacerOverlay_C_GameEnd_Params
	{
	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.Construct
	 */
	struct UW_RacerOverlay_C_Construct_Params
	{
	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.Tick
	 */
	struct UW_RacerOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.EndRace
	 */
	struct UW_RacerOverlay_C_EndRace_Params
	{
	};

	/**
	 * Function W_RacerOverlay.W_RacerOverlay_C.ExecuteUbergraph_W_RacerOverlay
	 */
	struct UW_RacerOverlay_C_ExecuteUbergraph_W_RacerOverlay_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
