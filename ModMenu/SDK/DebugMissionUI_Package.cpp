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
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.DoHourSkip
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::DoHourSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.DoHourSkip");
		
		UDebugMissionUI_C_DoHourSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.OnMissionTeleportFinished
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::OnMissionTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.OnMissionTeleportFinished");
		
		UDebugMissionUI_C_OnMissionTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.TeleportPlayerToLocation
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::TeleportPlayerToLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.TeleportPlayerToLocation");
		
		UDebugMissionUI_C_TeleportPlayerToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.EjectFromFreddy
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::EjectFromFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.EjectFromFreddy");
		
		UDebugMissionUI_C_EjectFromFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.SkipIntro
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::SkipIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.SkipIntro");
		
		UDebugMissionUI_C_SkipIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Destination                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               SickFreddy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AFreddy_C*                                   Freddy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::SpawnOrTeleportFreddy(const struct FTransform& Destination, bool SickFreddy, class AFreddy_C** Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy");
		
		UDebugMissionUI_C_SpawnOrTeleportFreddy_Params params {};
		params.Destination = Destination;
		params.SickFreddy = SickFreddy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Freddy != nullptr)
			*Freddy = params.Freddy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.SetUpTaskActivateStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TaskName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::SetUpTaskActivateStates(const class FName& TaskName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.SetUpTaskActivateStates");
		
		UDebugMissionUI_C_SetUpTaskActivateStates_Params params {};
		params.TaskName = TaskName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.AwardTaskItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TaskName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::AwardTaskItems(const class FName& TaskName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.AwardTaskItems");
		
		UDebugMissionUI_C_AwardTaskItems_Params params {};
		params.TaskName = TaskName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.CompleteMissionTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InfoState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::CompleteMissionTask(const class FName& MissionName, int32_t InfoState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.CompleteMissionTask");
		
		UDebugMissionUI_C_CompleteMissionTask_Params params {};
		params.MissionName = MissionName;
		params.InfoState = InfoState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.UpdateDependentMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                TasksUpdated                                               (Parm, OutParm)
	 */
	void UDebugMissionUI_C::UpdateDependentMissions(const class FName& MissionName, TArray<class FName>* TasksUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.UpdateDependentMissions");
		
		UDebugMissionUI_C_UpdateDependentMissions_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TasksUpdated != nullptr)
			*TasksUpdated = params.TasksUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.AwardItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugMissionUI_C::AwardItems(TArray<class FName>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.AwardItems");
		
		UDebugMissionUI_C_AwardItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.OnBP_OnGetItemChildren_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Children                                                   (Parm, OutParm)
	 */
	void UDebugMissionUI_C::OnBP_OnGetItemChildren_1(class UObject* Item, TArray<class UObject*>* Children)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.OnBP_OnGetItemChildren_1");
		
		UDebugMissionUI_C_OnBP_OnGetItemChildren_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Children != nullptr)
			*Children = params.Children;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMissionUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.PreConstruct");
		
		UDebugMissionUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.On State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFGameState                                     PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::OnStateChanged(EFNAFGameState NewState, EFNAFGameState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.On State Changed");
		
		UDebugMissionUI_C_OnStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDbgPlayerPaths                                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature(EDbgPlayerPaths NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDbgPlayerPaths                                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature(EDbgPlayerPaths NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMissionUI_C::BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.ExecuteUbergraph_DebugMissionUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::ExecuteUbergraph_DebugMissionUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.ExecuteUbergraph_DebugMissionUI");
		
		UDebugMissionUI_C_ExecuteUbergraph_DebugMissionUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMissionUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMissionUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugMissionUI.DebugMissionUI_C");
		return ptr;
	}

}


