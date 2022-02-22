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
	 * BlueprintGeneratedClass GeneratorBase_BP.GeneratorBase_BP_C
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class AGeneratorBase_BP_C : public AActivatorBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Collision;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerTrigger;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void SetActivated();
		void ActivateObject(class AActor* Activator);
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void DeactivateObject(class AActor* Deactivator);
		void Set_On_State(bool On);
		void SetDeactivated();
		void OnPlayerInteractCancel();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GeneratorBase_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
