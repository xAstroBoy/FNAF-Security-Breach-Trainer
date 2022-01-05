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
	 * BlueprintGeneratedClass PlayerInteractComponent.PlayerInteractComponent_C
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UPlayerInteractComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class AActor*>                                      OverlappedInteractibles;                                 // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class UObject*                                             ClosestInteractible;                                     // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnInteractibleChanged;                                   // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UObject*                                             CurrentInteract;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      InteractiblesThatUpdateOnTick;                           // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void CancelCurrentClosest();
		void CancelInteraction(class UObject* Obeject);
		void ResetInteractible();
		void ResetInteractibleHUD(class UObject* Interactible);
		void ChangeInteractible(class UObject* Interactible);
		void DetermineClosestInteractible();
		void ReceiveBeginPlay();
		void On_Owner_Begin_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void On_Owner_End_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void Attempt_Interact();
		void Cancel_Current_Interact();
		void Set_Interact_Enable(bool Enabled);
		void ExecuteUbergraph_PlayerInteractComponent(int EntryPoint);
		void OnInteractibleChanged__DelegateSignature(class UObject* Interactible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
