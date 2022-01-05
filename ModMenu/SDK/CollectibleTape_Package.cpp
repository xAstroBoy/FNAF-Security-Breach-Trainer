/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "CollectibleTape_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleTape_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.GetInteractibleType");
		
		ACollectibleTape_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleTape_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.CanPlayerInteract");
		
		ACollectibleTape_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACollectibleTape_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.ReceiveBeginPlay");
		
		ACollectibleTape_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.OnPlayerInteractCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACollectibleTape_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.OnPlayerInteractCancel");
		
		ACollectibleTape_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.CancelInteract
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACollectibleTape_C::CancelInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.CancelInteract");
		
		ACollectibleTape_C_CancelInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleTape_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.OnPlayerInteract");
		
		ACollectibleTape_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACollectibleTape_C::BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature");
		
		ACollectibleTape_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.MakeVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACollectibleTape_C::MakeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.MakeVisible");
		
		ACollectibleTape_C_MakeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CollectibleTape.CollectibleTape_C.ExecuteUbergraph_CollectibleTape
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleTape_C::ExecuteUbergraph_CollectibleTape(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleTape.CollectibleTape_C.ExecuteUbergraph_CollectibleTape");
		
		ACollectibleTape_C_ExecuteUbergraph_CollectibleTape_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACollectibleTape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACollectibleTape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CollectibleTape.CollectibleTape_C");
		return ptr;
	}

}


