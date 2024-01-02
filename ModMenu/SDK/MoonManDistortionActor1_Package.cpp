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
	 * 		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMoonManDistortionActor1_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__FinishedFunc");
		
		AMoonManDistortionActor1_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMoonManDistortionActor1_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__UpdateFunc");
		
		AMoonManDistortionActor1_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMoonManDistortionActor1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.ReceiveBeginPlay");
		
		AMoonManDistortionActor1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Set Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonManDistortionActor1_C::SetLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Set Level");
		
		AMoonManDistortionActor1_C_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.ExecuteUbergraph_MoonManDistortionActor1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonManDistortionActor1_C::ExecuteUbergraph_MoonManDistortionActor1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.ExecuteUbergraph_MoonManDistortionActor1");
		
		AMoonManDistortionActor1_C_ExecuteUbergraph_MoonManDistortionActor1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoonManDistortionActor1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonManDistortionActor1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoonManDistortionActor1.MoonManDistortionActor1_C");
		return ptr;
	}

}


