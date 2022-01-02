﻿#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText
struct UMissionTextFormatterFactory_C_GetFormattedMissionText_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMissionState                           MissionState;                                              // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0028(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFNAFMissionTaskInfo                        TaskInfo;                                                  // 0x0070(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                StateIndex;                                                // 0x0148(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedText;                                             // 0x0150(0x0018)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif