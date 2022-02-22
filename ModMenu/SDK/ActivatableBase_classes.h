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
	 * BlueprintGeneratedClass ActivatableBase.ActivatableBase_C
	 * Size -> 0x0041 (FullSize[0x0269] - InheritedSize[0x0228])
	 */
	class AActivatableBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene;                                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                ActivatableStorageName;                                  // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ActivatableState_EActivatableState                         CurrentActivatableState;                                 // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowDeactivate;                                         // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JCZD[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActivatableActivated;                                  // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnActivatableDeactivated;                                // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ActivatingLocally;                                       // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanDeactivate(bool* CanDeactivate);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void SaveState();
		void ReceiveBeginPlay();
		void ActivateObject(class AActor* Activator);
		void OnActivatorDone(class AActor* Activator);
		void Set_State(ActivatableState_EActivatableState NewState);
		void SetDeactivated();
		void SetActivated();
		void On_Activate();
		void On_Deactivate();
		void DeactivateObject(class AActor* Deactivator);
		void On_Object_State_Changed(const class FName& ObjectName, bool ObjectState);
		void ExecuteUbergraph_ActivatableBase(int32_t EntryPoint);
		void OnActivatableDeactivated__DelegateSignature();
		void OnActivatableActivated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
