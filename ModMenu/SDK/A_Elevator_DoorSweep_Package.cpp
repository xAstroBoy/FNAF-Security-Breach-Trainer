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
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.Setup
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TickOpenPercent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetOpenPercent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxCollision
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxes
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.UserConstructionScript
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ReceiveTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TriggerClose
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ExecuteUbergraph_A_Elevator_DoorSweep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_Elevator_DoorSweep_C::ExecuteUbergraph_A_Elevator_DoorSweep(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AA_Elevator_DoorSweep_C.StaticClass
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


