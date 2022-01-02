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

// BlueprintGeneratedClass BP_StageButton.BP_StageButton_C
// 0x0072 (FullSize[0x029A] - InheritedSize[0x0228])
class ABP_StageButton_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorldStateHandlerComponent*                 StageShowStateHandler;                                     // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        BasicButton;                                               // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_StagePodium_PodiumPart1_low;                           // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_StagePodium_PodiumBase_low;                            // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_StagePodium_PanelRight_low;                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_StagePodium_PanelLeft_low;                             // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Down__Up_PanelMovement_8202549145C5D33481ED5BAEF47C902D;   // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Down__Up_PodiumMovement_8202549145C5D33481ED5BAEF47C902D;  // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Down__Up__Direction_8202549145C5D33481ED5BAEF47C902D;      // 0x0270(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HD03[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Down__Up;                                                  // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Up__Down_PanelMovement_9DB41A8843B1A0A434605EA13A61845E;   // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Up__Down_PodiumMovement_9DB41A8843B1A0A434605EA13A61845E;  // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Up__Down__Direction_9DB41A8843B1A0A434605EA13A61845E;      // 0x0288(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XOR8[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Up__Down;                                                  // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverridePosition;                                          // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Up_;                                                       // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_StageButton.BP_StageButton_C");
		return ptr;
	}



	void GetButton(class ABasicButton_C** AsBasic_Button);
	void UserConstructionScript();
	void Up__Down__FinishedFunc();
	void Up__Down__UpdateFunc();
	void Down__Up__FinishedFunc();
	void Down__Up__UpdateFunc();
	void PostSaveGame();
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void MoveDown();
	void MoveUp();
	void ChangeColor(bool ChangeColor);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
	void ReceiveBeginPlay();
	void ButtonPressed();
	void Startup();
	void PostGameLoad();
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void ExecuteUbergraph_BP_StageButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
