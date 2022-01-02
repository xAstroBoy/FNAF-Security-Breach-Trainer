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

// BlueprintGeneratedClass Collectible.Collectible_C
// 0x005A (FullSize[0x0282] - InheritedSize[0x0228])
class ACollectible_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryConditionalComponent*              InventoryConditional;                                      // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameTypeCheckDestroy*                       GameTypeCheckDestroy;                                      // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            CollectionRange;                                           // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerInteractHoldComponent_C*              PlayerInteractHoldComponent;                               // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               CanCollect;                                                // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BI3Q[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemName;                                                  // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WJ4O[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                               BeginCollectEvent;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreLineTrace;                                           // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_ECameraAngleFlags                            InteractAnglesToCheck;                                     // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Collectible.Collectible_C");
		return ptr;
	}



	void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
	void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
	void GetHUDInstruction(struct FText* Instruction);
	void InteractIgnoresTrace(bool* IgnoreTrace);
	void GetInstructionOverride(struct FText* Instruction);
	void UpdateUIOnTick(bool* Output);
	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
	void OnFailure_D3AC52D842E427EB7E4EDAB625EC5B5E();
	void OnSuccess_D3AC52D842E427EB7E4EDAB625EC5B5E();
	void OnFailure_3BC4A1A24EC40E0AB1D7189ADE855CD5(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_3BC4A1A24EC40E0AB1D7189ADE855CD5(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnCollect();
	void OnBeginCollect();
	void ReceiveBeginPlay();
	void OnCancelCollect();
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void OnLoadCollected();
	void BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature();
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void OnPlayerInteractCancel();
	void CheckForSugarHighAchievement();
	void ExecuteUbergraph_Collectible(int EntryPoint);
	void OnCollected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
