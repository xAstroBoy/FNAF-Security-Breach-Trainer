/**
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
	 * 		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission
	 * 		Flags  -> ()
	 */
	void AHourlyMissionUpdate_C::GiveHourlyMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission");
		
		AHourlyMissionUpdate_C_GiveHourlyMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished
	 * 		Flags  -> ()
	 */
	void AHourlyMissionUpdate_C::OnAudioFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished");
		
		AHourlyMissionUpdate_C_OnAudioFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMissionUpdate_C::ExecuteUbergraph_HourlyMissionUpdate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate");
		
		AHourlyMissionUpdate_C_ExecuteUbergraph_HourlyMissionUpdate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHourlyMissionUpdate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHourlyMissionUpdate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HourlyMissionUpdate.HourlyMissionUpdate_C");
		return ptr;
	}

}


