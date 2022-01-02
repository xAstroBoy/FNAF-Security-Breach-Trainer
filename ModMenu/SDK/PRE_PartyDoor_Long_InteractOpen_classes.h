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

// BlueprintGeneratedClass PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C
// 0x0017 (FullSize[0x0358] - InheritedSize[0x0341])
class APRE_PartyDoor_Long_InteractOpen_C : public APRE_PartyDoor_Long_C
{
public:
	unsigned char                                      UnknownData_DISQ[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULightAreaDoorComponent_C*                   LightAreaDoorComponent;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C");
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
	void OnPlayerInteractCancel();
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void ReceiveBeginPlay();
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
