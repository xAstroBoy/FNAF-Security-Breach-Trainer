/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MissionTextFormatterFactory_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFNAFMissionTaskInfo                        TaskInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FormattedText                                              (Parm, OutParm)
	 */
	void UMissionTextFormatterFactory_C::GetFormattedMissionText(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionTaskInfo& TaskInfo, int StateIndex, class FText* FormattedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTextFormatterFactory.MissionTextFormatterFactory_C.GetFormattedMissionText");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMissionTextFormatterFactory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionTextFormatterFactory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTextFormatterFactory.MissionTextFormatterFactory_C");
		return ptr;
	}

}


