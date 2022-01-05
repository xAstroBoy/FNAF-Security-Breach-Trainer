#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Size -> 0x0150 (FullSize[0x0380] - InheritedSize[0x0230])
	 */
	class UDebugMissionUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BurntrapBossButton;                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ChicaBossButton;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgHourSkipPathSelect_C*                            DbgHour3SkipPathSelect;                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgHourSkipPathSelect_C*                            DbgHour6SkipPathSelect;                                  // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MontyBossButton;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RoxyBossButton;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SkipCurrentGameButton;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SkipExtraInfo;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             StartHour6Button;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTreeView*                                           TreeView_125;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VannyBossButton;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          DbgInfoTable;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MontyBossTeleportLocator[0x28];                          // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ChicaBossTeleportLocator[0x28];                          // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CompletingTasks;                                         // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJY4[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TasksUpdated;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int                                                        SelectedSkipPaths;                                       // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        SkipPathState;                                           // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RoxyBossTeleportLocator[0x28];                           // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VannyBossTeleportLocator[0x28];                          // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BurntrapBossTeleportLocator[0x28];                       // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void DoHourSkip();
		void OnMissionTeleportFinished();
		void TeleportPlayerToLocation();
		void EjectFromFreddy();
		void SkipIntro();
		void Spawn_Or_Teleport_Freddy(const struct FTransform& Destination, bool SickFreddy, class AFreddy_C** Freddy);
		void SetUpTaskActivateStates(const class FName& TaskName);
		void AwardTaskItems(const class FName& TaskName);
		void CompleteMissionTask(const class FName& MissionName, int InfoState);
		void UpdateDependentMissions(const class FName& MissionName, TArray<class FName>* TasksUpdated);
		void AwardItems(TArray<class FName>* Array);
		void OnBP_OnGetItemChildren_1(class UObject* Item, TArray<class UObject*>* Children);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SkipCurrentGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void On_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState);
		void BndEvt__MontyBossButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ChicaBossButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__StartHour6Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DbgHour3SkipPathSelect_K2Node_ComponentBoundEvent_4_OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam);
		void BndEvt__DbgHour6SkipPathSelect_K2Node_ComponentBoundEvent_5_OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam);
		void BndEvt__RoxyBossButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VannyBossButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BurntrapBossButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_DebugMissionUI(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
