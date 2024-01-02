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
	 * BlueprintGeneratedClass PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C
	 * Size -> 0x0010 (FullSize[0x0371] - InheritedSize[0x0361])
	 */
	class APRE_PartyDoor_Locked_Activatable_C : public APRE_PartyDoor_Long_C
	{
	public:
		unsigned char                                              UnknownData_HX7Y[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EActivatableState                                          State;                                                   // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActivatableState(class AActor* Activator, EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, EConditionFailReason* CantReason);
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void ActivateObject(class AActor* Activator);
		void SetActivated();
		void OnPlayerInteract_2(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_PRE_PartyDoor_Locked_Activatable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
