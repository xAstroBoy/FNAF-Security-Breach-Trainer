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
	 * BlueprintGeneratedClass AIC_FazerBlast.AIC_FazerBlast_C
	 * Size -> 0x0078 (FullSize[0x03A8] - InheritedSize[0x0330])
	 */
	class AAIC_FazerBlast_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABasePatrolCharacter_C*                              MyPawnv2;                                                // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Private_LastFleeLocationUpdateSeconds;                   // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HQNK[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Private_PreviousFleeLocations;                           // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Private_LastFleeTargetUpdateSeconds;                     // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IOIY[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Private_PreviousFleeTargets;                             // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Private_LastFleeSeconds;                                 // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FleeDistance;                                            // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FleeTimeout;                                             // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXJT[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     P_NavHelperDestination;                                  // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AA_FazerBlast_NavHelper_Spline_C*                    P_NavHelper;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AA_FazerBlast_NavHelper_Spline_C*                    P_NavHelperLast;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeactiveTimeout;                                         // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDeactiveSeconds;                                     // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TickDisable();
		void NavHelper_Clear();
		void NavHelper_Update(class UPrimitiveComponent* I_OverlappedCompnent, bool I_IsDestination, class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper);
		void NavHelper_GetClosestBox(class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper, bool End, bool Bot_Or_Player, class UBoxComponent** ClosestBox, float* ShortestDistance);
		void NavHelper_GetDestination(class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper, class UBoxComponent** BoxDestination);
		void NavHelper_CheckForOverlaps();
		void GetFleeLocationDirection(float FleeRadius, float FleeHeight, float LocationWeight, float TargetWeight, bool Debug, float DebugTime, struct FVector* ReturnDirection);
		void UpdateFleeArrayTargets(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit);
		void UpdateFleeArrayLocations(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit);
		void UpdateFleeArray(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit, TArray<struct FVector> TargetArray, bool Debug);
		void TickFlee();
		void BeginFlee();
		void ProcessAISense(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void CompleteSenses(TArray<struct FAIStimulus>* Array);
		void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void GameEnd();
		void GameStart();
		void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void PlayerHit(const struct FHitResult& Hit);
		void GameExit();
		void ForceKill(bool Animate_);
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void ExecuteUbergraph_AIC_FazerBlast(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
