﻿/**
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
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.footstep
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.footstep");
		
		UAnimatronic_ABP_Monty_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyEnd_4374FFD04F83864AB8D8DC944BB33B0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnNotifyEnd_4374FFD04F83864AB8D8DC944BB33B0D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyEnd_4374FFD04F83864AB8D8DC944BB33B0D");
		
		UAnimatronic_ABP_Monty_C_OnNotifyEnd_4374FFD04F83864AB8D8DC944BB33B0D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyBegin_4374FFD04F83864AB8D8DC944BB33B0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnNotifyBegin_4374FFD04F83864AB8D8DC944BB33B0D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyBegin_4374FFD04F83864AB8D8DC944BB33B0D");
		
		UAnimatronic_ABP_Monty_C_OnNotifyBegin_4374FFD04F83864AB8D8DC944BB33B0D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnInterrupted_4374FFD04F83864AB8D8DC944BB33B0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnInterrupted_4374FFD04F83864AB8D8DC944BB33B0D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnInterrupted_4374FFD04F83864AB8D8DC944BB33B0D");
		
		UAnimatronic_ABP_Monty_C_OnInterrupted_4374FFD04F83864AB8D8DC944BB33B0D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnBlendOut_4374FFD04F83864AB8D8DC944BB33B0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnBlendOut_4374FFD04F83864AB8D8DC944BB33B0D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnBlendOut_4374FFD04F83864AB8D8DC944BB33B0D");
		
		UAnimatronic_ABP_Monty_C_OnBlendOut_4374FFD04F83864AB8D8DC944BB33B0D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnCompleted_4374FFD04F83864AB8D8DC944BB33B0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnCompleted_4374FFD04F83864AB8D8DC944BB33B0D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnCompleted_4374FFD04F83864AB8D8DC944BB33B0D");
		
		UAnimatronic_ABP_Monty_C_OnCompleted_4374FFD04F83864AB8D8DC944BB33B0D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyEnd_29D5167C4A6E4CEC4A933997F1F8CA34
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnNotifyEnd_29D5167C4A6E4CEC4A933997F1F8CA34(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyEnd_29D5167C4A6E4CEC4A933997F1F8CA34");
		
		UAnimatronic_ABP_Monty_C_OnNotifyEnd_29D5167C4A6E4CEC4A933997F1F8CA34_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyBegin_29D5167C4A6E4CEC4A933997F1F8CA34
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnNotifyBegin_29D5167C4A6E4CEC4A933997F1F8CA34(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnNotifyBegin_29D5167C4A6E4CEC4A933997F1F8CA34");
		
		UAnimatronic_ABP_Monty_C_OnNotifyBegin_29D5167C4A6E4CEC4A933997F1F8CA34_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnInterrupted_29D5167C4A6E4CEC4A933997F1F8CA34
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnInterrupted_29D5167C4A6E4CEC4A933997F1F8CA34(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnInterrupted_29D5167C4A6E4CEC4A933997F1F8CA34");
		
		UAnimatronic_ABP_Monty_C_OnInterrupted_29D5167C4A6E4CEC4A933997F1F8CA34_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnBlendOut_29D5167C4A6E4CEC4A933997F1F8CA34
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnBlendOut_29D5167C4A6E4CEC4A933997F1F8CA34(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnBlendOut_29D5167C4A6E4CEC4A933997F1F8CA34");
		
		UAnimatronic_ABP_Monty_C_OnBlendOut_29D5167C4A6E4CEC4A933997F1F8CA34_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnCompleted_29D5167C4A6E4CEC4A933997F1F8CA34
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::OnCompleted_29D5167C4A6E4CEC4A933997F1F8CA34(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.OnCompleted_29D5167C4A6E4CEC4A933997F1F8CA34");
		
		UAnimatronic_ABP_Monty_C_OnCompleted_29D5167C4A6E4CEC4A933997F1F8CA34_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_Monty_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_Monty_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_Monty_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_Monty_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_MontyLand
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::AnimNotify_MontyLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_MontyLand");
		
		UAnimatronic_ABP_Monty_C_AnimNotify_MontyLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.SetJiggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              JiggleScaleTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShoulderpadDynamicAlpha                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TailDynamicAlpha                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::SetJiggle(float JiggleScaleTarget, float ShoulderpadDynamicAlpha, float TailDynamicAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.SetJiggle");
		
		UAnimatronic_ABP_Monty_C_SetJiggle_Params params {};
		params.JiggleScaleTarget = JiggleScaleTarget;
		params.ShoulderpadDynamicAlpha = ShoulderpadDynamicAlpha;
		params.TailDynamicAlpha = TailDynamicAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_Monty_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.JumpEvent");
		
		UAnimatronic_ABP_Monty_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.LandEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Monty_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.LandEvent");
		
		UAnimatronic_ABP_Monty_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.ExecuteUbergraph_Animatronic_ABP_Monty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Monty_C::ExecuteUbergraph_Animatronic_ABP_Monty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.ExecuteUbergraph_Animatronic_ABP_Monty");
		
		UAnimatronic_ABP_Monty_C_ExecuteUbergraph_Animatronic_ABP_Monty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_Monty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_Monty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Monty.Animatronic_ABP_Monty_C");
		return ptr;
	}

}


