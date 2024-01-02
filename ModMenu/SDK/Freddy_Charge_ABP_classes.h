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
	 * AnimBlueprintGeneratedClass Freddy_Charge_ABP.Freddy_Charge_ABP_C
	 * Size -> 0x0B18 (FullSize[0x0DD0] - InheritedSize[0x02B8])
	 */
	class UFreddy_Charge_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2851[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x02F8(0x0080)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x0378(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x0418(0x00A0)
		unsigned char                                              UnknownData_X1C9[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x04C0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x0670(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0820(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0840(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0860(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0A10(0x01B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0BC0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0C08(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0C88(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0CD0(0x00C0)
		float                                                      __CustomProperty_ShoulderpadDynamicAlpha_EC3BEC384F117C5D506776A52C8201B8; // 0x0D90(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleAlphaScale_EC3BEC384F117C5D506776A52C8201B8; // 0x0D94(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleDynamicAlpha_EC3BEC384F117C5D506776A52C8201B8; // 0x0D98(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EaringDynamicAlpha_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0D9C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EarDynamicAlpha_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0DA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Ears_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0DA4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KAUP[0x3];                                   // 0x0DA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HeadAimTarget;                                           // 0x0DA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadAim;                                                 // 0x0DB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_68CI[0x3];                                   // 0x0DB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HeadAimLoc;                                              // 0x0DB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0x0DC4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void AnimGraph(struct FPoseLink* AnimGraph);
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
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void CanHackEvent(bool Off);
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
		void CanRummageEvent();
		void StunEvent(bool IsStunned);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void OpenDone();
		void Open();
		void SearchingDone();
		void Searching(EHideObjectType HideType);
		void TurnEvent(float TurnDegrees);
		void CanJumpscareEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Freddy_Charge_ABP_AnimGraphNode_LookAt_224770D848B70D15F76844B2B0C46257();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void HeadAimEvent(bool OnOff);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void Wave();
		void ExecuteUbergraph_Freddy_Charge_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
