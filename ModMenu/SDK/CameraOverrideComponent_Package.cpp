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
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.FindGregory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFBasePlayerCharacter*                    Gregory                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraOverrideComponent_C::FindGregory(class AFNAFBasePlayerCharacter** Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.FindGregory");
		
		UCameraOverrideComponent_C_FindGregory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gregory != nullptr)
			*Gregory = params.Gregory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera
	 * 		Flags  -> ()
	 */
	void UCameraOverrideComponent_C::ReleaseCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera");
		
		UCameraOverrideComponent_C_ReleaseCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera
	 * 		Flags  -> ()
	 */
	void UCameraOverrideComponent_C::TakeOverCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera");
		
		UCameraOverrideComponent_C_TakeOverCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraOverrideComponent_C.StaticClass
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


