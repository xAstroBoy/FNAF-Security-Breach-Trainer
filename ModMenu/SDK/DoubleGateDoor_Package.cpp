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
	 * 		Name   -> Function DoubleGateDoor.DoubleGateDoor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ADoubleGateDoor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleGateDoor.DoubleGateDoor_C.UserConstructionScript");
		
		ADoubleGateDoor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoubleGateDoor.DoubleGateDoor_C.SetLockState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDoubleGateLockState                               LockState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoubleGateDoor_C::SetLockState(EDoubleGateLockState LockState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleGateDoor.DoubleGateDoor_C.SetLockState");
		
		ADoubleGateDoor_C_SetLockState_Params params {};
		params.LockState = LockState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoubleGateDoor.DoubleGateDoor_C.Refresh State
	 * 		Flags  -> ()
	 */
	void ADoubleGateDoor_C::RefreshState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleGateDoor.DoubleGateDoor_C.Refresh State");
		
		ADoubleGateDoor_C_RefreshState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoubleGateDoor.DoubleGateDoor_C.ExecuteUbergraph_DoubleGateDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoubleGateDoor_C::ExecuteUbergraph_DoubleGateDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleGateDoor.DoubleGateDoor_C.ExecuteUbergraph_DoubleGateDoor");
		
		ADoubleGateDoor_C_ExecuteUbergraph_DoubleGateDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoubleGateDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoubleGateDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoubleGateDoor.DoubleGateDoor_C");
		return ptr;
	}

}


