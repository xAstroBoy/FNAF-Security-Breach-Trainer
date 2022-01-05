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
	 * AnimBlueprintGeneratedClass SunMan_Daycare_ABP.SunMan_Daycare_ABP_C
	 * Size -> 0x0C5A (FullSize[0x0ECA] - InheritedSize[0x0270])
	 */
	class USunMan_Daycare_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x02A8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x02D0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0300(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x03B0(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0468(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x04E0(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0580(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0660(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0700(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x07A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0818(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0890(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0930(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x09D0(0x0078)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0A48(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A90(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0B08(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0C10(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0C30(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0C50(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D58(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0DF8(0x0078)
		float                                                      DeltaTimeX;                                              // 0x0E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetSpinePitch;                                        // 0x0E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GroundColliderPitch;                                     // 0x0E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Head_Aim_Loc;                                            // 0x0E7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RootTrace;                                               // 0x0E88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RootRotation;                                            // 0x0E94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Spine1_jnt;                                              // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Valid;                                                   // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isPhase2;                                                // 0x0EA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isMoving;                                                // 0x0EAA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZG78[0x1];                                   // 0x0EAB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedInput;                                              // 0x0EAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isBlockingPlayer;                                        // 0x0EB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DDX1[0x3];                                   // 0x0EB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Direction;                                               // 0x0EB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewVar_1;                                                // 0x0EB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrouched;                                              // 0x0EBC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CarryingPlayer;                                          // 0x0EBD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10MH[0x2];                                   // 0x0EBE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Phase;                                                   // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isSad;                                                   // 0x0EC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HeadAim;                                                 // 0x0EC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void footstep();
		bool LineTraceForOrientation(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits);
		bool LineTraceForIK(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit);
		void OnNotifyEnd_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName);
		void OnNotifyBegin_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName);
		void OnInterrupted_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName);
		void OnBlendOut_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName);
		void OnCompleted_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName);
		void OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName);
		void OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName);
		void OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName);
		void OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName);
		void OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName);
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void SearchingDone();
		void Open();
		void OpenDone();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void StartScan();
		void CanRunEvent(bool CanRun);
		void Stun_Event(bool Is_Stunned);
		void CanRummageEvent();
		void IsFirstPersonEvent();
		void IsNotFirstPersonEvent();
		void RummagingDoneEvent();
		void OnAnimInstanceSwap();
		void Breakthrough();
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void JumpEvent(bool CanJump);
		void LandEvent();
		void StopScan();
		void PoundDoorEvent(bool PoundDoor);
		void CanWaveEvent(bool CanWave);
		void IsSickEvent(bool OnOff);
		void CanLieDownEvent(bool OnOff);
		void CanLeapEvent(bool Off);
		void EnterFreddyOverrideEvent(bool Off);
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
		void TurnEvent(float TurnDegrees);
		void HeadAimEvent(bool OnOff);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void IsBlockingPlayer_Event(bool isBlockingPlayer);
		void CanJumpscareEvent();
		void BlueprintBeginPlay();
		void AnimNotify_QuickHeadspin();
		void AnimNotify_L_Foot_Down();
		void AnimNotify_R_Foot_Down();
		void isCarryingPlayerEvent(bool CarryingPlayer);
		void Exit_Event();
		void ExecuteUbergraph_SunMan_Daycare_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
