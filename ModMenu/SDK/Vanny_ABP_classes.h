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
	 * AnimBlueprintGeneratedClass Vanny_ABP.Vanny_ABP_C
	 * Size -> 0x2FC0 (FullSize[0x3230] - InheritedSize[0x0270])
	 */
	class UVanny_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0278(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x02A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x02C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x02F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0318(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0390(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x03B8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0430(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0460(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0490(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0508(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x05A8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0620(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0650(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0678(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x06A0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x06C8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0740(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x07B8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0830(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x08A8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0920(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0998(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0A10(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x0A88(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0B38(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0B68(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0BE0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0C10(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0CC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0CF0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0D68(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0D98(0x00B0)
		unsigned char                                              UnknownData_G6ZN[0x8];                                   // 0x0E48(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x0E50(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x1030(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1210(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1230(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x12E8(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x1310(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1418(0x0108)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1520(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x15D0(0x0078)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_4;                              // 0x1648(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_3;                              // 0x1770(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1898(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x19A0(0x0108)
		unsigned char                                              UnknownData_FQC7[0x8];                                   // 0x1AA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x1AB0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x1C60(0x01B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1E10(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1ED0(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1F48(0x0030)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x1F78(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x20A0(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x21C8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x22D0(0x0108)
		unsigned char                                              UnknownData_U6QM[0x8];                                   // 0x23D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x23E0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x2590(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2740(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x2760(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x2BA0(0x0440)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2FE0(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x3028(0x0108)
		float                                                      DeltaTimeX;                                              // 0x3130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x3134(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WALH[0x3];                                   // 0x3135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedInput;                                          // 0x3138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeadAiming;                                            // 0x313C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5W7S[0x3];                                   // 0x313D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x3140(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0x3144(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PVTarget_L;                                              // 0x3150(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_L;                                            // 0x315C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_R;                                            // 0x3168(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PVTarget_R;                                              // 0x3174(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAISeeker_C*                                         Pawn;                                                    // 0x3180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimTarget;                                           // 0x3188(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IK_Interp_Speed;                                         // 0x3194(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpotted;                                               // 0x3198(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDD0[0x3];                                   // 0x3199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpottedDelayTime;                                        // 0x319C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpottedTimer;                                            // 0x31A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int                                                        AlertLevel;                                              // 0x31A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        ScanVariation;                                           // 0x31AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDegrees;                                             // 0x31B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		fnaf9_EHideObjectType                                      HideType;                                                // 0x31B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTurn;                                                 // 0x31B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScan;                                                 // 0x31B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSearching;                                             // 0x31B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canJumpscare;                                            // 0x31B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZPN[0x3];                                   // 0x31B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        RandomRunSelector;                                       // 0x31BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        RandomWalkSelector;                                      // 0x31C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K5G4[0xC];                                   // 0x31C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          NewVar_1;                                                // 0x31D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EarsAlphaBlend;                                          // 0x3200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestAimAlpha;                                           // 0x3204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Stop_L;                                                  // 0x3208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanRun;                                                  // 0x3209(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPreview;                                               // 0x320A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K0OF[0x1];                                   // 0x320B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunRate;                                                 // 0x320C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRate;                                                // 0x3210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<AnimatronicModeEnum_EAnimatronicModeEnum>      AnimationModeEnum;                                       // 0x3214(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RTT3[0x3];                                   // 0x3215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x3218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x3220(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IK_legs;                                                 // 0x3221(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_33IE[0x2];                                   // 0x3222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewVar_2;                                                // 0x3224(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void footstep();
		void Perform_Foot_IK(bool IsRightFoot);
		void OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnInterrupted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnBlendOut_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnCompleted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void LeapLoopEvent(bool Off);
		void EndoBowlingCrawlEvent();
		void EndoSpawnInBowlingEvent();
		void CanDieEvent(bool Off);
		void CanHackEvent(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void RoxyCrying(bool Off);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201();
		void FreddyCorrupted(bool Off);
		void ForceAnimOverride(bool enable);
		void EnterFreddyOverrideEvent(bool Off);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void CanLeapEvent(bool Off);
		void CanLieDownEvent(bool OnOff);
		void IsSickEvent(bool OnOff);
		void PoundDoorEvent(bool PoundDoor);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void Spotlight_Aim_Actor(class AActor* AimActor);
		void StopScan();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92();
		void LandEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E();
		void JumpEvent(bool CanJump);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E();
		void Breakthrough();
		void OnAnimInstanceSwap();
		void RummagingDoneEvent();
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void Stun_Event(bool Is_Stunned);
		void OpenDone();
		void Open();
		void SearchingDone();
		void TurnEvent(float TurnDegrees);
		void SetAnim(class UAnimSequence* Animation);
		void SetEnterRotation(class APawn* PlayerPawn);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void IsSpottedEvent();
		void AnimNotify_IsSpottedEvent();
		void SpottedTimerOverEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440();
		void AnimNotify_BeginWalk();
		void AnimNotify_BeginRun();
		void HeadAimEvent(bool OnOff);
		void CanJumpscareEvent();
		void StartScan();
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void CanRunEvent(bool CanRun);
		void AnimNotify_EnterSearchStateEvent();
		void AnimNotify_SearchCanKill();
		void AnimNotify_SearchEndEvent();
		void StartSearch(class APawn* SearcherPawn);
		void CanWaveEvent(bool CanWave);
		void EventWaveTest();
		void AnimNotify_L_Foot_Down();
		void AnimNotify_R_Foot_Down();
		void ExecuteUbergraph_Vanny_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
