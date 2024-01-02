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
	 * Function ShatteredChicaMissionTextFormatter.ShatteredChicaMissionTextFormatter_C.GetFormattedText
	 */
	struct UShatteredChicaMissionTextFormatter_C_GetFormattedText_Params
	{
	public:
		class FText                                                TaskTitleText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0018(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StateIndex;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T56K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                FormattedTaskTitleText;                                  // 0x0040(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
