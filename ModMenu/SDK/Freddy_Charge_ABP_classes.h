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
	 * AnimBlueprintGeneratedClass Freddy_Charge_ABP.Freddy_Charge_ABP_C
	 * Size -> 0x0B00 (FullSize[0x0D70] - InheritedSize[0x0270])
	 */
	class UFreddy_Charge_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x02A8(0x0078)
		float                                                      __CustomProperty_EaringDynamicAlpha_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EarDynamicAlpha_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0324(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Ears_3C79D5AB4F16FF815D4D6F828B42F6EC; // 0x0328(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F5WH[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x0330(0x00A0)
		float                                                      __CustomProperty_Shoulderpad_DynamicAlpha_EC3BEC384F117C5D506776A52C8201B8; // 0x03D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleAlphaScale_EC3BEC384F117C5D506776A52C8201B8; // 0x03D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleDynamicAlpha_EC3BEC384F117C5D506776A52C8201B8; // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9FUN[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x03E0(0x00A0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x0480(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x0630(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x07E0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0800(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0820(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x09D0(0x01B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0B80(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0BC8(0x0078)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0C40(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0C88(0x00C0)
		struct FVector                                             HeadAimTarget;                                           // 0x0D48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadAim;                                                 // 0x0D54(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7EST[0x3];                                   // 0x0D55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HeadAimLoc;                                              // 0x0D58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0x0D64(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Freddy_Charge_ABP_AnimGraphNode_LookAt_224770D848B70D15F76844B2B0C46257();
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void Stun_Event(bool Is_Stunned);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void OpenDone();
		void Open();
		void SearchingDone();
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void TurnEvent(float TurnDegrees);
		void CanJumpscareEvent();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void HeadAimEvent(bool OnOff);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void Wave();
		void ExecuteUbergraph_Freddy_Charge_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
