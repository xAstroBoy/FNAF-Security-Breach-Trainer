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
	 * Function DJMusicHandler.DJMusicHandler_C.UserConstructionScript
	 */
	struct ADJMusicHandler_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function DJMusicHandler.DJMusicHandler_C.Set Beat Enabled
	 */
	struct ADJMusicHandler_C_Set_Beat_Enabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        BeatIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJMusicHandler.DJMusicHandler_C.ReceiveBeginPlay
	 */
	struct ADJMusicHandler_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DJMusicHandler.DJMusicHandler_C.Disable All Beats
	 */
	struct ADJMusicHandler_C_Disable_All_Beats_Params
	{
	};

	/**
	 * Function DJMusicHandler.DJMusicHandler_C.ExecuteUbergraph_DJMusicHandler
	 */
	struct ADJMusicHandler_C_ExecuteUbergraph_DJMusicHandler_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
