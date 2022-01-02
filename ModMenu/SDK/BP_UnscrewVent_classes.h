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

// BlueprintGeneratedClass BP_UnscrewVent.BP_UnscrewVent_C
// 0x0034 (FullSize[0x0290] - InheritedSize[0x025C])
class ABP_UnscrewVent_C : public ABP_VentCover_C
{
public:
	unsigned char                                      UnknownData_75K3[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryConditionalComponent*              InventoryConditional;                                      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              ForceTime_NewTrack_0_4F35A31D4E1E787A3DFFAFB5BA237DFA;     // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ForceTime__Direction_4F35A31D4E1E787A3DFFAFB5BA237DFA;     // 0x0274(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_44RS[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ForceTime;                                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Open;                                                   // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AddForce;                                                  // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Launch;                                                    // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_50SB[0x1];                                     // 0x0283(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ForceDirection;                                            // 0x0284(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnscrewVent.BP_UnscrewVent_C");
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
	void ForceTime__FinishedFunc();
	void ForceTime__UpdateFunc();
	void OnPlayerInteractCancel();
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void Open();
	void ExecuteUbergraph_BP_UnscrewVent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
