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

// BlueprintGeneratedClass SaveGameActor.SaveGameActor_C
// 0x00AA (FullSize[0x02D2] - InheritedSize[0x0228])
class ASaveGameActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            SaveStationText;                                           // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                Play_sfx_saveStation_screen_glitch_lp;                     // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight1;                                               // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_ManualSavePoint_02;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_ManualSavePoint_01;                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Collection_Range;                                          // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerInteractHoldComponent_C*              PlayerInteractHoldComponent;                               // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerTrigger;                                             // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsActive;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               progressSoundPlaying;                                      // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_16BG[0x6];                                     // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameSave;                                                // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      OcclusionTrace[0x28];                                      // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               EmitterPlaying;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Glitching;                                                 // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameActor.SaveGameActor_C");
		return ptr;
	}



	void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
	void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
	void GetHUDInstruction(struct FText* Instruction);
	void InteractIgnoresTrace(bool* IgnoreTrace);
	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
	void UpdateUIOnTick(bool* Output);
	void GetInstructionOverride(struct FText* Instruction);
	bool GetCanUse();
	void OnPlayerInteractCancel();
	void BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature();
	void ReceiveBeginPlay();
	void On_World_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState);
	void CancelInteract();
	void Event_On_Game_Save();
	void ReceiveTick(float DeltaSeconds);
	void ToggleInRange(bool InRange);
	void OnCultureChanged(TEnumAsByte<fnaf9_ELocalizationCulture> Culture);
	void Update_Display_Text_Size();
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void PlayEmitter();
	void StopEmitter();
	void Setup_Display();
	void On_Clock_Time_Changed(int Hour, int Minute);
	void ExecuteUbergraph_SaveGameActor(int EntryPoint);
	void OnGameSave__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
