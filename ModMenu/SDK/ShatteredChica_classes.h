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
	 * BlueprintGeneratedClass ShatteredChica.ShatteredChica_C
	 * Size -> 0x0050 (FullSize[0x088D] - InheritedSize[0x083D])
	 */
	class AShatteredChica_C : public AChica_C
	{
	public:
		unsigned char                                              UnknownData_4DQ6[0x3];                                   // 0x083D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInterpMoveComponent_C*                              InterpMoveComponent;                                     // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimLocation_1;                                       // 0x0850(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InterpParam;                                             // 0x085C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RunSequenceBB;                                           // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HeadSpinTimerHandle;                                     // 0x0868(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                HeadRotateBB;                                            // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentHeadAngle;                                        // 0x0878(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadSpinRate;                                            // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadRotating_1;                                          // 0x0880(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_89HR[0x3];                                   // 0x0881(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BurnTrapStunBBName;                                      // 0x0884(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              OriginalMovementMode;                                    // 0x088C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsMeshVisible();
		EFNAFAISpawnType GetManagedAIType();
		bool IsShatteredVersion();
		void SetCanHeadRotate(bool BoolValue);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BreakThroughWall(const struct FVector& StartPosition, const struct FVector& EndPosition);
		void BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature();
		void OnHeadSpinTime();
		void Stun();
		void Unstun();
		void OnBreakThroughWall(const struct FVector& StartPosition, const struct FVector& EndPosition);
		void StartHeadSpinTimer();
		void StopHeadSpinTimer();
		void SpinHead();
		void StopHeadSpin();
		void ExecuteUbergraph_ShatteredChica(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
