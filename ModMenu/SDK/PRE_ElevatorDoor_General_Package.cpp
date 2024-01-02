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
	 * 		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_ElevatorDoor_General_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveBeginPlay");
		
		APRE_ElevatorDoor_General_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_ElevatorDoor_General_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveTick");
		
		APRE_ElevatorDoor_General_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorClose
	 * 		Flags  -> ()
	 */
	void APRE_ElevatorDoor_General_C::ForceDoorClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorClose");
		
		APRE_ElevatorDoor_General_C_ForceDoorClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorOpen
	 * 		Flags  -> ()
	 */
	void APRE_ElevatorDoor_General_C::ForceDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorOpen");
		
		APRE_ElevatorDoor_General_C_ForceDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ExecuteUbergraph_PRE_ElevatorDoor_General
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_ElevatorDoor_General_C::ExecuteUbergraph_PRE_ElevatorDoor_General(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ExecuteUbergraph_PRE_ElevatorDoor_General");
		
		APRE_ElevatorDoor_General_C_ExecuteUbergraph_PRE_ElevatorDoor_General_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_ElevatorDoor_General_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_ElevatorDoor_General_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C");
		return ptr;
	}

}


