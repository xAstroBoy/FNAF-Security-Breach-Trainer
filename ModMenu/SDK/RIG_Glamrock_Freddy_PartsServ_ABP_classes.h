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

// AnimBlueprintGeneratedClass RIG_Glamrock_Freddy_PartsServ_ABP.RIG_Glamrock_Freddy_PartsServ_ABP_C
// 0x3731 (FullSize[0x3999] - InheritedSize[0x0268])
class URIG_Glamrock_Freddy_PartsServ_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_2KSE[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x02A8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                         // 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                         // 0x0380(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                         // 0x03A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x03D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x03F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x0420(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0x0448(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                              // 0x04C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0x04F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                              // 0x0568(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0x0598(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                              // 0x0610(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0x0640(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                              // 0x06B8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x06E8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x0798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x07C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x07E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x0810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x0838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x0860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x0888(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0x08B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0x0928(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0x0958(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0x09D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0x0A00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0x0A78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0x0AA8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x0B20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x0B50(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x0BC8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x0BF8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x0CA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x0CD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x0CF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x0D20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x0D48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x0D70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x0D98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x0DC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x0DE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x0E10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x0E38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x0EB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x0EE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x0F58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x0F88(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x1000(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x1030(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x10A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x10D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x1150(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x1180(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x11F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x1228(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x12A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x12D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x1380(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x13C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x13F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x1418(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x1440(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x1468(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x1490(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x14B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x14E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x1508(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x1530(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x15A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x15D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x1650(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x1680(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x16F8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x1728(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x1750(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x1778(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x17A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x1818(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x1848(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x18C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x18F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1968(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x1998(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x1A48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x1A70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x1A98(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1AC0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x1B38(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x1BE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x1C10(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x1C88(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x1CB8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1D68(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x1DE0(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x1EA0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x1ED0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x1F48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x1F78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x1FF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x2020(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x2098(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x20C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x2178(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x2218(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x2290(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x2398(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x23B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x24C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x25C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x26D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x27D8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x28E0(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x2900(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x29C0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x2A38(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x2AF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x2B18(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x2B40(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x2B88(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x2C48(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x2CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x2D10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x2D38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x2DB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x2DE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x2E58(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x2E88(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x2F38(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x2FE8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x30A0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x30C8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x30E8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x3110(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x3130(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x3238(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x3340(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x3448(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x3550(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x3658(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x3680(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x36A0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x36C8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x36E8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x37F0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x3810(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x3830(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x3938(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x3958(0x0020)
	TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum;                                                  // 0x3978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HatOn;                                                     // 0x3979(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HeadOn;                                                    // 0x397A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ArmOpen;                                                   // 0x397B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reset;                                                     // 0x397C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HandSwap;                                                  // 0x397D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BowTieOn;                                                  // 0x397E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChestplateOn;                                              // 0x397F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VoiceBoxSwap_1;                                            // 0x3980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               L_Eye_IN;                                                  // 0x3981(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               R_eye_In;                                                  // 0x3982(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               test;                                                      // 0x3983(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               canJumpscare;                                              // 0x3984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O7E1[0x3];                                     // 0x3985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  AnimVODT;                                                  // 0x3988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               JawAnim;                                                   // 0x3990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanTalk;                                                   // 0x3998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_Glamrock_Freddy_PartsServ_ABP.RIG_Glamrock_Freddy_PartsServ_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_FC851C1A482D0EB90D351EB182A70816();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_0D5787354BDCA8A4C28C6491ED8B9069();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_E86E69654BE8D46B28661F9414A83F97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_BEA798F7478DFA35A57250B6505E900F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_D379C77F42689EAFB9156186575B1F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_D8B7B35C4A76CC07ABEC24807152335A();
	void Out(bool In);
	void Spotlight_Aim_Actor(class AActor* AimActor);
	void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_LayeredBoneBlend_77BE12994B420B52B517D689753232C8();
	void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_473022F1433570D290E9FD8BDCDCE0BB();
	void FreddyEndIdle(bool Off);
	void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
	void LeapLoopEvent(bool Off);
	void EndoBowlingCrawlEvent();
	void EndoSpawnInBowlingEvent();
	void CanDieEvent(bool Off);
	void CanHackEvent(bool Off);
	void RoxyCrying(bool Off);
	void FreddyCorrupted(bool Off);
	void ForceAnimOverride(bool enable);
	void EnterFreddyOverrideEvent(bool Off);
	void CanLeapEvent(bool Off);
	void CanLieDownEvent(bool OnOff);
	void IsSickEvent(bool OnOff);
	void CanWaveEvent(bool CanWave);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_17A9306F413DEF9624D3D4836F855D87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_E36876DF47030BAC38F21E92E906C314();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_4A9829A047F878E86C08CAAD96EA8749();
	void PoundDoorEvent(bool PoundDoor);
	void StopScan();
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
	void SetHeadAimTarget(const struct FVector& AimLocation);
	void OpenDone();
	void Open();
	void SearchingDone();
	void Searching(fnaf9_EHideObjectType Hide_Type);
	void TurnEvent(float TurnDegrees);
	void HeadAimEvent(bool OnOff);
	void PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum);
	void Off(bool Off);
	void Close(bool close);
	void TestButton_B();
	void TestButton_G();
	void TestButton_R();
	void TestButton_Y();
	void ResetFreddy();
	void VoiceBoxSwap(bool Off);
	void CanJumpscareEvent();
	void VoAnimEvent(class UAkAudioEvent* AK_Event);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP_AnimGraphNode_TransitionResult_7875F3AC4CFA6AAD15B9DCB01AE4A642();
	void ExecuteUbergraph_RIG_Glamrock_Freddy_PartsServ_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
