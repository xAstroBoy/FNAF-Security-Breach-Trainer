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
	 * BlueprintGeneratedClass DoorLockActivatorComponent.DoorLockActivatorComponent_C
	 * Size -> 0x0032 (FullSize[0x00E2] - InheritedSize[0x00B0])
	 */
	class UDoorLockActivatorComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              Door[0x28];                                              // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		DoorLockActivatorAction_EDoorLockActivatorAction           Action;                                                  // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		DoorLockType_EDoorLockType                                 DoorLockType;                                            // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanDeactivate(bool* CanDeactivate);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		bool DetermineNewDoorLockStatus(bool CurrentState);
		void SetDoorLocks();
		void OnActivatorDone(class AActor* Activator);
		void SetActivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void ReceiveBeginPlay();
		void ActivateObject(class AActor* Activator);
		void ExecuteUbergraph_DoorLockActivatorComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
