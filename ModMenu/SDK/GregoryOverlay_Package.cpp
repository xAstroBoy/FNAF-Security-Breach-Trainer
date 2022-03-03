/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.LoadHud
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGregoryOverlay_C::LoadHud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.LoadHud");
		
		UGregoryOverlay_C_LoadHud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      New_Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGregoryOverlay_C::ChangeBackgroundImage(class UImage* New_Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage");
		
		UGregoryOverlay_C_ChangeBackgroundImage_Params params {};
		params.New_Image = New_Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ToggleReticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HoldingFazerBlaster                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGregoryOverlay_C::ToggleReticle(bool HoldingFazerBlaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ToggleReticle");
		
		UGregoryOverlay_C_ToggleReticle_Params params {};
		params.HoldingFazerBlaster = HoldingFazerBlaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGregoryOverlay_C::ShowHeldItemWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget");
		
		UGregoryOverlay_C_ShowHeldItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Hide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.Show
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay
	 * 		Flags  -> (Final)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGregoryOverlay_C.StaticClass
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


