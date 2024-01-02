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
	 * 		Name   -> Function BPI_Player.BPI_Player_C.IsPlayerCurrentlyMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerMoving                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::IsPlayerCurrentlyMoving(bool* IsPlayerMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.IsPlayerCurrentlyMoving");
		
		UBPI_Player_C_IsPlayerCurrentlyMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlayerMoving != nullptr)
			*IsPlayerMoving = params.IsPlayerMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void UBPI_Player_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.UpdateIcons");
		
		UBPI_Player_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.GetFlashlightActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FlashlightActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Player_C::GetFlashlightActor(class AActor** FlashlightActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.GetFlashlightActor");
		
		UBPI_Player_C_GetFlashlightActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlashlightActor != nullptr)
			*FlashlightActor = params.FlashlightActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.IsPlayerUsingFazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsingFazwatch                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::IsPlayerUsingFazwatch(bool* IsUsingFazwatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.IsPlayerUsingFazwatch");
		
		UBPI_Player_C_IsPlayerUsingFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsingFazwatch != nullptr)
			*IsUsingFazwatch = params.IsUsingFazwatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.LethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               JumpscareAudio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerfomingScare                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Player_C::LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.LethalJumpscareBPI");
		
		UBPI_Player_C_LethalJumpscareBPI_Params params {};
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
	 * 		Name   -> Function BPI_Player.BPI_Player_C.NonLethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Player_C::NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.NonLethalJumpscareBPI");
		
		UBPI_Player_C_NonLethalJumpscareBPI_Params params {};
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
	 * 		Name   -> Function BPI_Player.BPI_Player_C.LastItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   ItemInfo                                                   (Parm, OutParm)
	 */
	void UBPI_Player_C::LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.LastItemCollected");
		
		UBPI_Player_C_LastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemInfo != nullptr)
			*ItemInfo = params.ItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.ForcePlayerCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowCrouchToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.ForcePlayerCrouch");
		
		UBPI_Player_C_ForcePlayerCrouch_Params params {};
		params.Crouch = Crouch;
		params.AllowCrouchToggle = AllowCrouchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.IsPlayerFlashlightActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::IsPlayerFlashlightActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.IsPlayerFlashlightActive");
		
		UBPI_Player_C_IsPlayerFlashlightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.ForceFlashlightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::ForceFlashlightState(bool On, bool AllowPlayerToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.ForceFlashlightState");
		
		UBPI_Player_C_ForceFlashlightState_Params params {};
		params.On = On;
		params.AllowPlayerToggle = AllowPlayerToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.RaiseArms
	 * 		Flags  -> ()
	 */
	void UBPI_Player_C::RaiseArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.RaiseArms");
		
		UBPI_Player_C_RaiseArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.LowerArms
	 * 		Flags  -> ()
	 */
	void UBPI_Player_C::LowerArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.LowerArms");
		
		UBPI_Player_C_LowerArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.Disable Jump Land Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::DisableJumpLandAudio(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.Disable Jump Land Audio");
		
		UBPI_Player_C_DisableJumpLandAudio_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.VisualChangeItem
	 * 		Flags  -> ()
	 */
	void UBPI_Player_C::VisualChangeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.VisualChangeItem");
		
		UBPI_Player_C_VisualChangeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.IsSwitchingItems
	 * 		Flags  -> ()
	 */
	bool UBPI_Player_C::IsSwitchingItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.IsSwitchingItems");
		
		UBPI_Player_C_IsSwitchingItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.IsInAir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAir                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::IsInAir(bool* InAir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.IsInAir");
		
		UBPI_Player_C_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAir != nullptr)
			*InAir = params.InAir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Player_C::PlayerEnteringExitingFreddy(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy");
		
		UBPI_Player_C_PlayerEnteringExitingFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Player.BPI_Player_C");
		return ptr;
	}

}


