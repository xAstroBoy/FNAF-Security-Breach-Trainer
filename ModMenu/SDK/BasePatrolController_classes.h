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
	 * BlueprintGeneratedClass BasePatrolController.BasePatrolController_C
	 * Size -> 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
	 */
	class ABasePatrolController_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABasePatrolCharacter_C*                              MyPawnv2;                                                // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CompleteSenses(TArray<struct FAIStimulus>* Array);
		void ReceiveBeginPlay();
		void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors);
		void SecurityCameraAlert(class ASecurityCamera* SecurityCamera);
		void ExecuteUbergraph_BasePatrolController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
