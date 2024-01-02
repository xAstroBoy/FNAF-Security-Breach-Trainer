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
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OverrideHoldToCollectTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HoldToCollectTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractHoldComponent_C::OverrideHoldToCollectTime(float HoldToCollectTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OverrideHoldToCollectTime");
		
		UPlayerInteractHoldComponent_C_OverrideHoldToCollectTime_Params params {};
		params.HoldToCollectTime = HoldToCollectTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.IsHolding
	 * 		Flags  -> ()
	 */
	bool UPlayerInteractHoldComponent_C::IsHolding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.IsHolding");
		
		UPlayerInteractHoldComponent_C_IsHolding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Start Hold Timer
	 * 		Flags  -> ()
	 */
	void UPlayerInteractHoldComponent_C::StartHoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Start Hold Timer");
		
		UPlayerInteractHoldComponent_C_StartHoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Stop Hold Timer
	 * 		Flags  -> ()
	 */
	void UPlayerInteractHoldComponent_C::StopHoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Stop Hold Timer");
		
		UPlayerInteractHoldComponent_C_StopHoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractHoldComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ReceiveTick");
		
		UPlayerInteractHoldComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ExecuteUbergraph_PlayerInteractHoldComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractHoldComponent_C::ExecuteUbergraph_PlayerInteractHoldComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ExecuteUbergraph_PlayerInteractHoldComponent");
		
		UPlayerInteractHoldComponent_C_ExecuteUbergraph_PlayerInteractHoldComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OnHoldCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerInteractHoldComponent_C::OnHoldCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OnHoldCompleted__DelegateSignature");
		
		UPlayerInteractHoldComponent_C_OnHoldCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerInteractHoldComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerInteractHoldComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerInteractHoldComponent.PlayerInteractHoldComponent_C");
		return ptr;
	}

}


