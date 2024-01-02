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
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ReturnPlayerWalk
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::ReturnPlayerWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ReturnPlayerWalk");
		
		UBPI_ChowdaPlayerInput_C_ReturnPlayerWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SlowPlayerWalk
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::SlowPlayerWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SlowPlayerWalk");
		
		UBPI_ChowdaPlayerInput_C_SlowPlayerWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetWalkieTalkieRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      WalkieTalkie                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ChowdaPlayerInput_C::GetWalkieTalkieRef(class AActor** WalkieTalkie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetWalkieTalkieRef");
		
		UBPI_ChowdaPlayerInput_C_GetWalkieTalkieRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WalkieTalkie != nullptr)
			*WalkieTalkie = params.WalkieTalkie;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleWalkieTalkie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BringOutWalkie                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::ToggleWalkieTalkie(bool BringOutWalkie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleWalkieTalkie");
		
		UBPI_ChowdaPlayerInput_C_ToggleWalkieTalkie_Params params {};
		params.BringOutWalkie = BringOutWalkie;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetMaintenanceToolRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MaintenanceTool                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ChowdaPlayerInput_C::GetMaintenanceToolRef(class AActor** MaintenanceTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetMaintenanceToolRef");
		
		UBPI_ChowdaPlayerInput_C_GetMaintenanceToolRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaintenanceTool != nullptr)
			*MaintenanceTool = params.MaintenanceTool;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolReadyToGo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutAndReady                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::IsMaintenanceToolReadyToGo(bool* OutAndReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolReadyToGo");
		
		UBPI_ChowdaPlayerInput_C_IsMaintenanceToolReadyToGo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAndReady != nullptr)
			*OutAndReady = params.OutAndReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleMaintenanceTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BringOutTool                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::ToggleMaintenanceTool(bool BringOutTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleMaintenanceTool");
		
		UBPI_ChowdaPlayerInput_C_ToggleMaintenanceTool_Params params {};
		params.BringOutTool = BringOutTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpartTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  CounterpartTransform                                       (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::GetTeleportCounterpartTransform(struct FTransform* CounterpartTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpartTransform");
		
		UBPI_ChowdaPlayerInput_C_GetTeleportCounterpartTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CounterpartTransform != nullptr)
			*CounterpartTransform = params.CounterpartTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.UpdateItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_ChowdaPlayerInput_C::UpdateItemCollected(const struct FFNAFInventoryTableStruct& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.UpdateItemCollected");
		
		UBPI_ChowdaPlayerInput_C_UpdateItemCollected_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        TeleportCounterpart                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ChowdaPlayerInput_C::GetTeleportCounterpart(class UChildActorComponent** TeleportCounterpart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpart");
		
		UBPI_ChowdaPlayerInput_C_GetTeleportCounterpart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeleportCounterpart != nullptr)
			*TeleportCounterpart = params.TeleportCounterpart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsChowdaSwitchingItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSwitching                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::IsChowdaSwitchingItems(bool* IsSwitching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsChowdaSwitchingItems");
		
		UBPI_ChowdaPlayerInput_C_IsChowdaSwitchingItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSwitching != nullptr)
			*IsSwitching = params.IsSwitching;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnForceFlashlightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::OnForceFlashlightState(bool ForceOn, bool AllowPlayerToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnForceFlashlightState");
		
		UBPI_ChowdaPlayerInput_C_OnForceFlashlightState_Params params {};
		params.ForceOn = ForceOn;
		params.AllowPlayerToggle = AllowPlayerToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SetCanSwitchItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanSwitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::SetCanSwitchItem(bool CanSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SetCanSwitchItem");
		
		UBPI_ChowdaPlayerInput_C_SetCanSwitchItem_Params params {};
		params.CanSwitch = CanSwitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::IsMaintenanceToolEquipped(bool* Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolEquipped");
		
		UBPI_ChowdaPlayerInput_C_IsMaintenanceToolEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipped != nullptr)
			*Equipped = params.Equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsWalkieTalkieEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPlayerInput_C::IsWalkieTalkieEquipped(bool* Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsWalkieTalkieEquipped");
		
		UBPI_ChowdaPlayerInput_C_IsWalkieTalkieEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipped != nullptr)
			*Equipped = params.Equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SecondaryActionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ItemName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ChowdaPlayerInput_C::SecondaryActionCheck(bool* Equipped, class FName* ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SecondaryActionCheck");
		
		UBPI_ChowdaPlayerInput_C_SecondaryActionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipped != nullptr)
			*Equipped = params.Equipped;
		if (ItemName != nullptr)
			*ItemName = params.ItemName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnSwitchItem
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::OnSwitchItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnSwitchItem");
		
		UBPI_ChowdaPlayerInput_C_OnSwitchItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnToggleFlashlight
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::OnToggleFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnToggleFlashlight");
		
		UBPI_ChowdaPlayerInput_C_OnToggleFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnMaintenanceInteract
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::OnMaintenanceInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnMaintenanceInteract");
		
		UBPI_ChowdaPlayerInput_C_OnMaintenanceInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnTeleportTriggered
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::OnTeleportTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnTeleportTriggered");
		
		UBPI_ChowdaPlayerInput_C_OnTeleportTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutReleased
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::CalloutReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutReleased");
		
		UBPI_ChowdaPlayerInput_C_CalloutReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutPressed
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPlayerInput_C::CalloutPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutPressed");
		
		UBPI_ChowdaPlayerInput_C_CalloutPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ChowdaPlayerInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ChowdaPlayerInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C");
		return ptr;
	}

}


