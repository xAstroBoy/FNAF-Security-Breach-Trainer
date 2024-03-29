﻿/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DaycareGeneratorMissionTextFormatter.DaycareGeneratorMissionTextFormatter_C.GetFormattedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TaskTitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FormattedTaskTitleText                                     (Parm, OutParm)
	 */
	void UDaycareGeneratorMissionTextFormatter_C::GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int32_t StateIndex, class FText* FormattedTaskTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DaycareGeneratorMissionTextFormatter.DaycareGeneratorMissionTextFormatter_C.GetFormattedText");
		
		UDaycareGeneratorMissionTextFormatter_C_GetFormattedText_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDaycareGeneratorMissionTextFormatter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDaycareGeneratorMissionTextFormatter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DaycareGeneratorMissionTextFormatter.DaycareGeneratorMissionTextFormatter_C");
		return ptr;
	}

}


