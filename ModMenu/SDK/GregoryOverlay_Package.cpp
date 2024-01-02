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
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.RunIconToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGregoryOverlay_C::RunIconToggle(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.RunIconToggle");
		
		UGregoryOverlay_C_RunIconToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.CrouchToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGregoryOverlay_C::CrouchToggle(bool InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.CrouchToggle");
		
		UGregoryOverlay_C_CrouchToggle_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.GetCorrentPawnCrouchIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 CrouchingIcon                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::GetCorrentPawnCrouchIcon(class UUserWidget** CrouchingIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.GetCorrentPawnCrouchIcon");
		
		UGregoryOverlay_C_GetCorrentPawnCrouchIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchingIcon != nullptr)
			*CrouchingIcon = params.CrouchingIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UGregoryOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.Construct");
		
		UGregoryOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      NewImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::ChangeBackgroundImage(class UImage* NewImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage");
		
		UGregoryOverlay_C_ChangeBackgroundImage_Params params {};
		params.NewImage = NewImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::DestroyThisHUD(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD");
		
		UGregoryOverlay_C_DestroyThisHUD_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ToggleReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowRedDot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGregoryOverlay_C::ToggleReticle(bool ShowRedDot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ToggleReticle");
		
		UGregoryOverlay_C_ToggleReticle_Params params {};
		params.ShowRedDot = ShowRedDot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AEquippable_C*                               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::ShowHeldItemWidget(class AEquippable_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget");
		
		UGregoryOverlay_C_ShowHeldItemWidget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideProgressWheel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGregoryOverlay_C::Hide(bool HideProgressWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.Hide");
		
		UGregoryOverlay_C_Hide_Params params {};
		params.HideProgressWheel = HideProgressWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Show
	 * 		Flags  -> ()
	 */
	void UGregoryOverlay_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.Show");
		
		UGregoryOverlay_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ShowFlashlightPowerLevel
	 * 		Flags  -> ()
	 */
	void UGregoryOverlay_C::ShowFlashlightPowerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ShowFlashlightPowerLevel");
		
		UGregoryOverlay_C_ShowFlashlightPowerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::ExecuteUbergraph_GregoryOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay");
		
		UGregoryOverlay_C_ExecuteUbergraph_GregoryOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGregoryOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGregoryOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GregoryOverlay.GregoryOverlay_C");
		return ptr;
	}

}


