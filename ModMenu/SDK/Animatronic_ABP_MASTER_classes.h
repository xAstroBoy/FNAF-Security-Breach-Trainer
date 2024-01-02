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
	 * AnimBlueprintGeneratedClass Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C
	 * Size -> 0xA0D0 (FullSize[0xA388] - InheritedSize[0x02B8])
	 */
	class UAnimatronic_ABP_MASTER_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_W62A[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x02C8(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x0388(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x03A8(0x0020)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x03C8(0x00C8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x0490(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70;                         // 0x04B0(0x0080)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x0530(0x0440)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0970(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x0990(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_69;                         // 0x0A50(0x0080)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0AD0(0x0118)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_68;                         // 0x0BE8(0x0080)
		unsigned char                                              UnknownData_YEXA[0x8];                                   // 0x0C68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x0C70(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x10B0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x14F0(0x0440)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x1930(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x1958(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x1AB0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x1AD8(0x00A0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x1B78(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_87;                       // 0x1BA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_86;                       // 0x1BD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_85;                       // 0x1BF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_84;                       // 0x1C20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_83;                       // 0x1C48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_82;                       // 0x1C70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81;                       // 0x1C98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_80;                       // 0x1CC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_79;                       // 0x1CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_78;                       // 0x1D10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77;                       // 0x1D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_76;                       // 0x1D60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_75;                       // 0x1D88(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_67;                         // 0x1DB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_58;                            // 0x1E30(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_74;                       // 0x1E60(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66;                         // 0x1E88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_57;                            // 0x1F08(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65;                         // 0x1F38(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_56;                            // 0x1FB8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_13;                           // 0x1FE8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_55;                            // 0x2098(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_73;                       // 0x20C8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_64;                         // 0x20F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_54;                            // 0x2170(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_63;                         // 0x21A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_53;                            // 0x2220(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_12;                           // 0x2250(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_52;                            // 0x2300(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_62;                         // 0x2330(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x23B0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_61;                         // 0x2450(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_51;                            // 0x24D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_60;                         // 0x2500(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x2580(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_59;                         // 0x2620(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_50;                            // 0x26A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_58;                         // 0x26D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_49;                            // 0x2750(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57;                         // 0x2780(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x2800(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_56;                         // 0x28A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_48;                            // 0x2920(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x2950(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_47;                            // 0x2978(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_55;                         // 0x29A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_46;                            // 0x2A28(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x2A58(0x00B0)
		unsigned char                                              UnknownData_T50Y[0x8];                                   // 0x2B08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x2B10(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x2CF0(0x01E0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x2ED0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x2F80(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x30D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_72;                       // 0x3100(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_71;                       // 0x3128(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70;                       // 0x3150(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_69;                       // 0x3178(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0x31A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0x31C8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_54;                         // 0x31F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_45;                            // 0x3270(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53;                         // 0x32A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_44;                            // 0x3320(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0x3350(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x3378(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0x3460(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0x3490(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0x3510(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x3540(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_12;                                   // 0x35F0(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x3638(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x3790(0x0158)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_3;                              // 0x38E8(0x0108)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_2;                              // 0x39F0(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x3AF8(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x3BB8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x3CC0(0x0020)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_5;                         // 0x3CE0(0x00A0)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x3D80(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x3E88(0x0158)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x3FE0(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4080(0x0020)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x40A0(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x4140(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x4168(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x4190(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x41B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x41E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x4208(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x4230(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x4258(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0x4280(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0x4300(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0x4330(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0x43B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0x43E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0x4460(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0x4490(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x4510(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x4540(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x4568(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0x4598(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x4618(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x4648(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x46F8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x4798(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x47C0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x4808(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x48A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x48D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x48F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x4920(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0x4948(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x49C8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x49F8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x4AE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x4B10(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0x4B90(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x4C10(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x4CB0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x4CE0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x4D90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x4DB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x4DE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x4E08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x4E30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x4E58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x4E80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x4EA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x4ED0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x4EF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x4F20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x4F48(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0x4F70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x4FF0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0x5020(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x50A0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x50D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0x50F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x5178(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0x51A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x5228(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x5258(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x5280(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x5368(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0x5398(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0x5418(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x5498(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x5538(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x55B8(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x5680(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x5748(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x57E8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x5888(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x5908(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x5988(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x5A08(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x5A38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x5A60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x5A88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x5AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x5AD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x5B00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x5B28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x5B50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x5B78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x5BA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x5BC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x5BF0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x5C18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x5C98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x5CC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x5D48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x5D78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x5DF8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x5E28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x5EA8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x5ED8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x5F58(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x5F88(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x5FB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x6030(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x60B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x6130(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x61B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x6230(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x62B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x6330(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x63B0(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x6430(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x64E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x6510(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x6590(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x6658(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x66D8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x67A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x6820(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x68C0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x6940(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x69E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x6A60(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x6A90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x6B10(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x6B40(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x6BF0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x6C20(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x6CD0(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x6E28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x6E50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x6E78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x6EA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x6EC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x6EF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x6F18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x6F40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x6F68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x6F90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x6FB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x6FE0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x7008(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x7088(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x70B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x7138(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x7168(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x7190(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x7210(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x7240(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x72C0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x72F0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x7318(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x7400(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x7430(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x7518(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x7548(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x7570(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x7598(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x75C0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x75E8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x76A8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x76F8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x7778(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x7818(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x7898(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x78C8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x7948(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x7978(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x79F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x7A98(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x7B18(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x7BB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x7C38(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x7C68(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x7D18(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x7D48(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x7DF8(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x7F50(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x8010(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x8058(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x80A0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x81F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x8220(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x8248(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x8270(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x8298(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x83F0(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x8438(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x84F8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x8540(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x8588(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x85B0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x85D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x8600(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x8628(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x86E8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x8730(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x8888(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x88B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x88D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x8900(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x8928(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x8950(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x8978(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x89A0(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x89C8(0x0050)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x8A18(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x8A38(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x8A58(0x00C0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x8B18(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x8C00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x8C30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x8CB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x8CE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x8D60(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x8D90(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x8DE0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x8E10(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x8EC0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x8F08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x8F30(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x8F58(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x8FD8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x9008(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x9058(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x9088(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x9138(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x9160(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x9200(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x92E8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x93B0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x93D8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x9400(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x9448(0x0190)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x95D8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x9600(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x9648(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x9708(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x9750(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x9778(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x97A0(0x0028)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x97C8(0x0070)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x9838(0x0028)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x9860(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x9910(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x9940(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x99F0(0x00A0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x9A90(0x0440)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x9ED0(0x0030)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x9F00(0x00A0)
		float                                                      __CustomProperty_HairDynamicAlpha_DEF1F8E4432143C66486B1B884FA447E; // 0x9FA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Shattered_DEF1F8E4432143C66486B1B884FA447E; // 0x9FA4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_AnimDynamics_Chica_DEF1F8E4432143C66486B1B884FA447E; // 0x9FA5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EMI1[0x2];                                   // 0x9FA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_EaringDynamicAlpha_DEF1F8E4432143C66486B1B884FA447E; // 0x9FA8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Shattered_58D86EB644869E72FF47E39A7123862D; // 0x9FAC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L74U[0x3];                                   // 0x9FAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_TailDynamicAlpha_58D86EB644869E72FF47E39A7123862D; // 0x9FB0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Monty_58D86EB644869E72FF47E39A7123862D; // 0x9FB4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SRBM[0x3];                                   // 0x9FB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_HairDynamicAlpha_679C51114A1F4BEB9648BFAC11471E01; // 0x9FB8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_TailDynamicAlpha_679C51114A1F4BEB9648BFAC11471E01; // 0x9FBC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Roxy_679C51114A1F4BEB9648BFAC11471E01; // 0x9FC0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KGK3[0x3];                                   // 0x9FC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_ShoulderpadDynamicAlpha_5D3ABF3A422A1F42A78F9C9EE73241BD; // 0x9FC4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleAlphaScale_5D3ABF3A422A1F42A78F9C9EE73241BD; // 0x9FC8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleDynamicAlpha_5D3ABF3A422A1F42A78F9C9EE73241BD; // 0x9FCC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EaringDynamicAlpha_2C0C197B49F199E222FC7E93CC368070; // 0x9FD0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EarDynamicAlpha_2C0C197B49F199E222FC7E93CC368070; // 0x9FD4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Ears_2C0C197B49F199E222FC7E93CC368070; // 0x9FD8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_OverrideHeadAim_998EF9964CF95A594EEC6797BB479F4E; // 0x9FD9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isOpen_998EF9964CF95A594EEC6797BB479F4E; // 0x9FDA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EAnimatronicModeEnum                                       __CustomProperty_AnimatronicMode_998EF9964CF95A594EEC6797BB479F4E; // 0x9FDB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_isTurningAlpha_998EF9964CF95A594EEC6797BB479F4E; // 0x9FDC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_isTurning_998EF9964CF95A594EEC6797BB479F4E; // 0x9FE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E069[0x3];                                   // 0x9FE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            __CustomProperty_SpineTurnRot_998EF9964CF95A594EEC6797BB479F4E; // 0x9FE4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isHeadAiming_998EF9964CF95A594EEC6797BB479F4E; // 0x9FF0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UYJ1[0x3];                                   // 0x9FF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            __CustomProperty_HeadAimRot_998EF9964CF95A594EEC6797BB479F4E; // 0x9FF4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      __CustomProperty_HeadAimAlpha_998EF9964CF95A594EEC6797BB479F4E; // 0xA000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_HeadAimTarget_998EF9964CF95A594EEC6797BB479F4E; // 0xA004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_ShoulderpadDynamicAlpha_80F9264F45878299AAE3AEBA5FB92ED9; // 0xA010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleAlphaScale_80F9264F45878299AAE3AEBA5FB92ED9; // 0xA014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JiggleDynamicAlpha_80F9264F45878299AAE3AEBA5FB92ED9; // 0xA018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EaringDynamicAlpha_A350582A4109134061835A96AB5CBFD1; // 0xA01C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_EarDynamicAlpha_A350582A4109134061835A96AB5CBFD1; // 0xA020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_AnimDynamics_Ears_A350582A4109134061835A96AB5CBFD1; // 0xA024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_496I[0x3];                                   // 0xA025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaTimeX;                                              // 0xA028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2526[0x4];                                   // 0xA02C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAISeeker_C*                                         Pawn;                                                    // 0xA030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0xA038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VGAT[0x3];                                   // 0xA039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedInput;                                          // 0xA03C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadAimAlpha;                                            // 0xA040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0xA044(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             IKEffector_R;                                            // 0xA050(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_L;                                            // 0xA05C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PVTarget_L;                                              // 0xA068(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PVTarget_R;                                              // 0xA074(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimTarget;                                           // 0xA080(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanJumpscare;                                            // 0xA08C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHeadAiming;                                            // 0xA08D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_18ZG[0x2];                                   // 0xA08E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnDegrees;                                             // 0xA090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTurn;                                                 // 0xA094(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EHideObjectType                                            HideType;                                                // 0xA095(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSearching;                                             // 0xA096(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumping;                                               // 0xA097(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isRummaging;                                             // 0xA098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOpen;                                                  // 0xA099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScan;                                                 // 0xA09A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V113[0x1];                                   // 0xA09B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScanVariation;                                           // 0xA09C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpotted;                                               // 0xA0A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stop_L;                                                  // 0xA0A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BHHX[0x2];                                   // 0xA0A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpottedDelayTime;                                        // 0xA0A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpottedTimer;                                            // 0xA0A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      IKInterpSpeed;                                           // 0xA0B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlertLevel;                                              // 0xA0B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HidingSpaceType;                                         // 0xA0B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZM43[0x4];                                   // 0xA0BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0xA0C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimationComponent;                              // 0xA0C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        SimulationBones;                                         // 0xA0D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                L_Ear_jnt;                                               // 0xA0E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                R_Ear_jnt;                                               // 0xA0E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tail1_jnt;                                               // 0xA0F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TailBase_jnt;                                            // 0xA0F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HairB_jnt;                                               // 0xA100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FrontHairA_jnt;                                          // 0xA108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Hair1_jnt;                                               // 0xA110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Hair2_jnt;                                               // 0xA118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Hair3_jnt;                                               // 0xA120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Freddy_Default;                                          // 0xA128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Roxy_Default;                                            // 0xA130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Monty_Default;                                           // 0xA138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Chica_Default;                                           // 0xA140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhysicsAsset*                                       CharacterPhysicsAsset;                                   // 0xA148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnablePhysicalAnimation;                                 // 0xA150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimDynamics_Ears;                                       // 0xA151(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimDynamics_Roxy;                                       // 0xA152(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimDynamics_Monty;                                      // 0xA153(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimDynamics_Chica;                                      // 0xA154(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanRun;                                                  // 0xA155(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCX4[0x2];                                   // 0xA156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunSpeed;                                                // 0xA158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkSpeed;                                               // 0xA15C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestAimAlpha;                                           // 0xA160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPreview;                                               // 0xA164(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScanL;                                                // 0xA165(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScanR;                                                // 0xA166(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZ2N[0x1];                                   // 0xA167(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scan_Direction_Float;                                    // 0xA168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScanTime;                                                // 0xA16C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ScanCurve;                                               // 0xA170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsStunned;                                               // 0xA178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CUP[0x3];                                   // 0xA179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementOrient;                                          // 0xA17C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchAim;                                                // 0xA180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawAim;                                                  // 0xA184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isTurning;                                               // 0xA188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanBlink;                                                // 0xA189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZURL[0x2];                                   // 0xA18A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            L_ear_Rot;                                               // 0xA18C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            R_ear_Rot;                                               // 0xA198(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JiggleDynamicAlpha;                                      // 0xA1A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBreakThrough;                                         // 0xA1A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ApplyFeetIK;                                             // 0xA1A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MPMF[0x6];                                   // 0xA1AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0xA1B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0xA1B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAnimatronicModeEnum                                       AnimatronicModeEnum;                                     // 0xA1B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UBPC[0x2];                                   // 0xA1BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JiggleScaleTarget;                                       // 0xA1BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EarDynamicAlpha;                                         // 0xA1C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HairDynamicAlpha;                                        // 0xA1C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TailDynamicAlpha;                                        // 0xA1C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JiggleAlphaScale;                                        // 0xA1CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShoulderpadDynamicAlpha;                                 // 0xA1D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EaringDynamicAlpha;                                      // 0xA1D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DynamicBlendInterpSpeed;                                 // 0xA1D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                JiggleAlpha;                                             // 0xA1DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EarAlpha;                                                // 0xA1E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TailAlpha;                                               // 0xA1EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EaringAlpha;                                             // 0xA1F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UseCurves;                                               // 0xA1FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HairAlpha;                                               // 0xA204(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Shattered;                                               // 0xA20C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J3R4[0x3];                                   // 0xA20D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IKFootOffset;                                            // 0xA210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ShoulderPadAlpha;                                        // 0xA214(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentControlRotation;                                  // 0xA21C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WorldTurnAlpha;                                          // 0xA228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreddyTurnAlpha;                                         // 0xA22C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            OldControlRotation;                                      // 0xA230(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TurnSpineRotation;                                       // 0xA23C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentWorldJointRotation;                               // 0xA248(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetControlRotation;                                   // 0xA254(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationDelta;                                           // 0xA260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HGVK[0x4];                                   // 0xA264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAISeeker_C*                                         AISeeker;                                                // 0xA268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrackingPlayer;                                          // 0xA270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WNS5[0x3];                                   // 0xA271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScanTimeRandom;                                          // 0xA274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScanMotionAlpha;                                         // 0xA278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ScanTimerSet;                                            // 0xA27C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GOOE[0x3];                                   // 0xA27D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreddyChestOpenTime;                                     // 0xA280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadAimInterpSpeed;                                      // 0xA284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TieAlpha;                                                // 0xA288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SnapOrient;                                              // 0xA28C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isLanding;                                               // 0xA28D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CJFW[0x2];                                   // 0xA28E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   CurvesDict;                                              // 0xA290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CamshakeFallOff_Locomotion;                              // 0xA2E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadAimClamp;                                            // 0xA2E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ScanUp;                                                  // 0xA2E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PoundDoor;                                               // 0xA2E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanWave;                                                 // 0xA2E7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AITurnDelta;                                             // 0xA2E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOnScreen;                                              // 0xA2EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSick;                                                  // 0xA2ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LieDown;                                                 // 0xA2EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanLeap;                                                 // 0xA2EF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScanBoth;                                             // 0xA2F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BK35[0x3];                                   // 0xA2F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AI_TurnPlayrate;                                         // 0xA2F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideJumpscareJoint;                                  // 0xA2F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9A64[0x3];                                   // 0xA2F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumAimCone;                                          // 0xA2FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumAimCone;                                          // 0xA300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOverride;                                            // 0xA304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C7BR[0x3];                                   // 0xA305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkAlpha;                                               // 0xA308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCrying;                                                // 0xA30C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y2OK[0x3];                                   // 0xA30D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetWalkSpeed;                                         // 0xA310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GregInteracting;                                         // 0xA314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0ZL[0x3];                                   // 0xA315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       JawAnim;                                                 // 0xA318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTalk;                                                 // 0xA320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3KTD[0x3];                                   // 0xA321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EyeTwitch;                                               // 0xA324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanEyeTwitch;                                            // 0xA328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeapRecovery;                                            // 0xA329(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChestFullOpen;                                           // 0xA32A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanLeapLoop;                                             // 0xA32B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FirstPersonAImSpace;                                     // 0xA32C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndingIdle;                                              // 0xA32D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisableHeadAim;                                          // 0xA32E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PWUD[0x1];                                   // 0xA32F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpineLayerAlpha;                                         // 0xA330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpineLayerAlphaLoop;                                     // 0xA334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BNJ1[0x3];                                   // 0xA335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditiveAnimAimAlpha;                                    // 0xA338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2A7U[0x4];                                   // 0xA33C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CurrentTalkTimer;                                        // 0xA340(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       FreddyTurnInPlace;                                       // 0xA348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SHCJ[0x3];                                   // 0xA349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreddyTurnInPlaceDirection;                              // 0xA34C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FreddyTurnInPlaceL;                                      // 0xA350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4OF2[0x7];                                   // 0xA351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   FreddyWave;                                              // 0xA358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayingSearchAnim;                                     // 0xA360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PD2V[0x3];                                   // 0xA361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             JumpscareJoint_Trans;                                    // 0xA364(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            JumpscareJoint_Rot;                                      // 0xA370(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADG0[0x4];                                   // 0xA37C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          VODataTable;                                             // 0xA380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsMeshVisible();
		bool CanReceiveAlert();
		bool IsShatteredVersion();
		class FName GetCurrentPathName();
		EFNAFAISpawnType GetManagedAIType();
		void GetMoveSpeedInput(float* MoveSpeed);
		void Roxy_Dynamics(const struct FPoseLink& InPose, struct FPoseLink* Roxy_Dynamics);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalculateAndApplyHeadAim();
		void ScanWhileMovingFunction();
		void CameraShake_MontyLand();
		void CameraShake();
		void DynamicAlphaBlendFunc(float AlphaVariable, float InterpSpeed, float DefaultValue, const class FName& CurveName, float* Output_Get);
		void ApplyControlRotation(class APawn* AIPawn);
		void BlendJiggleAlphaToTarget();
		void BlinkFunction();
		void ProceduralScan();
		bool PerformScanTrace(bool IsRight);
		void EnableAnimDynamics(bool AnimDynamics_Ears, bool AnimDynamics_Roxy, bool AnimDynamics_Monty, bool AnimDynamics_Chica);
		void AppyPhysicalAnimationToBone(const class FName& InBoneName, const class FName& ProfileName);
		void SetInitialHeadAimFunction();
		void SetupPhysicalAnimation();
		void PerformFootIK(bool LocalIsRightFoot);
		void OverlappingDoor(bool Overlapping, class AActor* Instigator);
		void IsHangingEvent(bool IsHanging);
		void SpotlightAimActor(class AActor* AimActor);
		void EndoBowlingCrawlEvent();
		void EndoSpawnInBowlingEvent();
		void CanDieEvent(bool Off);
		void CanHackEvent(bool Off);
		void FreddyCorrupted(bool Off);
		void ForceAnimOverride(bool enable);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void SearchingDone();
		void TeleportAI(const struct FVector& Location);
		void StartMoveTo(const struct FVector& Location);
		void SendVanessaAlert(class APawn* VanessaPawn);
		void SendPositionalAlert(const struct FVector& Location);
		void ForceJumpscarePlayer();
		void OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName);
		void OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName);
		void OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName);
		void OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName);
		void OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName);
		void OnCompleted_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName);
		void OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName);
		void OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName);
		void OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName);
		void OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_F0413BC34D49680CD5084581C867C985();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_CE0873164C0484567DBB5FB700C8482A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ApplyAdditive_C0C945A54B6BF22E2AD1529F65561B02();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_22EE638841B7E6C0E7FDA68B9E8CB2EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_ABC04883476C501782211DA298CADA38();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_84A9111B4DDE0B4CB1CB90B0DF921700();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_96A6401843DC76286490D18B811537C8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_Constraint_72F426BB4219CC9BB1EB8795BA26E086();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_2F0D592D48997EE91A18F085212688C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_TransitionResult_7EA97177407CA354409B3B84AA5501F6();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_IsSpottedEvent();
		void SpottedTimerOverEvent();
		void AnimNotify_StartScanEvent();
		void AnimNotify_FinishedScanEvent();
		void AnimNotify_TurnCompleteEvent();
		void IsSpottedEvent();
		void BlueprintBeginPlay();
		void AnimNotify_L_Foot_Down();
		void AnimNotify_R_Foot_Down();
		void AnimNotify_SearchEnd();
		void AnimNotify_StartingSearchLoop();
		void OpenDone();
		void Searching(EHideObjectType HideType);
		void TurnEvent(float TurnDegrees);
		void HeadAimEvent(bool OnOff);
		void Open();
		void StartScan();
		void CanJumpscareEvent();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void CanRunEvent(bool CanRun);
		void StunEvent(bool IsStunned);
		void CanRummageEvent();
		void RummagingDoneEvent();
		void AnimNotify_AnimDoneRummaging();
		void CanBlinkEvent(bool CanBlink);
		void AnimNotify_BlinkNotify();
		void OnAnimInstanceSwap();
		void Breakthrough();
		void AnimNotify_BreakthroughEnd();
		void ScanTimerEvent();
		void ScanWhileMoving();
		void StopScanEventLocal();
		void ForceTrackToPlayer();
		void EndTrackToPlayer();
		void JumpEvent(bool CanJump);
		void AnimNotify_TurnOffScanningEvent();
		void StopScan();
		void AnimNotify_HidingSpotEvent();
		void AnimNotify_SearchKillEvent();
		void AnimNotify_EnterSearchStateEvent();
		void PoundDoorEvent(bool PoundDoor);
		void CanWaveEvent(bool CanWave);
		void IsSickEvent(bool OnOff);
		void CanLieDownEvent(bool OnOff);
		void CanLeapEvent(bool Off);
		void EnterFreddyOverrideEvent(bool Off);
		void LandEvent();
		void RoxyCrying(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void AnimNotify_EnteredLeapEvent();
		void AnimNotify_StunOverEvent();
		void AnimNotify_EnableBlendSpace();
		void AnimNotify_DisableBlendSpace();
		void LeapLoopEvent(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void UpdateAlpha();
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void GrateSequenceStop();
		void CutsceneSpineStop();
		void ExecuteUbergraph_Animatronic_ABP_MASTER(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
