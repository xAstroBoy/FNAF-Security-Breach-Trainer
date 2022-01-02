﻿#pragma once

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

// BlueprintGeneratedClass BP_MiniGame_Activator.BP_MiniGame_Activator_C
// 0x002A (FullSize[0x0252] - InheritedSize[0x0228])
class ABP_MiniGame_Activator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGameTypeCheckDestroy*                       GameTypeCheckDestroy;                                      // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerInteractComponent_C*                  PlayerInteractComponent;                                   // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUse;                                                    // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_MiniGame_Activator_Type_E_MiniGame_Activator_Type> Type;                                                      // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Activator.BP_MiniGame_Activator_C");
		return ptr;
	}



	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void CanDeactivate(bool* CanDeactivate);
	void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
	void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
	void GetHUDInstruction(struct FText* Instruction);
	void InteractIgnoresTrace(bool* IgnoreTrace);
	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
	void UpdateUIOnTick(bool* Output);
	void GetInstructionOverride(struct FText* Instruction);
	void PlayerEnter(class UObject* Pawn, class APlayerController* PlayerController);
	void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
	void SetDeactivated();
	void OnPlayerInteractCancel();
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void LoadMiniGolfCourse(int CourseIndex);
	void Load_Mini_Game_Level(const struct FName& LevelName);
	void DeactivateObject(class AActor* Deactivator);
	void SetActivated();
	void OnActivatorDone(class AActor* Activator);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ActivateObject(class AActor* Activator);
	void ExecuteUbergraph_BP_MiniGame_Activator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif