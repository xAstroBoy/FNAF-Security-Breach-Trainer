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
	 * 		Name   -> Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.OnObjectStateChangedEvent
	 * 		Flags  -> ()
	 */
	void UDoorAutomaticOnWorldState_C::OnObjectStateChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.OnObjectStateChangedEvent");
		
		UDoorAutomaticOnWorldState_C_OnObjectStateChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UDoorAutomaticOnWorldState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.ReceiveBeginPlay");
		
		UDoorAutomaticOnWorldState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.ExecuteUbergraph_DoorAutomaticOnWorldState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDoorAutomaticOnWorldState_C::ExecuteUbergraph_DoorAutomaticOnWorldState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C.ExecuteUbergraph_DoorAutomaticOnWorldState");
		
		UDoorAutomaticOnWorldState_C_ExecuteUbergraph_DoorAutomaticOnWorldState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorAutomaticOnWorldState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorAutomaticOnWorldState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorAutomaticOnWorldState.DoorAutomaticOnWorldState_C");
		return ptr;
	}

}


