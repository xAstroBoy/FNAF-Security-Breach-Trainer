/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Animatronic_ABP_Freddy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.TurnFunciton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Open Chest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_Freddy_C::Open_Chest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Open Chest");
		
		UAnimatronic_ABP_Freddy_C_Open_Chest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Close Chest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_Freddy_C::Close_Chest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Close Chest");
		
		UAnimatronic_ABP_Freddy_C_Close_Chest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_Freddy_C::Force_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Open");
		
		UAnimatronic_ABP_Freddy_C_Force_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Close
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_Freddy_C::Force_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.Force Close");
		
		UAnimatronic_ABP_Freddy_C_Force_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chest_close
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.AnimNotify_chestexit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.PlayWaveAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.StopwaveEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.ExecuteUbergraph_Animatronic_ABP_Freddy
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Freddy_C::ExecuteUbergraph_Animatronic_ABP_Freddy(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimatronic_ABP_Freddy_C.StaticClass
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


