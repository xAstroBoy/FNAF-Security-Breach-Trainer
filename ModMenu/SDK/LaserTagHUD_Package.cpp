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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Get_CurrentHighScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ULaserTagHUD_C::Get_CurrentHighScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Get_CurrentHighScore");
		
		ULaserTagHUD_C_Get_CurrentHighScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Get_LaserTagCountdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ULaserTagHUD_C::Get_LaserTagCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Get_LaserTagCountdown");
		
		ULaserTagHUD_C_Get_LaserTagCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Get_CurrentScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULaserTagHUD_C::Get_CurrentScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Get_CurrentScore");
		
		ULaserTagHUD_C_Get_CurrentScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.GameOver_Text
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULaserTagHUD_C::GameOver_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.GameOver_Text");
		
		ULaserTagHUD_C_GameOver_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Get_CrossHairLaserGun_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility ULaserTagHUD_C::Get_CrossHairLaserGun_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Get_CrossHairLaserGun_Visibility");
		
		ULaserTagHUD_C_Get_CrossHairLaserGun_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Get_CountdownLaserTag_CountdownTimer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULaserTagHUD_C::Get_CountdownLaserTag_CountdownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Get_CountdownLaserTag_CountdownTimer");
		
		ULaserTagHUD_C_Get_CountdownLaserTag_CountdownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.GameTimerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULaserTagHUD_C::GameTimerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.GameTimerCountdown");
		
		ULaserTagHUD_C_GameTimerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.GameSessionUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULaserTagHUD_C::GameSessionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.GameSessionUI");
		
		ULaserTagHUD_C_GameSessionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.GameOverUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULaserTagHUD_C::GameOverUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.GameOverUI");
		
		ULaserTagHUD_C_GameOverUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.HideUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULaserTagHUD_C::HideUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.HideUI");
		
		ULaserTagHUD_C_HideUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULaserTagHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Construct");
		
		ULaserTagHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.Display Go Text
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULaserTagHUD_C::Display_Go_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.Display Go Text");
		
		ULaserTagHUD_C_Display_Go_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTagHUD.LaserTagHUD_C.ExecuteUbergraph_LaserTagHUD
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULaserTagHUD_C::ExecuteUbergraph_LaserTagHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTagHUD.LaserTagHUD_C.ExecuteUbergraph_LaserTagHUD");
		
		ULaserTagHUD_C_ExecuteUbergraph_LaserTagHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULaserTagHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULaserTagHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LaserTagHUD.LaserTagHUD_C");
		return ptr;
	}

}


