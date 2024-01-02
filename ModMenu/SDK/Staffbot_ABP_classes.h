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
	 * AnimBlueprintGeneratedClass Staffbot_ABP.Staffbot_ABP_C
	 * Size -> 0x5112 (FullSize[0x53CA] - InheritedSize[0x02B8])
	 */
	class UStaffbot_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_IATO[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0410(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0518(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0620(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x0640(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0660(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0x0690(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0x06B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0x06E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x0708(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x0730(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0x0758(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_53;                            // 0x07D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0x0808(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_52;                            // 0x0888(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0x08B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_51;                            // 0x0938(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x0968(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x0990(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x09B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x09E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0x0A08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x0A88(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0x0B28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_50;                            // 0x0BA8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0x0BD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_49;                            // 0x0C58(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0x0C88(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x0D08(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x0DA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0x0E28(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x0EA8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_48;                            // 0x0F48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_12;                           // 0x0F78(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_47;                            // 0x1028(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x1058(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1108(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1260(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x12A8(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1370(0x00E8)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x1458(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x1508(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x15A8(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x15F0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x1610(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1630(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1738(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1760(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x1800(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x1828(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x1850(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x1878(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x18A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x18C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x18F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x1918(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x1940(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x1968(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x1990(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x19B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x19E0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1A08(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_46;                            // 0x1A30(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x1A60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x1A88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x1AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x1AD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x1B00(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0x1B28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_45;                            // 0x1BA8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0x1BD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_44;                            // 0x1C58(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0x1C88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0x1D08(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x1D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x1D60(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x1D88(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0x1E50(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0x1ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0x1F50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0x1F80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0x2000(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x2030(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0x20E0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x2110(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0x21C0(0x0030)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x21F0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x2290(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x22C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x22E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x2310(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x2338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x2360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x2388(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x23B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x2430(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x2460(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x24E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x2510(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x2590(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x25C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x25E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x2610(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x2638(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x2660(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x2688(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x26B0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x26D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x2758(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x2788(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x2808(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x2838(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x28B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x28E8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2968(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x2A08(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x2A88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x2AB8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2B38(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x2BD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x2C58(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x2C88(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x2D08(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x2DA8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x2E28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x2E58(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x2ED8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x2F08(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x2FB8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x2FE8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x3098(0x0030)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x30C8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x3168(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x3190(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x31C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x31E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x3210(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x3238(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x3260(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x3288(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x32B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x3330(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x3360(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x33E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x3410(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x3490(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x3550(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x35D0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x3698(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x3718(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x3748(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x37C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x37F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x3878(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x38A8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x3958(0x0030)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x3988(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x3A90(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x3AB0(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x3AD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x3AF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x3B20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x3B48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x3B70(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x3B98(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x3C18(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x3C48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x3CC8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x3D48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x3DC8(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x3E48(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x3EE8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x3F18(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x4000(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x40A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x4120(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x4150(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x4200(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x4230(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x4258(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x4280(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x42A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x42D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x42F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x4378(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x43A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x4428(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x4458(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x44D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x4508(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x4588(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x45B8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x4668(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x4698(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x46C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x46E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x4710(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x4738(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x47B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x47E8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x4868(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x4928(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x49A8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x49D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x4A00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x4A28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x4A50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x4A78(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x4AA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x4B20(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x4B50(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x4BD0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x4C00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x4C80(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x4CB0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x4D30(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x4DD0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x4E48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x4E78(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x4F28(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x4F58(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x5008(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x5038(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x5060(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x5090(0x00B0)
		bool                                                       __CustomProperty_HasPass_993BD01742AA7369E7F75D9DDCBF222E; // 0x5140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsRequesting_993BD01742AA7369E7F75D9DDCBF222E; // 0x5141(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_CanJumpscare_993BD01742AA7369E7F75D9DDCBF222E; // 0x5142(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_Stunned_993BD01742AA7369E7F75D9DDCBF222E; // 0x5143(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      __CustomProperty_LockRShoulder_Alpha_D84D2EC7463B59F8AA64AABE21BFC666; // 0x5144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_R_Wrist2Rotation_D84D2EC7463B59F8AA64AABE21BFC666; // 0x5148(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             __CustomProperty_RWristLocation_D84D2EC7463B59F8AA64AABE21BFC666; // 0x5154(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStaffbotJob_Anim                                          __CustomProperty_jobEnum_2223EB084956692E101AC39C3EB08AB6; // 0x5160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8O6Y[0x3];                                   // 0x5161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_AimTarget_2223EB084956692E101AC39C3EB08AB6; // 0x5164(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsHeadAiming_2223EB084956692E101AC39C3EB08AB6; // 0x5170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D0KW[0x3];                                   // 0x5171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExternalForce;                                           // 0x5174(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x5180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Spine_jnt;                                               // 0x5184(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Staffbot_PA;                                             // 0x518C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStaffbot_PA_Enum                                          PAProfileEnum;                                           // 0x5194(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WALS[0x3];                                   // 0x5195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PAProfileName;                                           // 0x5198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimationComponent;                              // 0x51A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x51A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightChest;                                        // 0x51B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeight_L_Arm;                                       // 0x51B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                L_Shoulder_jnt;                                          // 0x51B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                R_Shoulder_jnt;                                          // 0x51C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaffBotBase_C*                                     Pawn;                                                    // 0x51C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Neck_jnt;                                                // 0x51D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightNeck;                                         // 0x51D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCurves;                                               // 0x51DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EStaffbot_Constraint_Enum                                  Con_ProfileEnum;                                         // 0x51DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6LGD[0x2];                                   // 0x51DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConstraintProfileName;                                   // 0x51E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeed;                                                // 0x51E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Wheels_jnt;                                              // 0x51EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightWheels;                                       // 0x51F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeight_R_Arm;                                       // 0x51F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightProps;                                        // 0x51FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                L_Prop_jnt;                                              // 0x5200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                R_Prop_jnt;                                              // 0x5208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PropMesh_L;                                              // 0x5210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StaffBotBoxes;                                           // 0x5218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeadAiming;                                            // 0x521C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsChestAiming;                                           // 0x521D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZ12[0x2];                                   // 0x521E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedFwdInput;                                       // 0x5220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x5224(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQ7H[0x3];                                   // 0x5225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x5228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             AimTarget;                                               // 0x522C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AimRotChest;                                             // 0x5238(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChestAimAlpha;                                           // 0x5244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Degrees_Float;                                           // 0x5248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlertLevel;                                              // 0x524C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWarning;                                               // 0x5250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2352[0x3];                                   // 0x5251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AimRotNeck;                                              // 0x5254(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stunned;                                                 // 0x5260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AKOW[0x3];                                   // 0x5261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PawnVelocity;                                            // 0x5264(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveSpeedRightInput;                                     // 0x5270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFazertag;                                              // 0x5274(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanFireLaser;                                            // 0x5275(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPreview;                                               // 0x5276(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RR4P[0x1];                                   // 0x5277(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentLocation;                                         // 0x5278(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OldLocation;                                             // 0x5284(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanJumpscare;                                            // 0x5290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasProp;                                                 // 0x5291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanDoTask;                                               // 0x5292(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5B5T[0x5];                                   // 0x5293(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStaffbotTaskPlacement_C*                            TargetTaskPoint;                                         // 0x5298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canSeePlayer;                                            // 0x52A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2R0[0x3];                                   // 0x52A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NCanSeePlayer;                                           // 0x52A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PreviousRotation;                                        // 0x52AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTurningL;                                              // 0x52B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurning;                                               // 0x52B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3HQS[0x2];                                   // 0x52BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnRate;                                                // 0x52BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TurnLeft;                                                // 0x52C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TurnRight;                                               // 0x52CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetSpineOrientation;                                  // 0x52D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurnRateMult;                                            // 0x52E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnAlpha;                                               // 0x52E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AimAtPlayer;                                             // 0x52EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MQLM[0x3];                                   // 0x52ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Head_jnt;                                                // 0x52F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimRotInterpSpeed;                                       // 0x52F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlphaInterpSpeed;                                     // 0x52FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpAimAlphas;                                         // 0x5300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockR_Shoulder;                                          // 0x5301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDMU[0x2];                                   // 0x5302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            R_Wrist2Rotation;                                        // 0x5304(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RWristLocation;                                          // 0x5310(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LockRShoulder_Alpha;                                     // 0x531C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L_IK_Alpha;                                              // 0x5320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      R_IK_Alpha;                                              // 0x5324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       L_IK_On;                                                 // 0x5328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       R_IK_On;                                                 // 0x5329(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EIG7[0x2];                                   // 0x532A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             L_IK_Target;                                             // 0x532C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             R_IK_Target;                                             // 0x5338(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LWristLocation;                                          // 0x5344(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            L_Wrist2Rotation;                                        // 0x5350(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockL_Shoulder;                                          // 0x535C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAnimatronicModeEnum                                       AnimationMode;                                           // 0x535D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VWPP[0x2];                                   // 0x535E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x5360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x5368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EStaffbotJob_Anim                                          jobEnum;                                                 // 0x5369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HFB9[0x2];                                   // 0x536A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DirectionMovement;                                       // 0x536C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            R_WristAim;                                              // 0x5378(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      r_Wheel_roll;                                            // 0x5384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      l_Wheel_roll;                                            // 0x5388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation;                                         // 0x538C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PartyPassReceived;                                       // 0x5398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerHasPartyPass;                                      // 0x5399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYKA[0x2];                                   // 0x539A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WarningLevel;                                            // 0x539C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isAlerting;                                              // 0x53A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isMovementSoundPlaying;                                  // 0x53A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpineDynamicsON;                                         // 0x53A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RArmDynamicsOn;                                          // 0x53A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LArmDynamicsOn;                                          // 0x53A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HeadDynamicsOn;                                          // 0x53A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canDie;                                                  // 0x53A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isPerforming;                                            // 0x53A7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   PerformanceAnim;                                         // 0x53A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          AnimVODT;                                                // 0x53B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   PreviousPerformanceAnim;                                 // 0x53B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SequenceLength;                                          // 0x53C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnTime;                                                // 0x53C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AltReqAnim;                                              // 0x53C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PassReceived;                                            // 0x53C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void PlayerSpendsPartyPass_Event();
		void Wheels(const struct FPoseLink& InPose_2, struct FPoseLink* Wheels);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EnableSimulation(bool SpineDynamicsON, bool RArmDynamicsOn, bool LArmDynamicsOn, bool HeadDynamicsOn);
		void FindRotationForWheels();
		void WorkerBotMovement();
		void ApplyPA_BlendWeight_Func();
		void SetPA_BlendWeights_Func(float BlendWeightNeck, float BlendWeightChest, float BlendWeight_L_Arm, float BlendWeight_R_Arm, float BlendWeightWheels, float BlendWeightProps);
		void UseCurves_Func(const class FName& Neck, const class FName& Chest, const class FName& LArm, const class FName& RArm, float* NeckOut, float* ChestOut, float* ArmOut_L, float* ArmOut_R);
		void CanPerformEvent(bool Off);
		void isStunnedEvent(bool IsStunned);
		void PerformEvent();
		void SellEvent();
		void OverlappingDoor(bool Overlapping, class AActor* Instigator);
		void IsHangingEvent(bool IsHanging);
		void SpotlightAimActor(class AActor* AimActor);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
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
		void StunEvent(bool IsStunned);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void OpenDone();
		void Open();
		void SearchingDone();
		void Searching(EHideObjectType HideType);
		void TurnEvent(float TurnDegrees);
		void CanJumpscareEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void Change_PA_Profile_Event(EStaffbot_PA_Enum ProfileEnum, bool bIncludeSelf);
		void AnimNotify_SpringProfile();
		void AnimNotify_LooseProfile();
		void AnimNotify_UseCurvesTrue();
		void AnimNotify_UseCurvesFalse();
		void SetConstraintProfile_Event(EStaffbot_Constraint_Enum Con_ProfileEnum);
		void AnimNotify_PropOn_L();
		void AnimNotify_PropOff_L();
		void AimHead_Event(bool AimHead);
		void AimChest_Event(bool AimChest);
		void SetHeadAim_Event(const struct FVector& AimLocation);
		void IsSellingEvent();
		void IsStunned();
		void IsNotStunned();
		void FireLaserEvent(bool CanFireLazer);
		void JumpscareEvent(bool CanJumpscare);
		void AnimNotify_DoneFiring();
		void TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask);
		void AnimNotify_ModelSwap();
		void AnimNotify_TaskAnimDone();
		void CanSeePlayerEvent();
		void AimAtPlayerEvent(bool AimAtPlayer);
		void LockRShoulder(bool LockR_Shoulder);
		void LockLShoulder(bool LockL_Shoulder);
		void R_IK_Arm_Event(bool IsOn);
		void L_IK_Arm_Target_Event(const struct FVector& Target);
		void L_IK_Arm_Event(bool IsON);
		void R_IK_Arm_Target_Event(const struct FVector& Target);
		void WarningEvent(bool IsWarning, int32_t WarningCount);
		void PlayerHasPartyPass_Event(bool HasPartyPass);
		void AnimNotify_Sound_EndArmMovement();
		void AnimNotify_Sound_EndHeadMovement();
		void AnimNotify_Sound_EndMovement();
		void AnimNotify_Sound_StartArmMovement();
		void AnimNotify_Sound_StartHeadMovement();
		void AnimNotify_Sound_StartMovement();
		void AlertEvent(bool isAlerting);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void HeadAimEvent(bool OnOff);
		void FazerblastDestroy_Event();
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void SecurityTurnEvent(float Time);
		void AnimNotify_SelectAnim();
		void AnimNotify_DanceDone();
		void ExecuteUbergraph_Staffbot_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
