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
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStartupMissionJump_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionJump.StartupMissionJump_C.OnTriggered");
		
		AStartupMissionJump_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.On Timer Up
	 * 		Flags  -> ()
	 */
	void AStartupMissionJump_C::OnTimerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionJump.StartupMissionJump_C.On Timer Up");
		
		AStartupMissionJump_C_OnTimerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.ExecuteUbergraph_StartupMissionJump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionJump_C::ExecuteUbergraph_StartupMissionJump(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionJump.StartupMissionJump_C.ExecuteUbergraph_StartupMissionJump");
		
		AStartupMissionJump_C_ExecuteUbergraph_StartupMissionJump_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStartupMissionJump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStartupMissionJump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StartupMissionJump.StartupMissionJump_C");
		return ptr;
	}

}


