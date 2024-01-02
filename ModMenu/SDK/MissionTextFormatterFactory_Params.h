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
	 * Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText
	 */
	struct UMissionTextFormatterFactory_C_GetFormattedMissionText_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFNAFMissionTaskInfo                                TaskInfo;                                                // 0x0070(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StateIndex;                                              // 0x0148(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PLM9[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                FormattedText;                                           // 0x0150(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
