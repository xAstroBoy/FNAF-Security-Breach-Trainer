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
		unsigned char                                              UnknownData_S99Y[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ObjectsToActivate[0x10];                                 // 0x0241(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       IsActivatingObjects;                                     // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ActivatableState_EActivatableState                         CurrentActivatableState;                                 // 0x0259(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeDeactivated;                                        // 0x025A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RFNF[0x1];                                   // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActivatorSaveID;                                         // 0x025C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SD73[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RuntimeActivatables[0x10];                               // 0x0264(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       CanBeActivated;                                          // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXWG[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ActivateSound;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       CantActivateSound;                                       // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanDeactivate(bool* CanDeactivate);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
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
		void On_All_Active();
		void Activate_Objects();
		void On_Activate_Cant_Use();
		void SetActivated();
		void SetDeactivated();
		void DeactivateObject(class AActor* Deactivator);
		void Deactivate_Objects();
		void On_All_Deactivated();
		void PostGameLoad();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void ExecuteUbergraph_ActivatorBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
