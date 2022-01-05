/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "A_Elevator_DoorSweep_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AA_Elevator_DoorSweep_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.Setup");
		
		AA_Elevator_DoorSweep_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TickOpenPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AA_Elevator_DoorSweep_C::TickOpenPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TickOpenPercent");
		
		AA_Elevator_DoorSweep_C_TickOpenPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetOpenPercent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_Elevator_DoorSweep_C::SetOpenPercent(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetOpenPercent");
		
		AA_Elevator_DoorSweep_C_SetOpenPercent_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AA_Elevator_DoorSweep_C::SetBoxCollision(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxCollision");
		
		AA_Elevator_DoorSweep_C_SetBoxCollision_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AA_Elevator_DoorSweep_C::SetBoxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxes");
		
		AA_Elevator_DoorSweep_C_SetBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AA_Elevator_DoorSweep_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.UserConstructionScript");
		
		AA_Elevator_DoorSweep_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_Elevator_DoorSweep_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ReceiveTick");
		
		AA_Elevator_DoorSweep_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TriggerClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AA_Elevator_DoorSweep_C::TriggerClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TriggerClose");
		
		AA_Elevator_DoorSweep_C_TriggerClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ExecuteUbergraph_A_Elevator_DoorSweep
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_Elevator_DoorSweep_C::ExecuteUbergraph_A_Elevator_DoorSweep(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ExecuteUbergraph_A_Elevator_DoorSweep");
		
		AA_Elevator_DoorSweep_C_ExecuteUbergraph_A_Elevator_DoorSweep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AA_Elevator_DoorSweep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AA_Elevator_DoorSweep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Elevator_DoorSweep.A_Elevator_DoorSweep_C");
		return ptr;
	}

}


