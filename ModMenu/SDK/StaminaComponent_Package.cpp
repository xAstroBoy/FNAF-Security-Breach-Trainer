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
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.GetStaminaRefillRate
	 * 		Flags  -> ()
	 */
	float UStaminaComponent_C::GetStaminaRefillRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetStaminaRefillRate");
		
		UStaminaComponent_C_GetStaminaRefillRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.GetMaxStamina
	 * 		Flags  -> ()
	 */
	float UStaminaComponent_C::GetMaxStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetMaxStamina");
		
		UStaminaComponent_C_GetMaxStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.GetStaminaPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaComponent_C::GetStaminaPercentage(float* StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetStaminaPercentage");
		
		UStaminaComponent_C_GetStaminaPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaminaPercentage != nullptr)
			*StaminaPercentage = params.StaminaPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.CanUseStamina
	 * 		Flags  -> ()
	 */
	bool UStaminaComponent_C::CanUseStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.CanUseStamina");
		
		UStaminaComponent_C_CanUseStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UStaminaComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ReceiveBeginPlay");
		
		UStaminaComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ReceiveTick");
		
		UStaminaComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.Start Using Stamina
	 * 		Flags  -> ()
	 */
	void UStaminaComponent_C::StartUsingStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.Start Using Stamina");
		
		UStaminaComponent_C_StartUsingStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.Stop Using Stamina
	 * 		Flags  -> ()
	 */
	void UStaminaComponent_C::StopUsingStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.Stop Using Stamina");
		
		UStaminaComponent_C_StopUsingStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.ExecuteUbergraph_StaminaComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaComponent_C::ExecuteUbergraph_StaminaComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ExecuteUbergraph_StaminaComponent");
		
		UStaminaComponent_C_ExecuteUbergraph_StaminaComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.OnStaminaReplenished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStaminaComponent_C::OnStaminaReplenished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.OnStaminaReplenished__DelegateSignature");
		
		UStaminaComponent_C_OnStaminaReplenished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaComponent.StaminaComponent_C.OnStaminaDepleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStaminaComponent_C::OnStaminaDepleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.OnStaminaDepleted__DelegateSignature");
		
		UStaminaComponent_C_OnStaminaDepleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaminaComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaminaComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaminaComponent.StaminaComponent_C");
		return ptr;
	}

}


