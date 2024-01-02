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
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMediaPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Tick");
		
		UCinematicMediaPlayerUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCinematicMediaPlayerUI_C::Play(const struct FCinematicCutscene& CinematicCutscene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Play");
		
		UCinematicMediaPlayerUI_C_Play_Params params {};
		params.CinematicCutscene = CinematicCutscene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Stop
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Stop");
		
		UCinematicMediaPlayerUI_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 1
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::EyesShut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 1");
		
		UCinematicMediaPlayerUI_C_EyesShut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 2
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::EyesShut2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 2");
		
		UCinematicMediaPlayerUI_C_EyesShut2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 1
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::EyesOpen1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 1");
		
		UCinematicMediaPlayerUI_C_EyesOpen1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 2
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::EyesOpen2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 2");
		
		UCinematicMediaPlayerUI_C_EyesOpen2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Begin Video
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::BeginVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Begin Video");
		
		UCinematicMediaPlayerUI_C_BeginVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.NewGameIntroVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCinematicMediaPlayerUI_C::NewGameIntroVideo(const struct FCinematicCutscene& CinematicCutscene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.NewGameIntroVideo");
		
		UCinematicMediaPlayerUI_C_NewGameIntroVideo_Params params {};
		params.CinematicCutscene = CinematicCutscene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.StopIntroVideo
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::StopIntroVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.StopIntroVideo");
		
		UCinematicMediaPlayerUI_C_StopIntroVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCinematicMediaPlayerUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.PreConstruct");
		
		UCinematicMediaPlayerUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.ExecuteUbergraph_CinematicMediaPlayerUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMediaPlayerUI_C::ExecuteUbergraph_CinematicMediaPlayerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.ExecuteUbergraph_CinematicMediaPlayerUI");
		
		UCinematicMediaPlayerUI_C_ExecuteUbergraph_CinematicMediaPlayerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.OnStop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCinematicMediaPlayerUI_C::OnStop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.OnStop__DelegateSignature");
		
		UCinematicMediaPlayerUI_C_OnStop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCinematicMediaPlayerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicMediaPlayerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CinematicMediaPlayerUI.CinematicMediaPlayerUI_C");
		return ptr;
	}

}


