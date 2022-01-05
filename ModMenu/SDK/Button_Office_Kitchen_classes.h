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
	 * BlueprintGeneratedClass Button_Office_Kitchen.Button_Office_Kitchen_C
	 * Size -> 0x0038 (FullSize[0x0338] - InheritedSize[0x0300])
	 */
	class AButton_Office_Kitchen_C : public APossessStaffbotButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              OGM_Kitchen[0x28];                                       // 0x0310(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void UpdateUIOnTick(bool* Output);
		void GetInstructionOverride(class FText* Instruction);
		void ButtonPressed(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Button_Office_Kitchen(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
