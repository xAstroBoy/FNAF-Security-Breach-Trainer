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
	 * BlueprintGeneratedClass BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ChowdaPlayerInput_C : public UInterface
	{
	public:
		void ReturnPlayerWalk();
		void SlowPlayerWalk();
		void GetWalkieTalkieRef(class AActor** WalkieTalkie);
		void ToggleWalkieTalkie(bool BringOutWalkie);
		void GetMaintenanceToolRef(class AActor** MaintenanceTool);
		void IsMaintenanceToolReadyToGo(bool* OutAndReady);
		void ToggleMaintenanceTool(bool BringOutTool);
		void GetTeleportCounterpartTransform(struct FTransform* CounterpartTransform);
		void UpdateItemCollected(const struct FFNAFInventoryTableStruct& Item);
		void GetTeleportCounterpart(class UChildActorComponent** TeleportCounterpart);
		void IsChowdaSwitchingItems(bool* IsSwitching);
		void OnForceFlashlightState(bool ForceOn, bool AllowPlayerToggle);
		void SetCanSwitchItem(bool CanSwitch);
		void IsMaintenanceToolEquipped(bool* Equipped);
		void IsWalkieTalkieEquipped(bool* Equipped);
		void SecondaryActionCheck(bool* Equipped, class FName* ItemName);
		void OnSwitchItem();
		void OnToggleFlashlight();
		void OnMaintenanceInteract();
		void OnTeleportTriggered();
		void CalloutReleased();
		void CalloutPressed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
