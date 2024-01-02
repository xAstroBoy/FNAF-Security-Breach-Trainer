#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * BlueprintGeneratedClass InteractibleInterface.InteractibleInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractibleInterface_C : public UInterface
	{
	public:
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void OnPlayerInteractCancel();
		void GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
