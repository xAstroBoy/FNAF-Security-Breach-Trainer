/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PlayerInteractHoldComponent_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.IsHolding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.GetPlayerHUD
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractHoldComponent_C::GetPlayerHUD(class UPlayerHUD_C** PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.GetPlayerHUD");
		
		UPlayerInteractHoldComponent_C_GetPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerHUD != nullptr)
			*PlayerHUD = params.PlayerHUD;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Stop Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerInteractHoldComponent_C::Stop_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Stop Hold Timer");
		
		UPlayerInteractHoldComponent_C_Stop_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Start Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerInteractHoldComponent_C::Start_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Start Hold Timer");
		
		UPlayerInteractHoldComponent_C_Start_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ExecuteUbergraph_PlayerInteractHoldComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractHoldComponent_C::ExecuteUbergraph_PlayerInteractHoldComponent(int EntryPoint)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OnHoldCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerInteractHoldComponent_C.StaticClass
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


