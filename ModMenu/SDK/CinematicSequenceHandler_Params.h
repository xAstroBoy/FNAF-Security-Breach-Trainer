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
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics
	 */
	struct UCinematicSequenceHandler_C_RunCinematics_Params
	{	};

	/**
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished
	 */
	struct UCinematicSequenceHandler_C_OnSequenceFinished_Params
	{	};

	/**
	 * Function CinematicSequenceHandler.CinematicSequenceHandler_C.ExecuteUbergraph_CinematicSequenceHandler
	 */
	struct UCinematicSequenceHandler_C_ExecuteUbergraph_CinematicSequenceHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
