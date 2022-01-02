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
//		Name   -> Function DJMusicManTextFormatter.DJMusicManTextFormatter_C.GetFormattedText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TaskTitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       FormattedTaskTitleText                                     (Parm, OutParm)
void UDJMusicManTextFormatter_C::GetFormattedText(const struct FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int StateIndex, struct FText* FormattedTaskTitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicManTextFormatter.DJMusicManTextFormatter_C.GetFormattedText");

	UDJMusicManTextFormatter_C_GetFormattedText_Params params {};
	params.TaskTitleText = TaskTitleText;
	params.MissionState = MissionState;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedTaskTitleText != nullptr)
		*FormattedTaskTitleText = params.FormattedTaskTitleText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
