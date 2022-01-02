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

// AnimBlueprintGeneratedClass Moonman_Daycare_ABP.Moonman_Daycare_ABP_C
// 0x12B0 (FullSize[0x1518] - InheritedSize[0x0268])
class UMoonman_Daycare_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_F0Y7[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x02D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x0398(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x03C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x0438(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x0468(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x04E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x0510(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x0588(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x05B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x0630(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0660(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x0688(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x06B8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0768(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0820(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x0868(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0890(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x08B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x08E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0908(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0930(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0980(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x09A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x09D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x09F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x0A20(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x0A98(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x0AC8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x0B40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x0B70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0BE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0C18(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0C90(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0CC0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0D38(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x0D68(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0E30(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0EA8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0F20(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0F50(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1030(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x1060(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x10D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1108(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1180(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x11B0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1260(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x1300(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1408(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1428(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1448(0x0078)
	float                                              DeltaTimeX;                                                // 0x14C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSpinePitch;                                          // 0x14C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundColliderPitch;                                       // 0x14C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Head_Aim_Loc;                                              // 0x14CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RootTrace;                                                 // 0x14D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RootRotation;                                              // 0x14E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Spine1_jnt;                                                // 0x14F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x14F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isPhase2;                                                  // 0x14F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               canJumpscare;                                              // 0x14FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isPanic;                                                   // 0x14FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouched;                                                // 0x14FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInTubes;                                                 // 0x14FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isBlockingPlayer;                                          // 0x14FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NearPlayer;                                                // 0x14FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceWalk;                                                 // 0x1500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isCarryingPlayer;                                          // 0x1501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JointOveride;                                              // 0x1502(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isMoving;                                                  // 0x1503(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Phase;                                                     // 0x1504(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewVar_1;                                                  // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // 0x1510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedInput;                                                // 0x1514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Moonman_Daycare_ABP.Moonman_Daycare_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	bool LineTraceForOrientation(const struct FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits);
	bool LineTraceForIK(const struct FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit);
	void FreddyEndIdle(bool Off);
	void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F();
	void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44();
	void LeapLoopEvent(bool Off);
	void EndoBowlingCrawlEvent();
	void EndoSpawnInBowlingEvent();
	void CanDieEvent(bool Off);
	void CanHackEvent(bool Off);
	void VoAnimEvent(class UAkAudioEvent* AK_Event);
	void RoxyCrying(bool Off);
	void FreddyCorrupted(bool Off);
	void ForceAnimOverride(bool enable);
	void EnterFreddyOverrideEvent(bool Off);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3();
	void CanLeapEvent(bool Off);
	void CanLieDownEvent(bool OnOff);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3();
	void IsSickEvent(bool OnOff);
	void CanWaveEvent(bool CanWave);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF();
	void PoundDoorEvent(bool PoundDoor);
	void StopScan();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165();
	void LandEvent();
	void JumpEvent(bool CanJump);
	void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
	void Breakthrough();
	void OnAnimInstanceSwap();
	void RummagingDoneEvent();
	void IsNotFirstPersonEvent();
	void IsFirstPersonEvent();
	void CanRummageEvent();
	void Stun_Event(bool Is_Stunned);
	void CanRunEvent(bool CanRun);
	void StartScan();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181();
	void SetHeadAimTarget(const struct FVector& AimLocation);
	void OpenDone();
	void Open();
	void SearchingDone();
	void Searching(fnaf9_EHideObjectType Hide_Type);
	void TurnEvent(float TurnDegrees);
	void HeadAimEvent(bool OnOff);
	void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CanJumpscareEvent();
	void PanicEvent(bool isPanic);
	void IsPhase2_Event(bool isPhase2);
	void IsInTubesEvent(bool IsInTubes);
	void IsBlockingPlayer_Event(bool isBlockingPlayer);
	void ForceWalkEvent(bool ForceWalk);
	void IscarryingPlayer_EVENT(bool isCarryingPlayer);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B();
	void Spotlight_Aim_Actor(class AActor* AimActor);
	void AnimNotify_CableDownEvent();
	void AnimNotify_CableUpEvent();
	void ExecuteUbergraph_Moonman_Daycare_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
