﻿/**
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
	 * 		Name   -> Function AlwaysFaceCameraComponent.AlwaysFaceCameraComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlwaysFaceCameraComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent.AlwaysFaceCameraComponent_C.ReceiveTick");
		
		UAlwaysFaceCameraComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AlwaysFaceCameraComponent.AlwaysFaceCameraComponent_C.ExecuteUbergraph_AlwaysFaceCameraComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlwaysFaceCameraComponent_C::ExecuteUbergraph_AlwaysFaceCameraComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent.AlwaysFaceCameraComponent_C.ExecuteUbergraph_AlwaysFaceCameraComponent");
		
		UAlwaysFaceCameraComponent_C_ExecuteUbergraph_AlwaysFaceCameraComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlwaysFaceCameraComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlwaysFaceCameraComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AlwaysFaceCameraComponent.AlwaysFaceCameraComponent_C");
		return ptr;
	}

}


