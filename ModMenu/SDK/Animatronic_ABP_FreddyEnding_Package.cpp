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
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.TurnFunciton
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::TurnFunciton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.TurnFunciton");
		
		UAnimatronic_ABP_FreddyEnding_C_TurnFunciton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.footstep
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.footstep");
		
		UAnimatronic_ABP_FreddyEnding_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_FreddyEnding_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_FreddyEnding_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_FreddyEnding_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.OnAnimInstanceSwap");
		
		UAnimatronic_ABP_FreddyEnding_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_FreddyEnding_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.SetHeadAimTarget");
		
		UAnimatronic_ABP_FreddyEnding_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_FreddyEnding_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.HeadAimEvent");
		
		UAnimatronic_ABP_FreddyEnding_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_FreddyEnding_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_FreddyEnding_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Open Chest
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::OpenChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Open Chest");
		
		UAnimatronic_ABP_FreddyEnding_C_OpenChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Close Chest
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::CloseChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Close Chest");
		
		UAnimatronic_ABP_FreddyEnding_C_CloseChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Open
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::ForceOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Open");
		
		UAnimatronic_ABP_FreddyEnding_C_ForceOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Close
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Close");
		
		UAnimatronic_ABP_FreddyEnding_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.CanJumpscareEvent");
		
		UAnimatronic_ABP_FreddyEnding_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_open
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::AnimNotify_chest_open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_open");
		
		UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chest_open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_close
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::AnimNotify_chest_close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_close");
		
		UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chest_close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chestexit
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_FreddyEnding_C::AnimNotify_chestexit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chestexit");
		
		UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chestexit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_FreddyEnding_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.VoAnimEvent");
		
		UAnimatronic_ABP_FreddyEnding_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.ExecuteUbergraph_Animatronic_ABP_FreddyEnding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_FreddyEnding_C::ExecuteUbergraph_Animatronic_ABP_FreddyEnding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.ExecuteUbergraph_Animatronic_ABP_FreddyEnding");
		
		UAnimatronic_ABP_FreddyEnding_C_ExecuteUbergraph_Animatronic_ABP_FreddyEnding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_FreddyEnding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_FreddyEnding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C");
		return ptr;
	}

}


