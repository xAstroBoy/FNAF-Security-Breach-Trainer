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
	 * 		Name   -> Function MissionHUD.MissionHUD_C.Finished_3BE9F8A34119AC1E38FAF1A6AA44332C
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::Finished_3BE9F8A34119AC1E38FAF1A6AA44332C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.Finished_3BE9F8A34119AC1E38FAF1A6AA44332C");
		
		UMissionHUD_C_Finished_3BE9F8A34119AC1E38FAF1A6AA44332C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.Construct");
		
		UMissionHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.On New Mission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMissionHUD_C::OnNewMission(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On New Mission");
		
		UMissionHUD_C_OnNewMission_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.On Active Mission Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMissionHUD_C::OnActiveMissionUpdated(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Active Mission Updated");
		
		UMissionHUD_C_OnActiveMissionUpdated_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.Start Display
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::StartDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.Start Display");
		
		UMissionHUD_C_StartDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.On Fadeout Finished
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::OnFadeoutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Fadeout Finished");
		
		UMissionHUD_C_OnFadeoutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.On Mission Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMissionHUD_C::OnMissionCompleted(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Mission Completed");
		
		UMissionHUD_C_OnMissionCompleted_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.ShortTermMissionDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MissionDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               UseVariablesBelow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        LeftText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RightText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMissionHUD_C::ShortTermMissionDisplay(const class FText& MissionName, const class FText& MissionDescription, bool UseVariablesBelow, const class FText& LeftText, const class FName& KeyName, const class FText& RightText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.ShortTermMissionDisplay");
		
		UMissionHUD_C_ShortTermMissionDisplay_Params params {};
		params.MissionName = MissionName;
		params.MissionDescription = MissionDescription;
		params.UseVariablesBelow = UseVariablesBelow;
		params.LeftText = LeftText;
		params.KeyName = KeyName;
		params.RightText = RightText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.FadeOutMissionPrompt
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::FadeOutMissionPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.FadeOutMissionPrompt");
		
		UMissionHUD_C_FadeOutMissionPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.ExecuteUbergraph_MissionHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionHUD_C::ExecuteUbergraph_MissionHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.ExecuteUbergraph_MissionHUD");
		
		UMissionHUD_C_ExecuteUbergraph_MissionHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionHUD.MissionHUD_C.MoveFromCenterToTopLeft__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMissionHUD_C::MoveFromCenterToTopLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.MoveFromCenterToTopLeft__DelegateSignature");
		
		UMissionHUD_C_MoveFromCenterToTopLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionHUD.MissionHUD_C");
		return ptr;
	}

}


