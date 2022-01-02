// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FFNAFMissionInfo                            MissionInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FFNAFMissionTaskInfo                        TaskInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       FormattedText                                              (Parm, OutParm)
void UMissionTextFormatterFactory_C::GetFormattedMissionText(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionTaskInfo& TaskInfo, int StateIndex, struct FText* FormattedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText");

	UMissionTextFormatterFactory_C_GetFormattedMissionText_Params params {};
	params.MissionName = MissionName;
	params.MissionState = MissionState;
	params.MissionInfo = MissionInfo;
	params.TaskInfo = TaskInfo;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
