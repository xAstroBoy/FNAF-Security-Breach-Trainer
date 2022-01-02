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

// AnimBlueprintGeneratedClass PartsAndServArms_ABP.PartsAndServArms_ABP_C
// 0x1944 (FullSize[0x1BAC] - InheritedSize[0x0268])
class UPartsAndServArms_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_M6V4[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x02A8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0358(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0410(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0438(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x0520(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x0548(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x0570(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x0598(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x05C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x05E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x0610(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x0638(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x0660(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x06D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x0708(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x0780(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x07B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x0828(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x0858(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x08D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x0900(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x0978(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x09A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x0A20(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x0A50(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x0B00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x0B28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x0B50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x0B78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0BA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0BC8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x0BF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x0C68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x0C98(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x0D10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x0D40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x0DB8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x0DE8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x0E60(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x0E90(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x0F08(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x0F38(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0FE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x1010(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x1038(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x1060(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x1088(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x10B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x1128(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1158(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x11D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1200(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1278(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x12A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x1320(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1350(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x13C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x13F8(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x14A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x14F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x1518(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x1540(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x1568(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x1590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x15B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x15E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x1608(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1630(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x1658(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x16D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x1700(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x1778(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x17A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x1820(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1850(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x18C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x18F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1970(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x19A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1A18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1A48(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1AC0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1AF0(0x00B0)
	bool                                               HatOn;                                                     // 0x1BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum;                                                  // 0x1BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HeadOn;                                                    // 0x1BA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ArmOpen;                                                   // 0x1BA3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reset;                                                     // 0x1BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HandOn;                                                    // 0x1BA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BowTieOn;                                                  // 0x1BA6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChestplateOn;                                              // 0x1BA7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               L_Eye_IN;                                                  // 0x1BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               R_eye_In;                                                  // 0x1BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VoiceBoxSwap_1;                                            // 0x1BAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanTest;                                                   // 0x1BAB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass PartsAndServArms_ABP.PartsAndServArms_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_FF402F5B4ABC4960EAA46C8EED643E5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_56A6CD8A452639C8323B9591AD6E9655();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_5E7B70B44B084342FCB7409662EE461D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_9F92A2D6413D068E3D9CAD8BF5A6A6DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_52B341E7403214F57D0B2E81E1A03FEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_1673EC8F4CE23B0ECBAC2AB564049749();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_E0F0880B4C77A591FDB36CB2D03551B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PartsAndServArms_ABP_AnimGraphNode_TransitionResult_C506FB124A84B415620B50A8BDEBD57D();
	void Off(bool Off);
	void Close(bool close);
	void ResetFreddy();
	void TestButton_B();
	void TestButton_G();
	void TestButton_R();
	void TestButton_Y();
	void Out(bool In);
	void VoiceBoxSwap(bool Off);
	void PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum);
	void ExecuteUbergraph_PartsAndServArms_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
