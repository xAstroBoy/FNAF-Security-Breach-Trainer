#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass DebugMissionUI.DebugMissionUI_C
	 * Size -> 0x0150 (FullSize[0x03B0] - InheritedSize[0x0260])
	 */
	class UDebugMissionUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTitleButton_C*                                      BurntrapBoss_Button;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Chica_Button;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgHourSkipPathSelect_C*                            DbgHour3SkipPathSelect;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgHourSkipPathSelect_C*                            DbgHour6SkipPathSelect;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Hour6_Button;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MontyBoss_Button;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RoxyBoss_Button;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Skip_Button;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SkipExtraInfo;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTreeView*                                           TreeView_125;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VannyBoss_Button;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          DbgInfoTable;                                            // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MontyBossTeleportLocator[0x28];                          // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ChicaBossTeleportLocator[0x28];                          // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CompletingTasks;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5X9A[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TasksUpdated;                                            // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectedSkipPaths;                                       // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkipPathState;                                           // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RoxyBossTeleportLocator[0x28];                           // 0x0338(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VannyBossTeleportLocator[0x28];                          // 0x0360(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BurntrapBossTeleportLocator[0x28];                       // 0x0388(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void DoHourSkip();
		void OnMissionTeleportFinished();
		void TeleportPlayerToLocation();
		void EjectFromFreddy();
		void SkipIntro();
		void SpawnOrTeleportFreddy(const struct FTransform& Destination, bool SickFreddy, class AFreddy_C** Freddy);
		void SetUpTaskActivateStates(const class FName& TaskName);
		void AwardTaskItems(const class FName& TaskName);
		void CompleteMissionTask(const class FName& MissionName, int32_t InfoState);
		void UpdateDependentMissions(const class FName& MissionName, TArray<class FName>* TasksUpdated);
		void AwardItems(TArray<class FName>* Array);
		void OnBP_OnGetItemChildren_1(class UObject* Item, TArray<class UObject*>* Children);
		void PreConstruct(bool IsDesignTime);
		void OnStateChanged(EFNAFGameState NewState, EFNAFGameState PreviousState);
		void BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature(EDbgPlayerPaths NewParam);
		void BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature(EDbgPlayerPaths NewParam);
		void BndEvt__DebugMissionUI_Skip_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_Hour6_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_BurntrapBoss_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_Chica_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_MontyBoss_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_RoxyBoss_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void BndEvt__DebugMissionUI_VannyBoss_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
		void ExecuteUbergraph_DebugMissionUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
