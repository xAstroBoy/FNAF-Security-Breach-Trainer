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
	 * Function DJMusicManTextFormatter.DJMusicManTextFormatter_C.GetFormattedText
	 */
	struct UDJMusicManTextFormatter_C_GetFormattedText_Params
	{
	public:
		class FText                                                TaskTitleText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0018(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StateIndex;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                FormattedTaskTitleText;                                  // 0x0040(0x0018)  (Parm, OutParm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
