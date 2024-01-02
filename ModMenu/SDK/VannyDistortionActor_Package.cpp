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
	 * 		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AVannyDistortionActor_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__FinishedFunc");
		
		AVannyDistortionActor_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AVannyDistortionActor_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__UpdateFunc");
		
		AVannyDistortionActor_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AVannyDistortionActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.ReceiveBeginPlay");
		
		AVannyDistortionActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Set Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVannyDistortionActor_C::SetLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Set Level");
		
		AVannyDistortionActor_C_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.ExecuteUbergraph_VannyDistortionActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVannyDistortionActor_C::ExecuteUbergraph_VannyDistortionActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.ExecuteUbergraph_VannyDistortionActor");
		
		AVannyDistortionActor_C_ExecuteUbergraph_VannyDistortionActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVannyDistortionActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVannyDistortionActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VannyDistortionActor.VannyDistortionActor_C");
		return ptr;
	}

}


