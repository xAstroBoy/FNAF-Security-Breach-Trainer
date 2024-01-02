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
	 * BlueprintGeneratedClass BPI_Player.BPI_Player_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Player_C : public UInterface
	{
	public:
		void IsPlayerCurrentlyMoving(bool* IsPlayerMoving);
		void UpdateIcons();
		void GetFlashlightActor(class AActor** FlashlightActor);
		void IsPlayerUsingFazwatch(bool* IsUsingFazwatch);
		void LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare);
		void NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare);
		void LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo);
		void ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle);
		void IsPlayerFlashlightActive(bool* IsActive);
		void ForceFlashlightState(bool On, bool AllowPlayerToggle);
		void RaiseArms();
		void LowerArms();
		void DisableJumpLandAudio(bool Disable);
		void VisualChangeItem();
		bool IsSwitchingItems();
		void IsInAir(bool* InAir);
		void PlayerEnteringExitingFreddy(bool* Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
