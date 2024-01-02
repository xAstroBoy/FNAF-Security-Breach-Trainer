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
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ForceRemoveInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractibleObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::ForceRemoveInteractible(class AActor* InteractibleObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ForceRemoveInteractible");
		
		UPlayerInteractComponent_C_ForceRemoveInteractible_Params params {};
		params.InteractibleObject = InteractibleObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.CancelCurrentClosest
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::CancelCurrentClosest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.CancelCurrentClosest");
		
		UPlayerInteractComponent_C_CancelCurrentClosest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.CancelInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::CancelInteraction(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.CancelInteraction");
		
		UPlayerInteractComponent_C_CancelInteraction_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractible
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::ResetInteractible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractible");
		
		UPlayerInteractComponent_C_ResetInteractible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractibleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::ResetInteractibleHUD(class UObject* Interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractibleHUD");
		
		UPlayerInteractComponent_C_ResetInteractibleHUD_Params params {};
		params.Interactible = Interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ChangeInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::ChangeInteractible(class UObject* Interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ChangeInteractible");
		
		UPlayerInteractComponent_C_ChangeInteractible_Params params {};
		params.Interactible = Interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.DetermineClosestInteractible
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::DetermineClosestInteractible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.DetermineClosestInteractible");
		
		UPlayerInteractComponent_C_DetermineClosestInteractible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveBeginPlay");
		
		UPlayerInteractComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner Begin Overlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::OnOwnerBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner Begin Overlap");
		
		UPlayerInteractComponent_C_OnOwnerBeginOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner End Overlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::OnOwnerEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner End Overlap");
		
		UPlayerInteractComponent_C_OnOwnerEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveTick");
		
		UPlayerInteractComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.Attempt Interact
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::AttemptInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.Attempt Interact");
		
		UPlayerInteractComponent_C_AttemptInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.Cancel Current Interact
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::CancelCurrentInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.Cancel Current Interact");
		
		UPlayerInteractComponent_C_CancelCurrentInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.Set Interact Enable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerInteractComponent_C::SetInteractEnable(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.Set Interact Enable");
		
		UPlayerInteractComponent_C_SetInteractEnable_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.AttemptMaintenanceInteract
	 * 		Flags  -> ()
	 */
	void UPlayerInteractComponent_C::AttemptMaintenanceInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.AttemptMaintenanceInteract");
		
		UPlayerInteractComponent_C_AttemptMaintenanceInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.ExecuteUbergraph_PlayerInteractComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::ExecuteUbergraph_PlayerInteractComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.ExecuteUbergraph_PlayerInteractComponent");
		
		UPlayerInteractComponent_C_ExecuteUbergraph_PlayerInteractComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerInteractComponent.PlayerInteractComponent_C.OnInteractibleChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerInteractComponent_C::OnInteractibleChanged__DelegateSignature(class UObject* Interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInteractComponent.PlayerInteractComponent_C.OnInteractibleChanged__DelegateSignature");
		
		UPlayerInteractComponent_C_OnInteractibleChanged__DelegateSignature_Params params {};
		params.Interactible = Interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerInteractComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerInteractComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerInteractComponent.PlayerInteractComponent_C");
		return ptr;
	}

}


