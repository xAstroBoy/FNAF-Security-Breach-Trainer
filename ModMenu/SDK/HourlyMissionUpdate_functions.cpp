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
//		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AHourlyMissionUpdate_C::Give_Hourly_Mission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission");

	AHourlyMissionUpdate_C_Give_Hourly_Mission_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AHourlyMissionUpdate_C::On_Audio_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished");

	AHourlyMissionUpdate_C_On_Audio_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHourlyMissionUpdate_C::ExecuteUbergraph_HourlyMissionUpdate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate");

	AHourlyMissionUpdate_C_ExecuteUbergraph_HourlyMissionUpdate_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
