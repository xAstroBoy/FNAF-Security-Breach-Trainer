#pragma once

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

// Function MissionTextFormatter.MissionTextFormatter_C.GetFormattedText
struct UMissionTextFormatter_C_GetFormattedText_Params
{
	struct FText                                       TaskTitleText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFNAFMissionState                           MissionState;                                              // 0x0018(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                StateIndex;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedTaskTitleText;                                    // 0x0040(0x0018)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
