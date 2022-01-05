/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FreddyOverlay_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.FazNotification_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UFreddyOverlay_C::FazNotification_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.FazNotification_Visibility");
		
		UFreddyOverlay_C_FazNotification_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.Get_ExitText_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UFreddyOverlay_C::Get_ExitText_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.Get_ExitText_Visibility");
		
		UFreddyOverlay_C_Get_ExitText_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.StopWidgetAnimations
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFreddyOverlay_C::StopWidgetAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.StopWidgetAnimations");
		
		UFreddyOverlay_C_StopWidgetAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFreddyOverlay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.PreConstruct");
		
		UFreddyOverlay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.DestroyThisHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreddyOverlay_C::DestroyThisHUD(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.DestroyThisHUD");
		
		UFreddyOverlay_C_DestroyThisHUD_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.BndEvt__WI_PowerLevel_K2Node_ComponentBoundEvent_0_LowPowerAlert__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFreddyOverlay_C::BndEvt__WI_PowerLevel_K2Node_ComponentBoundEvent_0_LowPowerAlert__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.BndEvt__WI_PowerLevel_K2Node_ComponentBoundEvent_0_LowPowerAlert__DelegateSignature");
		
		UFreddyOverlay_C_BndEvt__WI_PowerLevel_K2Node_ComponentBoundEvent_0_LowPowerAlert__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.ChangeBackgroundImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFreddyOverlay_C::ChangeBackgroundImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.ChangeBackgroundImage");
		
		UFreddyOverlay_C_ChangeBackgroundImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFreddyOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.Construct");
		
		UFreddyOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyOverlay.FreddyOverlay_C.ExecuteUbergraph_FreddyOverlay
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreddyOverlay_C::ExecuteUbergraph_FreddyOverlay(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOverlay.FreddyOverlay_C.ExecuteUbergraph_FreddyOverlay");
		
		UFreddyOverlay_C_ExecuteUbergraph_FreddyOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFreddyOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreddyOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FreddyOverlay.FreddyOverlay_C");
		return ptr;
	}

}


