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
	 * BlueprintGeneratedClass PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C
	 * Size -> 0x0010 (FullSize[0x0351] - InheritedSize[0x0341])
	 */
	class APRE_PartyDoor_Locked_Activatable_C : public APRE_PartyDoor_Long_C
	{
	public:
		unsigned char                                              UnknownData_DZMO[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		ActivatableState_EActivatableState                         State;                                                   // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
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
