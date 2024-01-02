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
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.TurnFunciton
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::TurnFunciton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.TurnFunciton");
		
		UAnimatronic_ABP_Freddy_C_TurnFunciton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.footstep
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.footstep");
		
		UAnimatronic_ABP_Freddy_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Freddy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_Freddy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_Freddy_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.OnAnimInstanceSwap");
		
		UAnimatronic_ABP_Freddy_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Freddy_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.SetHeadAimTarget");
		
		UAnimatronic_ABP_Freddy_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_Freddy_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.HeadAimEvent");
		
		UAnimatronic_ABP_Freddy_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_Freddy_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_Freddy_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Open Chest
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::OpenChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Open Chest");
		
		UAnimatronic_ABP_Freddy_C_OpenChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Close Chest
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::CloseChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Close Chest");
		
		UAnimatronic_ABP_Freddy_C_CloseChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Open
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::ForceOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Open");
		
		UAnimatronic_ABP_Freddy_C_ForceOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Close
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Close");
		
		UAnimatronic_ABP_Freddy_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.CanJumpscareEvent");
		
		UAnimatronic_ABP_Freddy_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_open
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::AnimNotify_chest_open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_open");
		
		UAnimatronic_ABP_Freddy_C_AnimNotify_chest_open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_close
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::AnimNotify_chest_close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_close");
		
		UAnimatronic_ABP_Freddy_C_AnimNotify_chest_close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chestexit
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::AnimNotify_chestexit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chestexit");
		
		UAnimatronic_ABP_Freddy_C_AnimNotify_chestexit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.PlayWaveAnim
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::PlayWaveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.PlayWaveAnim");
		
		UAnimatronic_ABP_Freddy_C_PlayWaveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.StopwaveEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Freddy_C::StopwaveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.StopwaveEvent");
		
		UAnimatronic_ABP_Freddy_C_StopwaveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.ExecuteUbergraph_Animatronic_ABP_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Freddy_C::ExecuteUbergraph_Animatronic_ABP_Freddy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.ExecuteUbergraph_Animatronic_ABP_Freddy");
		
		UAnimatronic_ABP_Freddy_C_ExecuteUbergraph_Animatronic_ABP_Freddy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_Freddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_Freddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C");
		return ptr;
	}

}


