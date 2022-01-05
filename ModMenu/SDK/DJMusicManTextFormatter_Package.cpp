/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "DJMusicManTextFormatter_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMusicManTextFormatter.DJMusicManTextFormatter_C.GetFormattedText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TaskTitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FormattedTaskTitleText                                     (Parm, OutParm)
	 */
	void UDJMusicManTextFormatter_C::GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int StateIndex, class FText* FormattedTaskTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMusicManTextFormatter.DJMusicManTextFormatter_C.GetFormattedText");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDJMusicManTextFormatter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJMusicManTextFormatter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DJMusicManTextFormatter.DJMusicManTextFormatter_C");
		return ptr;
	}

}


