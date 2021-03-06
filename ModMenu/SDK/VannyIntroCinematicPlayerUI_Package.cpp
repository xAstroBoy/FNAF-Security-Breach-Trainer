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
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVannyIntroCinematicPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Tick");
		
		UVannyIntroCinematicPlayerUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.VannyIntroVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::VannyIntroVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.VannyIntroVideo");
		
		UVannyIntroCinematicPlayerUI_C_VannyIntroVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.StopVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::StopVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.StopVideo");
		
		UVannyIntroCinematicPlayerUI_C_StopVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.MakeTextVisibleAgain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::MakeTextVisibleAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.MakeTextVisibleAgain");
		
		UVannyIntroCinematicPlayerUI_C_MakeTextVisibleAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.StartTextFadeAway
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::StartTextFadeAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.StartTextFadeAway");
		
		UVannyIntroCinematicPlayerUI_C_StartTextFadeAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.SetText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::SetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.SetText");
		
		UVannyIntroCinematicPlayerUI_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.PlayVanny00004
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::PlayVanny00004()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.PlayVanny00004");
		
		UVannyIntroCinematicPlayerUI_C_PlayVanny00004_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.PlayFreddy00175
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::PlayFreddy00175()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.PlayFreddy00175");
		
		UVannyIntroCinematicPlayerUI_C_PlayFreddy00175_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Start Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::Start_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Start Hold Timer");
		
		UVannyIntroCinematicPlayerUI_C_Start_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Stop Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::Stop_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.Stop Hold Timer");
		
		UVannyIntroCinematicPlayerUI_C_Stop_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.OnMediaOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UVannyIntroCinematicPlayerUI_C::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.OnMediaOpened");
		
		UVannyIntroCinematicPlayerUI_C_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.ExecuteUbergraph_VannyIntroCinematicPlayerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVannyIntroCinematicPlayerUI_C::ExecuteUbergraph_VannyIntroCinematicPlayerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.ExecuteUbergraph_VannyIntroCinematicPlayerUI");
		
		UVannyIntroCinematicPlayerUI_C_ExecuteUbergraph_VannyIntroCinematicPlayerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.OnStopFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UVannyIntroCinematicPlayerUI_C::OnStopFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C.OnStopFinished__DelegateSignature");
		
		UVannyIntroCinematicPlayerUI_C_OnStopFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVannyIntroCinematicPlayerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVannyIntroCinematicPlayerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VannyIntroCinematicPlayerUI.VannyIntroCinematicPlayerUI_C");
		return ptr;
	}

}


