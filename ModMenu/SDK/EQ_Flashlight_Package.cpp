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
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Get Anim Item Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGregoryAnimItemEnum                               AnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashlight_C::GetAnimItemType(EGregoryAnimItemEnum* AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Get Anim Item Type");
		
		AEQ_Flashlight_C_GetAnimItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimType != nullptr)
			*AnimType = params.AnimType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.PutAway
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::PutAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.PutAway");
		
		AEQ_Flashlight_C_PutAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::RandomFlicker01Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__FinishedFunc");
		
		AEQ_Flashlight_C_RandomFlicker01Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::RandomFlicker01Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__UpdateFunc");
		
		AEQ_Flashlight_C_RandomFlicker01Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_6__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__FinishedFunc");
		
		AEQ_Flashlight_C_Timeline_6__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::Timeline_6__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc");
		
		AEQ_Flashlight_C_Timeline_6__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.PrimaryAction
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::PrimaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.PrimaryAction");
		
		AEQ_Flashlight_C_PrimaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Set State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEQ_Flashlight_C::SetState(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Set State");
		
		AEQ_Flashlight_C_SetState_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.Toggle State
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::ToggleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.Toggle State");
		
		AEQ_Flashlight_C_ToggleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.ReceiveBeginPlay");
		
		AEQ_Flashlight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.RandomPowerFlicker
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::RandomPowerFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.RandomPowerFlicker");
		
		AEQ_Flashlight_C_RandomPowerFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.PowerDownFlicker
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::PowerDownFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.PowerDownFlicker");
		
		AEQ_Flashlight_C_PowerDownFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.StartRandomPowerFlickerTimer
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::StartRandomPowerFlickerTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.StartRandomPowerFlickerTimer");
		
		AEQ_Flashlight_C_StartRandomPowerFlickerTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashlight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.ReceiveTick");
		
		AEQ_Flashlight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.ForceOff
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::ForceOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.ForceOff");
		
		AEQ_Flashlight_C_ForceOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.AudioFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashlight_C::AudioFlicker(float NewIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.AudioFlicker");
		
		AEQ_Flashlight_C_AudioFlicker_Params params {};
		params.NewIntensity = NewIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.ExecuteUbergraph_EQ_Flashlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashlight_C::ExecuteUbergraph_EQ_Flashlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.ExecuteUbergraph_EQ_Flashlight");
		
		AEQ_Flashlight_C_ExecuteUbergraph_EQ_Flashlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.OnFlashlightPowerOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::OnFlashlightPowerOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.OnFlashlightPowerOut__DelegateSignature");
		
		AEQ_Flashlight_C_OnFlashlightPowerOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.FlashlightStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEQ_Flashlight_C::FlashlightStateChange__DelegateSignature(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.FlashlightStateChange__DelegateSignature");
		
		AEQ_Flashlight_C_FlashlightStateChange__DelegateSignature_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashlight.EQ_Flashlight_C.AttemptActivateDeadFlashlight__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEQ_Flashlight_C::AttemptActivateDeadFlashlight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashlight.EQ_Flashlight_C.AttemptActivateDeadFlashlight__DelegateSignature");
		
		AEQ_Flashlight_C_AttemptActivateDeadFlashlight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEQ_Flashlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQ_Flashlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQ_Flashlight.EQ_Flashlight_C");
		return ptr;
	}

}


