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
	 * 		Name   -> Function Gregory.Gregory_C.IsPlayerCurrentlyMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerMoving                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsPlayerCurrentlyMoving(bool* IsPlayerMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsPlayerCurrentlyMoving");
		
		AGregory_C_IsPlayerCurrentlyMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlayerMoving != nullptr)
			*IsPlayerMoving = params.IsPlayerMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetFlashlightActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FlashlightActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::GetFlashlightActor(class AActor** FlashlightActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetFlashlightActor");
		
		AGregory_C_GetFlashlightActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlashlightActor != nullptr)
			*FlashlightActor = params.FlashlightActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsPlayerUsingFazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsingFazwatch                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsPlayerUsingFazwatch(bool* IsUsingFazwatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsPlayerUsingFazwatch");
		
		AGregory_C_IsPlayerUsingFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsingFazwatch != nullptr)
			*IsUsingFazwatch = params.IsUsingFazwatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.LastItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   ItemInfo                                                   (Parm, OutParm)
	 */
	void AGregory_C::LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LastItemCollected");
		
		AGregory_C_LastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemInfo != nullptr)
			*ItemInfo = params.ItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsPlayerFlashlightActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsPlayerFlashlightActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsPlayerFlashlightActive");
		
		AGregory_C_IsPlayerFlashlightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsSwitchingItems
	 * 		Flags  -> ()
	 */
	bool AGregory_C::IsSwitchingItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsSwitchingItems");
		
		AGregory_C_IsSwitchingItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsInAir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAir                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsInAir(bool* InAir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsInAir");
		
		AGregory_C_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAir != nullptr)
			*InAir = params.InAir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.PlayerEnteringExitingFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::PlayerEnteringExitingFreddy(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PlayerEnteringExitingFreddy");
		
		AGregory_C_PlayerEnteringExitingFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetSightComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USightComponent*                             Sight                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::GetSightComponent(class USightComponent** Sight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetSightComponent");
		
		AGregory_C_GetSightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sight != nullptr)
			*Sight = params.Sight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SpawnJumpscarePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLethal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AJumpscarePawn_C*                            JumpscarePawnOut                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::SpawnJumpscarePawn(const struct FTransform& SpawnTransform, bool CanEscape, bool IsLethal, float CamShakeScale, class AActor* ActorPerformingScare, class AJumpscarePawn_C** JumpscarePawnOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SpawnJumpscarePawn");
		
		AGregory_C_SpawnJumpscarePawn_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.CanEscape = CanEscape;
		params.IsLethal = IsLethal;
		params.CamShakeScale = CamShakeScale;
		params.ActorPerformingScare = ActorPerformingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JumpscarePawnOut != nullptr)
			*JumpscarePawnOut = params.JumpscarePawnOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetLevelStreamViewpoint
	 * 		Flags  -> ()
	 */
	class ULevelStreamViewpoint* AGregory_C::GetLevelStreamViewpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetLevelStreamViewpoint");
		
		AGregory_C_GetLevelStreamViewpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ForceHideBatteryLevelWidget
	 * 		Flags  -> ()
	 */
	void AGregory_C::ForceHideBatteryLevelWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceHideBatteryLevelWidget");
		
		AGregory_C_ForceHideBatteryLevelWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetCurrentInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWI_Gregory_Interact_C*                      WI_Gregory_Interact                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::GetCurrentInteract(class UWI_Gregory_Interact_C** WI_Gregory_Interact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetCurrentInteract");
		
		AGregory_C_GetCurrentInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WI_Gregory_Interact != nullptr)
			*WI_Gregory_Interact = params.WI_Gregory_Interact;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.On Flashlight Power Out
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnFlashlightPowerOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Flashlight Power Out");
		
		AGregory_C_OnFlashlightPowerOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsChowdaMode_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ChowdaMode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsChowdaMode_1(bool* ChowdaMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsChowdaMode_1");
		
		AGregory_C_IsChowdaMode_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChowdaMode != nullptr)
			*ChowdaMode = params.ChowdaMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ToggleRunIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Running                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ToggleRunIcon(bool Running)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ToggleRunIcon");
		
		AGregory_C_ToggleRunIcon_Params params {};
		params.Running = Running;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.CanJumpInternal
	 * 		Flags  -> ()
	 */
	bool AGregory_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.CanJumpInternal");
		
		AGregory_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ForceWatchLower
	 * 		Flags  -> ()
	 */
	void AGregory_C::ForceWatchLower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceWatchLower");
		
		AGregory_C_ForceWatchLower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ToggleRedReticle
	 * 		Flags  -> ()
	 */
	void AGregory_C::ToggleRedReticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ToggleRedReticle");
		
		AGregory_C_ToggleRedReticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.UpdateVisualSource
	 * 		Flags  -> ()
	 */
	void AGregory_C::UpdateVisualSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.UpdateVisualSource");
		
		AGregory_C_UpdateVisualSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetHideSearchLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::GetHideSearchLocation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetHideSearchLocation");
		
		AGregory_C_GetHideSearchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Setup Movement Speed
	 * 		Flags  -> ()
	 */
	void AGregory_C::SetupMovementSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Setup Movement Speed");
		
		AGregory_C_SetupMovementSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SetupWalkSpeed
	 * 		Flags  -> ()
	 */
	void AGregory_C::SetupWalkSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetupWalkSpeed");
		
		AGregory_C_SetupWalkSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SetupRunSpeed
	 * 		Flags  -> ()
	 */
	void AGregory_C::SetupRunSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetupRunSpeed");
		
		AGregory_C_SetupRunSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ShowInstructions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InstructionCard_Type                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ShowInstructions(E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShowInstructions");
		
		AGregory_C_ShowInstructions_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsFazWatchUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFazWatchUp                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::IsFazWatchUp(bool* IsFazWatchUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsFazWatchUp");
		
		AGregory_C_IsFazWatchUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFazWatchUp != nullptr)
			*IsFazWatchUp = params.IsFazWatchUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.LethalJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               JumpscareAudio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::LethalJumpscare(class USceneComponent* AttachComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerformingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LethalJumpscare");
		
		AGregory_C_LethalJumpscare_Params params {};
		params.AttachComponent = AttachComponent;
		params.JumpscareAudio = JumpscareAudio;
		params.CanEscape = CanEscape;
		params.CamShakeScale = CamShakeScale;
		params.ActorPerformingScare = ActorPerformingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Non Lethal Jumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachmentComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::NonLethalJumpscare(class USceneComponent* AttachmentComponent, float CamShakeScale, class AActor* ActorPerformingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Non Lethal Jumpscare");
		
		AGregory_C_NonLethalJumpscare_Params params {};
		params.AttachmentComponent = AttachmentComponent;
		params.CamShakeScale = CamShakeScale;
		params.ActorPerformingScare = ActorPerformingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.On Item Removed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AGregory_C::OnItemRemoved(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Item Removed");
		
		AGregory_C_OnItemRemoved_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetRunSpeed
	 * 		Flags  -> ()
	 */
	float AGregory_C::GetRunSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetRunSpeed");
		
		AGregory_C_GetRunSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.On Item Collected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AGregory_C::OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Item Collected");
		
		AGregory_C_OnItemCollected_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item3
	 * 		Flags  -> ()
	 */
	void AGregory_C::AttemptSwitchItem3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item3");
		
		AGregory_C_AttemptSwitchItem3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SwitchItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AEquippable_C*                               NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::SwitchItem(class AEquippable_C* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SwitchItem");
		
		AGregory_C_SwitchItem_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item2
	 * 		Flags  -> ()
	 */
	void AGregory_C::AttemptSwitchItem2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item2");
		
		AGregory_C_AttemptSwitchItem2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item1
	 * 		Flags  -> ()
	 */
	void AGregory_C::AttemptSwitchItem1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item1");
		
		AGregory_C_AttemptSwitchItem1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SetInUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InUse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::SetInUse(bool InUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetInUse");
		
		AGregory_C_SetInUse_Params params {};
		params.InUse = InUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.EndLazerTag
	 * 		Flags  -> ()
	 */
	void AGregory_C::EndLazerTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.EndLazerTag");
		
		AGregory_C_EndLazerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.StartLazerTag
	 * 		Flags  -> ()
	 */
	void AGregory_C::StartLazerTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.StartLazerTag");
		
		AGregory_C_StartLazerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ShouldDoLazerTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LazerTag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ShouldDoLazerTag(bool* LazerTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShouldDoLazerTag");
		
		AGregory_C_ShouldDoLazerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LazerTag != nullptr)
			*LazerTag = params.LazerTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.IsFlashlightActive
	 * 		Flags  -> ()
	 */
	bool AGregory_C::IsFlashlightActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsFlashlightActive");
		
		AGregory_C_IsFlashlightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Stun in Range
	 * 		Flags  -> ()
	 */
	void AGregory_C::StuninRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Stun in Range");
		
		AGregory_C_StuninRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GetFlashlightLocationAndDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFlashlight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FlashlightLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FlashlightDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetFlashlightLocationAndDirection");
		
		AGregory_C_GetFlashlightLocationAndDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFlashlight != nullptr)
			*HasFlashlight = params.HasFlashlight;
		if (FlashlightLocation != nullptr)
			*FlashlightLocation = params.FlashlightLocation;
		if (FlashlightDirection != nullptr)
			*FlashlightDirection = params.FlashlightDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ToggleFlashlight
	 * 		Flags  -> ()
	 */
	void AGregory_C::ToggleFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ToggleFlashlight");
		
		AGregory_C_ToggleFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AGregory_C::InpActEvt_Run_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2");
		
		AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AGregory_C::InpActEvt_Run_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_1");
		
		AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7");
		
		AGregory_C_OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7");
		
		AGregory_C_OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnFailure_D277383849041D09D51CF2BB341D6125(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125");
		
		AGregory_C_OnFailure_D277383849041D09D51CF2BB341D6125_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnSuccess_D277383849041D09D51CF2BB341D6125(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125");
		
		AGregory_C_OnSuccess_D277383849041D09D51CF2BB341D6125_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnFailure_7326E6ED4D8708615D3D6F94085DAB1A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A");
		
		AGregory_C_OnFailure_7326E6ED4D8708615D3D6F94085DAB1A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A");
		
		AGregory_C_OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnFailure_DCAEB8064AAF100FF80986844E21FAAA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA");
		
		AGregory_C_OnFailure_DCAEB8064AAF100FF80986844E21FAAA_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnSuccess_DCAEB8064AAF100FF80986844E21FAAA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA");
		
		AGregory_C_OnSuccess_DCAEB8064AAF100FF80986844E21FAAA_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.UpdateCustomProgressMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TextOnLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TextOnRight                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AGregory_C::UpdateCustomProgressMeter(const class FText& TextOnLeft, const class FText& TextOnRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.UpdateCustomProgressMeter");
		
		AGregory_C_UpdateCustomProgressMeter_Params params {};
		params.TextOnLeft = TextOnLeft;
		params.TextOnRight = TextOnRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ClearHoldMeter
	 * 		Flags  -> ()
	 */
	void AGregory_C::ClearHoldMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ClearHoldMeter");
		
		AGregory_C_ClearHoldMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.BeginCinimaticSkipFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::BeginCinimaticSkipFade(float DelayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BeginCinimaticSkipFade");
		
		AGregory_C_BeginCinimaticSkipFade_Params params {};
		params.DelayDuration = DelayDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ShowCinimaticSkip
	 * 		Flags  -> ()
	 */
	void AGregory_C::ShowCinimaticSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShowCinimaticSkip");
		
		AGregory_C_ShowCinimaticSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Disable Jump Land Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::DisableJumpLandAudio(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Disable Jump Land Audio");
		
		AGregory_C_DisableJumpLandAudio_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.LowerArms
	 * 		Flags  -> ()
	 */
	void AGregory_C::LowerArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LowerArms");
		
		AGregory_C_LowerArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.RaiseArms
	 * 		Flags  -> ()
	 */
	void AGregory_C::RaiseArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.RaiseArms");
		
		AGregory_C_RaiseArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnCheckpointSave");
		
		AGregory_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnGameDataLoaded");
		
		AGregory_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnStoreGameData");
		
		AGregory_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.PostGameLoad
	 * 		Flags  -> ()
	 */
	void AGregory_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PostGameLoad");
		
		AGregory_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.PostSaveGame
	 * 		Flags  -> ()
	 */
	void AGregory_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PostSaveGame");
		
		AGregory_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveActorBeginOverlap");
		
		AGregory_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveTick");
		
		AGregory_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Attempt Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HideLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::AttemptHide(class AActor* HideActor, const struct FVector& HideLocation, bool IsLow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Hide");
		
		AGregory_C_AttemptHide_Params params {};
		params.HideActor = HideActor;
		params.HideLocation = HideLocation;
		params.IsLow = IsLow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveActorEndOverlap");
		
		AGregory_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Attempt Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AGregory_C::AttemptInteract(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Interact");
		
		AGregory_C_AttemptInteract_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Kill
	 * 		Flags  -> ()
	 */
	void AGregory_C::Kill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Kill");
		
		AGregory_C_Kill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptPrimaryAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::AttemptPrimaryAction(const class FName& ItemToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptPrimaryAction");
		
		AGregory_C_AttemptPrimaryAction_Params params {};
		params.ItemToUse = ItemToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptSecondaryAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::AttemptSecondaryAction(const class FName& ItemToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSecondaryAction");
		
		AGregory_C_AttemptSecondaryAction_Params params {};
		params.ItemToUse = ItemToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AttemptThrow
	 * 		Flags  -> ()
	 */
	void AGregory_C::AttemptThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptThrow");
		
		AGregory_C_AttemptThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGregory_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveBeginPlay");
		
		AGregory_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.LeaveHidingSpace
	 * 		Flags  -> ()
	 */
	void AGregory_C::LeaveHidingSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LeaveHidingSpace");
		
		AGregory_C_LeaveHidingSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Force Flashlight State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ForceFlashlightState(bool On, bool AllowPlayerToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Force Flashlight State");
		
		AGregory_C_ForceFlashlightState_Params params {};
		params.On = On;
		params.AllowPlayerToggle = AllowPlayerToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.On Interact Release
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnInteractRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Interact Release");
		
		AGregory_C_OnInteractRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceivePossessed");
		
		AGregory_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Attempt Freddy Call
	 * 		Flags  -> ()
	 */
	void AGregory_C::AttemptFreddyCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Freddy Call");
		
		AGregory_C_AttemptFreddyCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GregoryHeadBob
	 * 		Flags  -> ()
	 */
	void AGregory_C::GregoryHeadBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryHeadBob");
		
		AGregory_C_GregoryHeadBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GregoryCrouch
	 * 		Flags  -> ()
	 */
	void AGregory_C::GregoryCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryCrouch");
		
		AGregory_C_GregoryCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.GregoryUnCrouch
	 * 		Flags  -> ()
	 */
	void AGregory_C::GregoryUnCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryUnCrouch");
		
		AGregory_C_GregoryUnCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ForceCrouchMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowCrouchToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ForceCrouchMode(bool Crouch, bool AllowCrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceCrouchMode");
		
		AGregory_C_ForceCrouchMode_Params params {};
		params.Crouch = Crouch;
		params.AllowCrouchToggle = AllowCrouchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.StopSprinting
	 * 		Flags  -> ()
	 */
	void AGregory_C::StopSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.StopSprinting");
		
		AGregory_C_StopSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.EjectSequence
	 * 		Flags  -> ()
	 */
	void AGregory_C::EjectSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.EjectSequence");
		
		AGregory_C_EjectSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.K2_OnStartCrouch");
		
		AGregory_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.K2_OnEndCrouch");
		
		AGregory_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature");
		
		AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature");
		
		AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ReceiveUnpossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveUnpossessed");
		
		AGregory_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.CallFreddy
	 * 		Flags  -> ()
	 */
	void AGregory_C::CallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.CallFreddy");
		
		AGregory_C_CallFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnJumped
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnJumped");
		
		AGregory_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AGregory_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnLanded");
		
		AGregory_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AGregory_C::ItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ItemCollected");
		
		AGregory_C_ItemCollected_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Held Item Instructions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::HeldItemInstructions(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Held Item Instructions");
		
		AGregory_C_HeldItemInstructions_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Event Call Freddy Instructions
	 * 		Flags  -> ()
	 */
	void AGregory_C::EventCallFreddyInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Event Call Freddy Instructions");
		
		AGregory_C_EventCallFreddyInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Return To Gregory
	 * 		Flags  -> ()
	 */
	void AGregory_C::ReturnToGregory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Return To Gregory");
		
		AGregory_C_ReturnToGregory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.TriggerSurpriseAchievement
	 * 		Flags  -> ()
	 */
	void AGregory_C::TriggerSurpriseAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.TriggerSurpriseAchievement");
		
		AGregory_C_TriggerSurpriseAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.Arm Roll__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGregory_C::ArmRoll__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Arm Roll__FinishedFunc");
		
		AGregory_C_ArmRoll__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.RollForLower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WatchUp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::RollForLower(bool WatchUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.RollForLower");
		
		AGregory_C_RollForLower_Params params {};
		params.WatchUp = WatchUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.RollForRaise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WatchUp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::RollForRaise(bool WatchUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.RollForRaise");
		
		AGregory_C_RollForRaise_Params params {};
		params.WatchUp = WatchUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SwitchItemWithAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AEquippable_C*                               NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::SwitchItemWithAnim(class AEquippable_C* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SwitchItemWithAnim");
		
		AGregory_C_SwitchItemWithAnim_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnCheckpointLoad");
		
		AGregory_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.AwardSayCheese
	 * 		Flags  -> ()
	 */
	void AGregory_C::AwardSayCheese()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AwardSayCheese");
		
		AGregory_C_AwardSayCheese_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.VisualChangeItem
	 * 		Flags  -> ()
	 */
	void AGregory_C::VisualChangeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.VisualChangeItem");
		
		AGregory_C_VisualChangeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ShowHUD
	 * 		Flags  -> ()
	 */
	void AGregory_C::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShowHUD");
		
		AGregory_C_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.HideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHideProgressWheel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::HideHUD(bool bHideProgressWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.HideHUD");
		
		AGregory_C_HideHUD_Params params {};
		params.bHideProgressWheel = bHideProgressWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.BeginInteractHold
	 * 		Flags  -> ()
	 */
	void AGregory_C::BeginInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BeginInteractHold");
		
		AGregory_C_BeginInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.CancelInteractHold
	 * 		Flags  -> ()
	 */
	void AGregory_C::CancelInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.CancelInteractHold");
		
		AGregory_C_CancelInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.SetInteractHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::SetInteractHoldProgress(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetInteractHoldProgress");
		
		AGregory_C_SetInteractHoldProgress_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ForceFlashlightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ForceFlashlightState(bool On, bool AllowPlayerToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceFlashlightState");
		
		AGregory_C_ForceFlashlightState_Params params {};
		params.On = On;
		params.AllowPlayerToggle = AllowPlayerToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.CompleteInteractHold
	 * 		Flags  -> ()
	 */
	void AGregory_C::CompleteInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.CompleteInteractHold");
		
		AGregory_C_CompleteInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.TriggerJump
	 * 		Flags  -> ()
	 */
	void AGregory_C::TriggerJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.TriggerJump");
		
		AGregory_C_TriggerJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.NonLethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.NonLethalJumpscareBPI");
		
		AGregory_C_NonLethalJumpscareBPI_Params params {};
		params.CamShakeScale = CamShakeScale;
		params.AttachmentComponent = AttachmentComponent;
		params.ActorPerformingScare = ActorPerformingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.LethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               JumpscareAudio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerfomingScare                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LethalJumpscareBPI");
		
		AGregory_C_LethalJumpscareBPI_Params params {};
		params.AttachmentComponent = AttachmentComponent;
		params.JumpscareAudio = JumpscareAudio;
		params.CanEscape = CanEscape;
		params.CamShakeScale = CamShakeScale;
		params.ActorPerfomingScare = ActorPerfomingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ForcePlayerCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowCrouchToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGregory_C::ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForcePlayerCrouch");
		
		AGregory_C_ForcePlayerCrouch_Params params {};
		params.Crouch = Crouch;
		params.AllowCrouchToggle = AllowCrouchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void AGregory_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.UpdateIcons");
		
		AGregory_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.ExecuteUbergraph_Gregory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregory_C::ExecuteUbergraph_Gregory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ExecuteUbergraph_Gregory");
		
		AGregory_C_ExecuteUbergraph_Gregory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::PickedUpFlashlight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature");
		
		AGregory_C_PickedUpFlashlight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnLethalJumpScare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature");
		
		AGregory_C_OnLethalJumpScare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnKill__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnKill__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnKill__DelegateSignature");
		
		AGregory_C_OnKill__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGregory_C::OnNonLethalScareComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature");
		
		AGregory_C_OnNonLethalScareComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGregory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGregory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gregory.Gregory_C");
		return ptr;
	}

}


