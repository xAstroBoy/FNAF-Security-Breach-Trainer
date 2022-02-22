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
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCameraOverrideComponent_C::Release_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera");
		
		UCameraOverrideComponent_C_Release_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCameraOverrideComponent_C::Take_Over_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera");
		
		UCameraOverrideComponent_C_Take_Over_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraOverrideComponent_C::ExecuteUbergraph_CameraOverrideComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent");
		
		UCameraOverrideComponent_C_ExecuteUbergraph_CameraOverrideComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCameraOverrideComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraOverrideComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraOverrideComponent.CameraOverrideComponent_C");
		return ptr;
	}

}


