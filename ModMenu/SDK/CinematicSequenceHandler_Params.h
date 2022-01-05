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
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics
	 */
	struct UCinematicSequenceHandler_C_Run_Cinematics_Params
	{
	};

	/**
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished
	 */
	struct UCinematicSequenceHandler_C_On_Sequence_Finished_Params
	{
	};

	/**
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.ExecuteUbergraph_CinematicSequenceHandler
	 */
	struct UCinematicSequenceHandler_C_ExecuteUbergraph_CinematicSequenceHandler_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
