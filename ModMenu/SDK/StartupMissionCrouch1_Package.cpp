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
	 * 		Name   -> Function StartupMissionCrouch1.StartupMissionCrouch1_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStartupMissionCrouch1_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionCrouch1.StartupMissionCrouch1_C.OnTriggered");
		
		AStartupMissionCrouch1_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionCrouch1.StartupMissionCrouch1_C.On Timer Up
	 * 		Flags  -> ()
	 */
	void AStartupMissionCrouch1_C::OnTimerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionCrouch1.StartupMissionCrouch1_C.On Timer Up");
		
		AStartupMissionCrouch1_C_OnTimerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionCrouch1.StartupMissionCrouch1_C.ExecuteUbergraph_StartupMissionCrouch1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionCrouch1_C::ExecuteUbergraph_StartupMissionCrouch1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionCrouch1.StartupMissionCrouch1_C.ExecuteUbergraph_StartupMissionCrouch1");
		
		AStartupMissionCrouch1_C_ExecuteUbergraph_StartupMissionCrouch1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStartupMissionCrouch1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStartupMissionCrouch1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StartupMissionCrouch1.StartupMissionCrouch1_C");
		return ptr;
	}

}


