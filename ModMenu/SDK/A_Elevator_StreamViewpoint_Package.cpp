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
	 * 		Name   -> Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.IsStreamingEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AA_Elevator_StreamViewpoint_C::IsStreamingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.IsStreamingEnabled");
		
		AA_Elevator_StreamViewpoint_C_IsStreamingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.SetStreamingEnable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AA_Elevator_StreamViewpoint_C::SetStreamingEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.SetStreamingEnable");
		
		AA_Elevator_StreamViewpoint_C_SetStreamingEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AA_Elevator_StreamViewpoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AA_Elevator_StreamViewpoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C");
		return ptr;
	}

}


