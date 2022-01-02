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

// BlueprintGeneratedClass Button_Office_Kitchen.Button_Office_Kitchen_C
// 0x0038 (FullSize[0x0338] - InheritedSize[0x0300])
class AButton_Office_Kitchen_C : public APossessStaffbotButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGameTypeCheckDestroy*                       GameTypeCheckDestroy;                                      // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OGM_Kitchen[0x28];                                         // 0x0310(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Button_Office_Kitchen.Button_Office_Kitchen_C");
		return ptr;
	}



	void UpdateUIOnTick(bool* Output);
	void GetInstructionOverride(struct FText* Instruction);
	void ButtonPressed(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Button_Office_Kitchen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
