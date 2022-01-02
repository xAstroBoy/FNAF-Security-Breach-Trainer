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

// AnimBlueprintGeneratedClass FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C
// 0x0291 (FullSize[0x04F9] - InheritedSize[0x0268])
class UFirstPersonFreddyArms_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_CJ3P[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x02F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0370(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x03A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0418(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0448(0x00B0)
	bool                                               PlayAnim;                                                  // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
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
	void Searching(fnaf9_EHideObjectType Hide_Type);
	void TurnEvent(float TurnDegrees);
	void SearchingDone();
	void HeadAimEvent(bool OnOff);
	void CanJumpscareEvent();
	void Breakthrough();
	void ExecuteUbergraph_FirstPersonFreddyArms_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
