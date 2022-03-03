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
	 * BlueprintGeneratedClass BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C
	 * Size -> 0x00D7 (FullSize[0x0340] - InheritedSize[0x0269])
	 */
	class ABP_ReturnFazerBlaster_C : public AActivatableBase_C
	{
	public:
		unsigned char                                              UnknownData_QD9F[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInventoryConditionalComponent*                      InventoryConditional;                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Player_Overlap;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Manager[0x28];                                           // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Button[0x28];                                            // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Elevator[0x28];                                          // 0x02E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ActivatableState_EActivatableState                         State;                                                   // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3TC3[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Door[0x28];                                              // 0x0311(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UpdateUIOnTick(bool* Output);
		void GetInstructionOverride(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetHUDInstruction(class FText* Instruction);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ActivateObject(class AActor* Activator);
		void SetActivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void ExecuteUbergraph_BP_ReturnFazerBlaster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
