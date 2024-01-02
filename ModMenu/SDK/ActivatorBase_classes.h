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
	 * BlueprintGeneratedClass ActivatorBase.ActivatorBase_C
	 * Size -> 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
	 */
	class AActivatorBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInventoryConditionalComponent*                      InventoryConditional;                                    // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUse;                                                  // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5BZ[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ObjectsToActivate[0x10];                                 // 0x0248(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       IsActivatingObjects;                                     // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EActivatableState                                          CurrentActivatableState;                                 // 0x0259(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeDeactivated;                                        // 0x025A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCE0[0x1];                                   // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActivatorSaveID;                                         // 0x025C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HBVL[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RuntimeActivatables[0x10];                               // 0x0268(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       CanBeActivated;                                          // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AVVT[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ActivateSound;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       CantActivateSound;                                       // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanDeactivate(bool* CanDeactivate);
		void CanActivate(class AActor* Activator, bool* CanActivate, EConditionFailReason* CantReason);
		void GetActivatableState(class AActor* Activator, EActivatableState* CurrentState);
		void GetSavedState(bool* Activated);
		void RemoveActivatable();
		void AddActivatable();
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void PostSaveGame();
		void OnActivatorDone(class AActor* Activator);
		void ReceiveBeginPlay();
		void ActivateObject(class AActor* Activator);
		void OnAllActive();
		void ActivateObjects();
		void OnActivateCantUse();
		void SetActivated();
		void SetDeactivated();
		void DeactivateObject(class AActor* Deactivator);
		void DeactivateObjects();
		void OnAllDeactivated();
		void PostGameLoad();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void DeactivateChildrenOnly();
		void ActivateChildrenOnly();
		void ExecuteUbergraph_ActivatorBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
