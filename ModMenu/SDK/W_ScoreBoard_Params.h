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
	 * Function W_ScoreBoard.W_ScoreBoard_C.GetCanMove
	 */
	struct UW_ScoreBoard_C_GetCanMove_Params
	{
	public:
		bool                                                       CanMove;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.CanMove
	 */
	struct UW_ScoreBoard_C_CanMove_Params
	{
	public:
		bool                                                       New_Can_Move;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.StartRaceCountdown
	 */
	struct UW_ScoreBoard_C_StartRaceCountdown_Params
	{
	public:
		float                                                      TimeTillStart;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.StartRace
	 */
	struct UW_ScoreBoard_C_StartRace_Params
	{
	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.EndRace
	 */
	struct UW_ScoreBoard_C_EndRace_Params
	{
	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.Construct
	 */
	struct UW_ScoreBoard_C_Construct_Params
	{
	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.Tick
	 */
	struct UW_ScoreBoard_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.GameEnd
	 */
	struct UW_ScoreBoard_C_GameEnd_Params
	{
	};

	/**
	 * Function W_ScoreBoard.W_ScoreBoard_C.ExecuteUbergraph_W_ScoreBoard
	 */
	struct UW_ScoreBoard_C_ExecuteUbergraph_W_ScoreBoard_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
