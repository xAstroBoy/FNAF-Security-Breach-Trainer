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
	 * AnimBlueprintGeneratedClass Burntrap_ABP.Burntrap_ABP_C
	 * Size -> 0x11C3 (FullSize[0x1433] - InheritedSize[0x0270])
	 */
	class UBurntrap_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x02A8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0358(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x03D0(0x0078)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0448(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0470(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0498(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x04E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0510(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0538(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x05B0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x05E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0608(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0680(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x06B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0728(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0758(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0808(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0838(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x08B0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x08E0(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x09C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x09F0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0A68(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0A98(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0B48(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0B68(0x0020)
		unsigned char                                              UnknownData_MEZZ[0x8];                                   // 0x0B88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x0B90(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x0FD0(0x0440)
		AnimatronicModeEnum_EAnimatronicModeEnum                   AnimationMode;                                           // 0x1410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x1411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5T2A[0x6];                                   // 0x1412(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x1418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABurntrap_C*                                         Pawn;                                                    // 0x1420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x1428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedInput;                                              // 0x142C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x1430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canDie;                                                  // 0x1431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanHack;                                                 // 0x1432(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void EndoSpawnInBowlingEvent();
		void EndoBowlingCrawlEvent();
		void LeapLoopEvent(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void Spotlight_Aim_Actor(class AActor* AimActor);
		void JumpEvent(bool CanJump);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void RoxyCrying(bool Off);
		void FreddyCorrupted(bool Off);
		void Breakthrough();
		void ForceAnimOverride(bool enable);
		void EnterFreddyOverrideEvent(bool Off);
		void OnAnimInstanceSwap();
		void CanLeapEvent(bool Off);
		void RummagingDoneEvent();
		void CanLieDownEvent(bool OnOff);
		void IsNotFirstPersonEvent();
		void IsSickEvent(bool OnOff);
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void Stun_Event(bool Is_Stunned);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void OpenDone();
		void Open();
		void CanWaveEvent(bool CanWave);
		void SearchingDone();
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void PoundDoorEvent(bool PoundDoor);
		void TurnEvent(float TurnDegrees);
		void HeadAimEvent(bool OnOff);
		void StopScan();
		void LandEvent();
		void CanJumpscareEvent();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void CanDieEvent(bool Off);
		void CanHackEvent(bool Off);
		void ExecuteUbergraph_Burntrap_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
