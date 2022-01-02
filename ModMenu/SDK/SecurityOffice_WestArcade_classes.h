#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SecurityOffice_WestArcade.SecurityOffice_WestArcade_C
// 0x0207 (FullSize[0x04B8] - InheritedSize[0x02B1])
class ASecurityOffice_WestArcade_C : public AMGM_OfficeGameManger_C
{
public:
	unsigned char                                      UnknownData_41DV[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Monty_Post_Game_Spawn;                                     // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Monty_Spawn;                                               // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Chica_Spawn;                                               // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        West_Arcade_Office;                                        // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AButtonBase_C*                               DJButton_2;                                                // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButtonBase_C*                               DJButton_3;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButtonBase_C*                               DJButton_4;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButtonBase_C*                               DJButton_5;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADJMusicHandler_C*                           BeatManager;                                               // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADoorManager_C*                              DoorManager;                                               // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButtonBase_C*                               DJButton_6;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumButtonsActivated;                                       // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MissionName;                                               // 0x0324(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WDPH[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Animation_Land_Mines[0x10];                                // 0x032C(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class ADJMusicMan_C*                               Spawned_DJ_Music_Man;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Hallway_Chase_Spawn[0x28];                                 // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Bathroom_Spawn[0x28];                                      // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class AAnimationMusicManTeleportSpawnTrigger_C*    Current_MM_Owner;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LightingMaterialManager[0x10];                             // 0x03A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<struct FString>                             LightingMaterialEvents;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<struct FString, struct FAnimBP_BaseInteractionsArray> Light_Interactions;                                        // 0x03C0(0x0050) (Edit, BlueprintVisible)
	class APRE_BadgeHolder_WestArcade_C*               Badge_Holder;                                              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Chica;                                                     // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Monty_Patrol_Path[0x28];                                   // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class APawn*                                       Monty;                                                     // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanRepair;                                                 // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YIJ6[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADJMusicMan_Booth_C*                         DJMM_Booth;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Chica_Patrol_Path[0x28];                                   // 0x0460(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              MusicState;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VZDJ[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MusicHandler[0x28];                                        // 0x048C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOffice_WestArcade.SecurityOffice_WestArcade_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
	void CheckIfPlayer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void LightInteractionsHelper(const struct FString& Key);
	void Can_Spawn_AI(bool* Can_Spawn);
	void Button_Logic(class AButtonBase_C* Current_Button);
	void On_Start();
	void UpdateMission(int InfoState);
	void OnActivatorDone(class AActor* Activator);
	void SetActivated();
	void DeactivateObject(class AActor* Deactivator);
	void SetDeactivated();
	void ActivateObject(class AActor* Activator);
	void Button_1_Activated();
	void Button_2_Activated();
	void Other_Button_Activated(class AButtonBase_C* Sender);
	void ReceiveBeginPlay();
	void On_End_Chase_Sequence();
	void BndEvt__GameBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UpdateMusic();
	void Monty_Post_Game_Spawn_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_SecurityOffice_WestArcade(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
