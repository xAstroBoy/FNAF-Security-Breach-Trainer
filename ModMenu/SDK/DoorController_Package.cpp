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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADoorController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.ReceiveBeginPlay");
		
		ADoorController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADoorController_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.SetActivated");
		
		ADoorController_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.On Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADoorController_C::On_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.On Activate");
		
		ADoorController_C_On_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.OnGameStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADoorController_C::OnGameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.OnGameStart");
		
		ADoorController_C_OnGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.OnGameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADoorController_C::OnGameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.OnGameEnd");
		
		ADoorController_C_OnGameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DoorController.DoorController_C.ExecuteUbergraph_DoorController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorController_C::ExecuteUbergraph_DoorController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.ExecuteUbergraph_DoorController");
		
		ADoorController_C_ExecuteUbergraph_DoorController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADoorController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorController.DoorController_C");
		return ptr;
	}

}


