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
	 * AnimBlueprintGeneratedClass Vanny_ABP.Vanny_ABP_C
	 * Size -> 0x30D8 (FullSize[0x3390] - InheritedSize[0x02B8])
	 */
	class UVanny_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_5XX9[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x02C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x02F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0318(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x03B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x03E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0408(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0488(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x04B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x04E8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0568(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0608(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0688(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x06B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x06E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0708(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0730(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x07B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0830(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x08B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0930(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x09B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0A30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0AB0(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x0B30(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0BE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0C10(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0C90(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0CC0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0D70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0DA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0E20(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0E50(0x00B0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x0F00(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x10E0(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x12C0(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x12E0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1438(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x1460(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1568(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1670(0x0108)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1778(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1828(0x0080)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_4;                              // 0x18A8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_3;                              // 0x19D0(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1AF8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1C00(0x0108)
		unsigned char                                              UnknownData_J7BE[0x8];                                   // 0x1D08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x1D10(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x1EC0(0x01B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x2070(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2130(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x21B0(0x0030)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x21E0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x2308(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x2430(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2538(0x0108)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x2640(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x27F0(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x29A0(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x29C0(0x0048)
		unsigned char                                              UnknownData_TPRM[0x8];                                   // 0x2A08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x2A10(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x2E50(0x0440)
		float                                                      DeltaTimeX;                                              // 0x3290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x3294(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YMXC[0x3];                                   // 0x3295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedInput;                                          // 0x3298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeadAiming;                                            // 0x329C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PX42[0x3];                                   // 0x329D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x32A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0x32A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PVTarget_L;                                              // 0x32B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_L;                                            // 0x32BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_R;                                            // 0x32C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PVTarget_R;                                              // 0x32D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAISeeker_C*                                         Pawn;                                                    // 0x32E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimTarget;                                           // 0x32E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IKInterpSpeed;                                           // 0x32F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpotted;                                               // 0x32F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T6T0[0x3];                                   // 0x32F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpottedDelayTime;                                        // 0x32FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpottedTimer;                                            // 0x3300(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlertLevel;                                              // 0x3308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScanVariation;                                           // 0x330C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDegrees;                                             // 0x3310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHideObjectType                                            HideType;                                                // 0x3314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTurn;                                                 // 0x3315(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScan;                                                 // 0x3316(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSearching;                                             // 0x3317(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanJumpscare;                                            // 0x3318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BBED[0x3];                                   // 0x3319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomRunSelector;                                       // 0x331C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomWalkSelector;                                      // 0x3320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YR2D[0xC];                                   // 0x3324(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          NewVar_1;                                                // 0x3330(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EarsAlphaBlend;                                          // 0x3360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestAimAlpha;                                           // 0x3364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Stop_L;                                                  // 0x3368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanRun;                                                  // 0x3369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPreview;                                               // 0x336A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B7GS[0x1];                                   // 0x336B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunRate;                                                 // 0x336C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRate;                                                // 0x3370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimatronicModeEnum                                       AnimationModeEnum;                                       // 0x3374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V8O3[0x3];                                   // 0x3375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x3380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IKLegs;                                                  // 0x3381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6GB[0x2];                                   // 0x3382(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewVar_2;                                                // 0x3384(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void footstep();
		void PerformFootIK(bool IsRightFoot);
		void CanDieEvent(bool Off);
		void EndoSpawnInBowlingEvent();
		void EndoBowlingCrawlEvent();
		void LeapLoopEvent(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void SpotlightAimActor(class AActor* AimActor);
		void IsHangingEvent(bool IsHanging);
		void OverlappingDoor(bool Overlapping, class AActor* Instigator);
		void CanHackEvent(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void RoxyCrying(bool Off);
		void FreddyCorrupted(bool Off);
		void ForceAnimOverride(bool enable);
		void EnterFreddyOverrideEvent(bool Off);
		void CanLeapEvent(bool Off);
		void CanLieDownEvent(bool OnOff);
		void IsSickEvent(bool OnOff);
		void PoundDoorEvent(bool PoundDoor);
		void StopScan();
		void LandEvent();
		void JumpEvent(bool CanJump);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void Breakthrough();
		void OnAnimInstanceSwap();
		void RummagingDoneEvent();
		void IsNotFirstPersonEvent();
		void OnCompleted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnBlendOut_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnInterrupted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void IsSpottedEvent();
		void AnimNotify_IsSpottedEvent();
		void SpottedTimerOverEvent();
		void SearchingDone();
		void TurnEvent(float TurnDegrees);
		void SetPeek(bool ShouldPeek);
		void SetAnim(class UAnimSequence* Animation);
		void SetEnterRotation(class APawn* PlayerPawn);
		void AnimNotify_BeginWalk();
		void AnimNotify_BeginRun();
		void HeadAimEvent(bool OnOff);
		void CanJumpscareEvent();
		void StartScan();
		void Searching(EHideObjectType HideType);
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
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void StunEvent(bool IsStunned);
		void OpenDone();
		void Open();
		void ExecuteUbergraph_Vanny_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
