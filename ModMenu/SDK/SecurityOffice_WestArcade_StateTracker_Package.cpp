/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetIsGameActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GameActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_WestArcade_StateTracker_C::GetIsGameActive(bool* GameActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetIsGameActive");
		
		ASecurityOffice_WestArcade_StateTracker_C_GetIsGameActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameActive != nullptr)
			*GameActive = params.GameActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.SetSwitchesActivatedCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SwitchesActivated                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_WestArcade_StateTracker_C::SetSwitchesActivatedCount(int32_t SwitchesActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.SetSwitchesActivatedCount");
		
		ASecurityOffice_WestArcade_StateTracker_C_SetSwitchesActivatedCount_Params params {};
		params.SwitchesActivated = SwitchesActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetSwitchesActivatedCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberActivated                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_WestArcade_StateTracker_C::GetSwitchesActivatedCount(int32_t* NumberActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetSwitchesActivatedCount");
		
		ASecurityOffice_WestArcade_StateTracker_C_GetSwitchesActivatedCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberActivated != nullptr)
			*NumberActivated = params.NumberActivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityOffice_WestArcade_StateTracker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityOffice_WestArcade_StateTracker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C");
		return ptr;
	}

}


