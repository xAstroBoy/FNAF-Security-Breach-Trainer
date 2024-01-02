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
	 * 		Name   -> Function DoorManagerWithSave.DoorManagerWithSave_C.SetSaveState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorManagerWithSave_C::SetSaveState(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorManagerWithSave.DoorManagerWithSave_C.SetSaveState");
		
		ADoorManagerWithSave_C_SetSaveState_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorClose
	 * 		Flags  -> ()
	 */
	void ADoorManagerWithSave_C::ForceDoorClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorClose");
		
		ADoorManagerWithSave_C_ForceDoorClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorOpen
	 * 		Flags  -> ()
	 */
	void ADoorManagerWithSave_C::ForceDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorOpen");
		
		ADoorManagerWithSave_C_ForceDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorManagerWithSave.DoorManagerWithSave_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADoorManagerWithSave_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorManagerWithSave.DoorManagerWithSave_C.ReceiveBeginPlay");
		
		ADoorManagerWithSave_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorManagerWithSave.DoorManagerWithSave_C.ExecuteUbergraph_DoorManagerWithSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorManagerWithSave_C::ExecuteUbergraph_DoorManagerWithSave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorManagerWithSave.DoorManagerWithSave_C.ExecuteUbergraph_DoorManagerWithSave");
		
		ADoorManagerWithSave_C_ExecuteUbergraph_DoorManagerWithSave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorManagerWithSave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorManagerWithSave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorManagerWithSave.DoorManagerWithSave_C");
		return ptr;
	}

}


