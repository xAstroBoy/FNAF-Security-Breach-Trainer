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

// BlueprintGeneratedClass SurvivalStartupSequence.SurvivalStartupSequence_C
// 0x0120 (FullSize[0x0348] - InheritedSize[0x0228])
class ASurvivalStartupSequence_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               SpawnChicaTrigger;                                         // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerCompleteTrigger;                                     // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateComponent*                        CompletedState;                                            // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateComponent*                        ConversationState;                                         // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             AISpawn;                                                   // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DoorRight[0x28];                                           // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DoorLeft[0x28];                                            // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UAudioComponent*                             Dialog;                                                    // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FreddySurvivalStart[0x28];                                 // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       CollectMissionName;                                        // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SkipButton[0x28];                                          // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               is_skipped;                                                // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitingForDoorLocked;                                      // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OR2G[0x6];                                     // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLobbyInstructionCardSetup>          Textures;                                                  // 0x0320(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      Screens[0x10];                                             // 0x0330(0x0010) UNKNOWN PROPERTY: ArrayProperty
	struct FTimerHandle                                SpawnChicaTimer;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvivalStartupSequence.SurvivalStartupSequence_C");
		return ptr;
	}



	void SetAllScreensToInstructionCard(TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type);
	void OnSecondAudioFinished(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void SetScreenToInstructionCard(int Screen_Index, TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type);
	void SetAllScreensToWidget(class UClass* Class);
	void SetScreenToWidget(int Screen_Index, class UClass* Class);
	void SetAllScreensToStatic();
	void SetAllScreensToTexture(int TextureIndex);
	void SetScreenToTexture(int Screen_Index, int Card_Index, TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type);
	class UTexture* GetScreenTexture(int Index);
	void SetScreenToStatic(int ScreenIndex);
	void Setup2(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void FinishInstructions();
	void Setup(bool Skip);
	void SkipIntro();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void PostGameLoad();
	void PostSaveGame();
	void BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Finish_Instructions_Part_1();
	void ReceiveBeginPlay();
	void DelaySpawnChica();
	void LockAndWait();
	void Run_Dialog_Instruction_Cards();
	void SpawnChica();
	void BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SurvivalStartupSequence(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
