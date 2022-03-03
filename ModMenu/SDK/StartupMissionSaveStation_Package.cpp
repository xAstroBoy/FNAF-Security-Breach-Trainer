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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StartupMissionSaveStation.StartupMissionSaveStation_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStartupMissionSaveStation_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionSaveStation.StartupMissionSaveStation_C.OnTriggered");
		
		AStartupMissionSaveStation_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StartupMissionSaveStation.StartupMissionSaveStation_C.ExecuteUbergraph_StartupMissionSaveStation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionSaveStation_C::ExecuteUbergraph_StartupMissionSaveStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionSaveStation.StartupMissionSaveStation_C.ExecuteUbergraph_StartupMissionSaveStation");
		
		AStartupMissionSaveStation_C_ExecuteUbergraph_StartupMissionSaveStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStartupMissionSaveStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStartupMissionSaveStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StartupMissionSaveStation.StartupMissionSaveStation_C");
		return ptr;
	}

}


