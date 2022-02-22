/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTextFormatter.MissionTextFormatter_C.GetFormattedText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TaskTitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FormattedTaskTitleText                                     (Parm, OutParm)
	 */
	void UMissionTextFormatter_C::GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int32_t StateIndex, class FText* FormattedTaskTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTextFormatter.MissionTextFormatter_C.GetFormattedText");
		
		UMissionTextFormatter_C_GetFormattedText_Params params {};
		params.TaskTitleText = TaskTitleText;
		params.MissionState = MissionState;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedTaskTitleText != nullptr)
			*FormattedTaskTitleText = params.FormattedTaskTitleText;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMissionTextFormatter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionTextFormatter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTextFormatter.MissionTextFormatter_C");
		return ptr;
	}

}


