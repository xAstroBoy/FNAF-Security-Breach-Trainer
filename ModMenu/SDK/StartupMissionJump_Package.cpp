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
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.On Timer Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStartupMissionJump_C::On_Timer_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionJump.StartupMissionJump_C.On Timer Up");
		
		AStartupMissionJump_C_On_Timer_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StartupMissionJump.StartupMissionJump_C.ExecuteUbergraph_StartupMissionJump
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStartupMissionJump_C.StaticClass
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


