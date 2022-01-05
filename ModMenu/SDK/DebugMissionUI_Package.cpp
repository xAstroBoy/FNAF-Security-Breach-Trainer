/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "DebugMissionUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.DoHourSkip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.OnMissionTeleportFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.TeleportPlayerToLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.EjectFromFreddy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.SkipIntro
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Destination                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               SickFreddy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AFreddy_C*                                   Freddy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::Spawn_Or_Teleport_Freddy(const struct FTransform& Destination, bool SickFreddy, class AFreddy_C** Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.Spawn Or Teleport Freddy");
		
		UDebugMissionUI_C_Spawn_Or_Teleport_Freddy_Params params {};
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.SetUpTaskActivateStates
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.AwardTaskItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.CompleteMissionTask
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                InfoState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::CompleteMissionTask(const class FName& MissionName, int InfoState)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.UpdateDependentMissions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                TasksUpdated                                               (Parm, OutParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.AwardItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.OnBP_OnGetItemChildren_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Children                                                   (Parm, OutParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.On State Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EFNAFGameState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		fnaf9_EFNAFGameState                               PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::On_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.On State Changed");
		
		UDebugMissionUI_C_On_State_Changed_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDebugMissionUI_C::BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMissionUI.DebugMissionUI_C.BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UDebugMissionUI_C_BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugMissionUI.DebugMissionUI_C.ExecuteUbergraph_DebugMissionUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMissionUI_C::ExecuteUbergraph_DebugMissionUI(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDebugMissionUI_C.StaticClass
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


