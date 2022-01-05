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
	 * AnimBlueprintGeneratedClass Tentacle_ABP.Tentacle_ABP_C
	 * Size -> 0x0B48 (FullSize[0x0DB8] - InheritedSize[0x0270])
	 */
	class UTentacle_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0278(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x02A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x02C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0318(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0340(0x00E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0420(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0440(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0548(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0568(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0670(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x06E8(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x07B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x07E0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0858(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0888(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0900(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0930(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x09A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x09D8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0A88(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0B28(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0BA0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0C68(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CE0(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0D10(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0D30(0x0020)
		bool                                                       canJumpscare;                                            // 0x0D50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanJump;                                                 // 0x0D51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanSearch;                                               // 0x0D52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFL4[0x1];                                   // 0x0D53(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TargetRotation;                                          // 0x0D54(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SearchMax;                                               // 0x0D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SearchMin;                                               // 0x0D64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APRE_Ventilation_BustOpen_C*                         Actor;                                                   // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawTarget;                                               // 0x0D70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x0D74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewYawTarget;                                            // 0x0D78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpdateYaw;                                               // 0x0D7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NKUU[0x3];                                   // 0x0D7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchTime;                                              // 0x0D80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ceiling;                                                 // 0x0D84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ARWZ[0x3];                                   // 0x0D85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetPhysicsAlpha;                                      // 0x0D90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PhysicsAlpha;                                            // 0x0D94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawDelta;                                                // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            OldRotation;                                             // 0x0D9C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IdleStartPositionRandom;                                 // 0x0DA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FY6P[0x4];                                   // 0x0DAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       IdleAnimSequence;                                        // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ForceAnimOverride(bool enable);
		void FreddyCorrupted(bool Off);
		void RoxyCrying(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void CanHackEvent(bool Off);
		void CanDieEvent(bool Off);
		void EndoSpawnInBowlingEvent();
		void EndoBowlingCrawlEvent();
		void LeapLoopEvent(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void Spotlight_Aim_Actor(class AActor* AimActor);
		void Stun_Event(bool Is_Stunned);
		void EnterFreddyOverrideEvent(bool Off);
		void CanLeapEvent(bool Off);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void CanLieDownEvent(bool OnOff);
		void IsSickEvent(bool OnOff);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void CanWaveEvent(bool CanWave);
		void OpenDone();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ModifyBone_A68DFB9C4E7F03BE2DCE8E91DD035BF4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ApplyAdditive_100154234772D42A6E9CFDB13B847A9E();
		void Open();
		void SearchingDone();
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void TurnEvent(float TurnDegrees);
		void CanJumpscareEvent();
		void PoundDoorEvent(bool PoundDoor);
		void StopScan();
		void LandEvent();
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_SequencePlayer_31B691A14D819063BAD5629C89055BF0();
		void Breakthrough();
		void OnAnimInstanceSwap();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void JumpEvent(bool CanJump);
		void HeadAimEvent(bool OnOff);
		void SearchAnim();
		void BlueprintBeginPlay();
		void RummagingDoneEvent();
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void AnimNotify_EnteredSearchEvent();
		void ExecuteUbergraph_Tentacle_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
