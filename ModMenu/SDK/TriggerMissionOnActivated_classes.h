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
	 * BlueprintGeneratedClass TriggerMissionOnActivated.TriggerMissionOnActivated_C
	 * Size -> 0x0015 (FullSize[0x00C5] - InheritedSize[0x00B0])
	 */
	class UTriggerMissionOnActivated_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                MissionToUpdate;                                         // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        StateToUpdate;                                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CompleteMission;                                         // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CanDeactivate(bool* CanDeactivate);
		void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void ActivateObject(class AActor* Activator);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
		void SetActivated();
		void OnActivatorDone(class AActor* Activator);
		void ExecuteUbergraph_TriggerMissionOnActivated(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
