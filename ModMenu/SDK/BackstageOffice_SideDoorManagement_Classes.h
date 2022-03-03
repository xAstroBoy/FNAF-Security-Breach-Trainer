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
	 * BlueprintGeneratedClass BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C
	 * Size -> 0x0118 (FullSize[0x0340] - InheritedSize[0x0228])
	 */
	class ABackstageOffice_SideDoorManagement_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Doors[0x10];                                             // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       DoorsLocked;                                             // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37TW[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DoorPower;                                               // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartingDoorPower;                                       // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4G5S[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDoorPointsProgress>                         DoorPoints;                                              // 0x0258(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       DoorsElectrified;                                        // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CIJ[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDoorsElectrified;                                      // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDoorBusted;                                            // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    DoorLevel;                                               // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShockDelay;                                              // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentShockDelay;                                       // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanShock;                                               // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6N3Q[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          BustDoorSfx;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       DoorShockSfx;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnShockChangeStatus;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AOGM_BackStage_C*                                    BackstageOGM;                                            // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrainAmount;                                             // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C7K9[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkAudioEvent*>                               RoxyLines;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UAkAudioEvent*>                               MontyLines;                                              // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              OuterDoor0[0x28];                                        // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OuterDoor1[0x28];                                        // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void CanDeactivate(bool* CanDeactivate);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void Setup(class AOGM_BackStage_C* BackstageOGM, float Drain_Amount);
		struct FVector GetAdjacentPoint(int32_t DoorLevel, int32_t DoorIndex, int32_t* SelectedDoorIndex);
		struct FVector GetNextDoorPoint(int32_t DoorLevel, int32_t DoorIndex, int32_t* PointIndex, bool* ReachedOffice);
		void DrainPower(float Amount);
		void SetDoorsLocked(bool Locked);
		void OnActivatorDone(class AActor* Activator);
		void SetActivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void Startup();
		void ActivateObject(class AActor* Activator);
		void Shock_Doors(TArray<class AActor*> Actors_To_Stun);
		void On_Character_Moved_In();
		void ReceiveTick(float DeltaSeconds);
		void Outer_Doors_Unlocked();
		void ExecuteUbergraph_BackstageOffice_SideDoorManagement(int32_t EntryPoint);
		void OnShockChangeStatus__DelegateSignature(bool NewParam);
		void OnDoorBusted__DelegateSignature(int32_t DoorLevel);
		void OnDoorsElectrified__DelegateSignature(bool Electrified);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
