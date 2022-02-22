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
	 * BlueprintGeneratedClass SurvivalSkipButton.SurvivalSkipButton_C
	 * Size -> 0x0059 (FullSize[0x0281] - InheritedSize[0x0228])
	 */
	class ASurvivalSkipButton_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TMP_Skip;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAlwaysFaceCameraComponent_C*                        AlwaysFaceCameraComponent;                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ButtonMesh;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SurvivalStartup[0x28];                                   // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Slanted;                                                 // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UpdateUIOnTick(bool* Output);
		void UserConstructionScript();
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void ReceiveBeginPlay();
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_SurvivalSkipButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
