#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C
// 0x054A (FullSize[0x07B2] - InheritedSize[0x0268])
class ULittle_DJ_Music_Man_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_60DV[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0320(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0398(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x03C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0440(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0470(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x04E8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0518(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x05C8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0610(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x06D0(0x0078)
	struct FVector                                     Velocity;                                                  // 0x0748(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSpawnOut;                                                 // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AH0E[0x3];                                     // 0x0755(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedInput;                                                // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DP0Q[0x4];                                     // 0x075C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPositionHistory                            PositionHistory;                                           // 0x0760(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurrentLocation;                                           // 0x0790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PreviousLocation;                                          // 0x079C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CloseToPlayer;                                             // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0HTU[0x3];                                     // 0x07A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlaybackSpeed;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipSpawnIn;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               chaseStarted;                                              // 0x07B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void CalcVelocity(const struct FVector& Location);
	void OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB(const struct FName& NotifyName);
	void OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB(const struct FName& NotifyName);
	void OnInterrupted_FA7D18A447815604F75E399A0E97F4BB(const struct FName& NotifyName);
	void OnBlendOut_FA7D18A447815604F75E399A0E97F4BB(const struct FName& NotifyName);
	void OnCompleted_FA7D18A447815604F75E399A0E97F4BB(const struct FName& NotifyName);
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
	void SetHeadAimTarget(const struct FVector& AimLocation);
	void Stun_Event(bool Is_Stunned);
	void OpenDone();
	void Open();
	void CanRunEvent(bool CanRun);
	void SearchingDone();
	void Searching(fnaf9_EHideObjectType Hide_Type);
	void TurnEvent(float TurnDegrees);
	void StartScan();
	void HeadAimEvent(bool OnOff);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void CanJumpscareEvent();
	void SkipSpawnInEvent(bool SkipSpawnIn);
	void SpawnOutEvent(bool bSpawnOut);
	void ExecuteUbergraph_Little_DJ_Music_Man_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
