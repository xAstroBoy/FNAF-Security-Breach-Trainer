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
	 * AnimBlueprintGeneratedClass Staffbot_ABP.Staffbot_ABP_C
	 * Size -> 0x2C60 (FullSize[0x2ED0] - InheritedSize[0x0270])
	 */
	class UStaffbot_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x0278(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02A8(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0320(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0428(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0530(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0550(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0570(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x05F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0618(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0640(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x0668(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x06E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x0710(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x0788(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x07B8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x0830(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0860(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0888(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x08B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x08D8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x0900(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0978(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0A18(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x0A90(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x0AC0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0B38(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0B68(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0BE0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x0C80(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0CF8(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0D70(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x0E10(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0E40(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0EF0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0F20(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x0FD0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x1080(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x10F8(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x11A8(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1260(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x1288(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x12B0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x12D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1300(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1328(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x1350(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1418(0x00E0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x14F8(0x00B0)
		float                                                      __CustomProperty_Time_BCAB4F524DF88F3CDCCB3B8890C6DE16;  // 0x15A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_CanJumpscare_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VV4[0x3];                                   // 0x15AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_AimTarget_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsWarning_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsMoving_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KK5E[0x2];                                   // 0x15BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            __CustomProperty_R_WristAim_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsHeadAiming_BCAB4F524DF88F3CDCCB3B8890C6DE16; // 0x15CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_171L[0x3];                                   // 0x15CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_7;                         // 0x15D0(0x00A0)
		bool                                                       __CustomProperty_CanDie_FC7C08844A9114C322E91E960F40A464; // 0x1670(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_Stunned_FC7C08844A9114C322E91E960F40A464; // 0x1671(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_CanFireLaser_FC7C08844A9114C322E91E960F40A464; // 0x1672(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_CanSeePlayer_FC7C08844A9114C322E91E960F40A464; // 0x1673(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDFB[0x4];                                   // 0x1674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_6;                         // 0x1678(0x00A0)
		float                                                      __CustomProperty_LockR_Shoulder_Alpha_88093F724F8404A57ED8C7B427553A7B; // 0x1718(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_R_Wrist2Rotation_88093F724F8404A57ED8C7B427553A7B; // 0x171C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             __CustomProperty_RWristLocation_88093F724F8404A57ED8C7B427553A7B; // 0x1728(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAFN[0x4];                                   // 0x1734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_5;                         // 0x1738(0x00A0)
		TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>            __CustomProperty_jobEnum_2223EB084956692E101AC39C3EB08AB6; // 0x17D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9F45[0x3];                                   // 0x17D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_AimTarget_2223EB084956692E101AC39C3EB08AB6; // 0x17DC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsHeadAiming_2223EB084956692E101AC39C3EB08AB6; // 0x17E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RNTD[0x7];                                   // 0x17E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x17F0(0x00A0)
		bool                                                       __CustomProperty_HasPass_41487E5C4BB83CC4B35EB7AB8EAFE4BB; // 0x1890(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsRequesting_41487E5C4BB83CC4B35EB7AB8EAFE4BB; // 0x1891(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_CanJumpscare_41487E5C4BB83CC4B35EB7AB8EAFE4BB; // 0x1892(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_Stunned_41487E5C4BB83CC4B35EB7AB8EAFE4BB; // 0x1893(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZXUJ[0x4];                                   // 0x1894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x1898(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1938(0x0028)
		bool                                                       __CustomProperty_isAlerting_BD4C8E04418147F7938792A16F49D632; // 0x1960(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isWarning_BD4C8E04418147F7938792A16F49D632; // 0x1961(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZZ2D[0x2];                                   // 0x1962(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        __CustomProperty_WarningLevel_BD4C8E04418147F7938792A16F49D632; // 0x1964(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_isAiming_BD4C8E04418147F7938792A16F49D632; // 0x1968(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ROJN[0x7];                                   // 0x1969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x1970(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1A10(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1A58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1A80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1AA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1AD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1AF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1B20(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x1B48(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1BC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1BF0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1C68(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1C98(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1D10(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1DD0(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x1E48(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1F10(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1F88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1FB8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2030(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x2060(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x20D8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x2108(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x21B8(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2258(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x2310(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x2360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x2388(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x23B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x23D8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x2400(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x2478(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x24A8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2520(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x2550(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x25C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x25F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2620(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2648(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2710(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2788(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2800(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2830(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x28A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x28D8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2988(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x29B8(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2A68(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2A88(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2AA8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2BB0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2BD8(0x00A0)
		struct FVector                                             ExternalForce;                                           // 0x2C78(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x2C84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Spine_jnt;                                               // 0x2C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Staffbot_PA;                                             // 0x2C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Staffbot_PA_Enum_EStaffbot_PA_Enum>            PAProfileEnum;                                           // 0x2C98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6E3C[0x3];                                   // 0x2C99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PAProfileName;                                           // 0x2C9C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WB4D[0x4];                                   // 0x2CA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalAnimationComponent*                         PhysicalAnimationComponent;                              // 0x2CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x2CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightChest;                                        // 0x2CB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeight__L_Arm;                                      // 0x2CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                L_Shoulder_jnt;                                          // 0x2CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                R_Shoulder_jnt;                                          // 0x2CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaffBotBase_C*                                     Pawn;                                                    // 0x2CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Neck_jnt;                                                // 0x2CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightNeck;                                         // 0x2CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCurves;                                               // 0x2CE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TEnumAsByte<Staffbot_Constraint_Enum_EStaffbot_Constraint_Enum> Con_ProfileEnum;                                         // 0x2CE5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VJ78[0x2];                                   // 0x2CE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConstraintProfileName;                                   // 0x2CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeed;                                                // 0x2CF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Wheels_jnt;                                              // 0x2CF4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightWheels;                                       // 0x2CFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeight__R_Arm;                                      // 0x2D00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendWeightProps;                                        // 0x2D04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                L_Prop_jnt;                                              // 0x2D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                R_Prop_jnt;                                              // 0x2D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PropMesh_L;                                              // 0x2D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        StaffBotBoxes;                                           // 0x2D20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeadAiming;                                            // 0x2D24(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsChestAiming;                                           // 0x2D25(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JG45[0x2];                                   // 0x2D26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedFwdInput;                                       // 0x2D28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x2D2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TPON[0x3];                                   // 0x2D2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x2D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             AimTarget;                                               // 0x2D34(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AimRotChest;                                             // 0x2D40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChestAimAlpha;                                           // 0x2D4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Degrees_Float;                                           // 0x2D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlertLevel;                                              // 0x2D54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWarning;                                               // 0x2D58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AOMG[0x3];                                   // 0x2D59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AimRotNeck;                                              // 0x2D5C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stunned;                                                 // 0x2D68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEP8[0x3];                                   // 0x2D69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PawnVelocity;                                            // 0x2D6C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveSpeedRightInput;                                     // 0x2D78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFazertag;                                              // 0x2D7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanFireLaser;                                            // 0x2D7D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPreview;                                               // 0x2D7E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GE91[0x1];                                   // 0x2D7F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Current_Location;                                        // 0x2D80(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OldLocation;                                             // 0x2D8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canJumpscare;                                            // 0x2D98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasProp;                                                 // 0x2D99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanDoTask;                                               // 0x2D9A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MAC0[0x5];                                   // 0x2D9B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStaffbotTaskPlacement_C*                            TargetTaskPoint;                                         // 0x2DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanSeePlayer;                                            // 0x2DA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FLRG[0x3];                                   // 0x2DA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NCanSeePlayer;                                           // 0x2DAC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PreviousRotation;                                        // 0x2DB4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTurning_L;                                             // 0x2DC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurning;                                               // 0x2DC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N1AH[0x2];                                   // 0x2DC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnRate;                                                // 0x2DC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TurnLeft;                                                // 0x2DC8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TurnRight;                                               // 0x2DD4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetSpineOrientation;                                  // 0x2DE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurnRateMult;                                            // 0x2DEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnAlpha;                                               // 0x2DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AimAtPlayer;                                             // 0x2DF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XL9K[0x3];                                   // 0x2DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Head_jnt;                                                // 0x2DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimRotInterpSpeed;                                       // 0x2E00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlphaInterpSpeed;                                     // 0x2E04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpAimAlphas;                                         // 0x2E08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockR_Shoulder;                                          // 0x2E09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3IJ7[0x2];                                   // 0x2E0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            R_Wrist2Rotation;                                        // 0x2E0C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RWristLocation;                                          // 0x2E18(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LockR_Shoulder_Alpha;                                    // 0x2E24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L_IK_Alpha;                                              // 0x2E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      R_IK_Alpha;                                              // 0x2E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       L_IK_On;                                                 // 0x2E30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       R_IK_On;                                                 // 0x2E31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2CEB[0x2];                                   // 0x2E32(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             L_IK_Target;                                             // 0x2E34(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             R_IK_Target;                                             // 0x2E40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LWristLocation;                                          // 0x2E4C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            L_Wrist2Rotation;                                        // 0x2E58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockL_Shoulder;                                          // 0x2E64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TEnumAsByte<AnimatronicModeEnum_EAnimatronicModeEnum>      AnimationMode;                                           // 0x2E65(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YDZ5[0x2];                                   // 0x2E66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x2E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x2E70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>            jobEnum;                                                 // 0x2E71(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DA4L[0x2];                                   // 0x2E72(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DirectionMovement;                                       // 0x2E74(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            R_WristAim;                                              // 0x2E80(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      r_Wheel_roll;                                            // 0x2E8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      l_Wheel_roll;                                            // 0x2E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation;                                         // 0x2E94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PartyPassReceived;                                       // 0x2EA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerHasPartyPass;                                      // 0x2EA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZLPV[0x2];                                   // 0x2EA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        WarningLevel;                                            // 0x2EA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isAlerting;                                              // 0x2EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isMovementSoundPlaying;                                  // 0x2EA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpineDynamicsON;                                         // 0x2EAA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RArmDynamicsOn;                                          // 0x2EAB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LArmDynamicsOn;                                          // 0x2EAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HeadDynamicsOn;                                          // 0x2EAD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canDie;                                                  // 0x2EAE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isPerforming;                                            // 0x2EAF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   PerformanceAnim;                                         // 0x2EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          AnimVODT;                                                // 0x2EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   PreviousPerformanceAnim;                                 // 0x2EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SequenceLength;                                          // 0x2EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnTime;                                                // 0x2ECC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayerSpendsPartyPass_Event();
		void Wheels(const struct FPoseLink& InPose_2, struct FPoseLink* Wheels);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EnableSimulation(bool SpineDynamicsON, bool RArmDynamicsOn, bool LArmDynamicsOn, bool HeadDynamicsOn);
		void FindRotationForWheels();
		void WorkerBotMovement();
		void ApplyPA_BlendWeight_Func();
		void SetPA_BlendWeights_Func(float BlendWeightNeck, float BlendWeightChest, float BlendWeight__L_Arm, float BlendWeight__R_Arm, float BlendWeightWheels, float BlendWeightProps);
		void UseCurves_Func(const class FName& Neck, const class FName& Chest, const class FName& L_Arm, const class FName& R_Arm, float* NeckOut, float* ChestOut, float* ArmOut_L, float* ArmOut_R);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_1CD6050148018CCE080A00A4F71D0C11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F64348B64E7A71779EA334A759AE948D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_1B76BDE4438B9A24D12173AB010FCA1D();
		void CanJumpscareEvent();
		void TurnEvent(float TurnDegrees);
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void SearchingDone();
		void Open();
		void OpenDone();
		void StartScan();
		void CanRunEvent(bool CanRun);
		void Stun_Event(bool Is_Stunned);
		void CanRummageEvent();
		void IsFirstPersonEvent();
		void IsNotFirstPersonEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F();
		void CanPerformEvent(bool Off);
		void isStunnedEvent(bool IsStunned);
		void PerformEvent();
		void SellEvent();
		void Spotlight_Aim_Actor(class AActor* AimActor);
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
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void Change_PA_Profile_Event(TEnumAsByte<Staffbot_PA_Enum_EStaffbot_PA_Enum> ProfileEnum, bool bIncludeSelf);
		void AnimNotify_SpringProfile();
		void AnimNotify_LooseProfile();
		void AnimNotify_UseCurvesTrue();
		void AnimNotify_UseCurvesFalse();
		void SetConstraintProfile_Event(TEnumAsByte<Staffbot_Constraint_Enum_EStaffbot_Constraint_Enum> Con_ProfileEnum);
		void EnterFreddyOverrideEvent(bool Off);
		void AnimNotify_PropOn_L();
		void AnimNotify_PropOff_L();
		void AimHead_Event(bool AimHead);
		void AimChest_Event(bool AimChest);
		void CanLeapEvent(bool Off);
		void CanLieDownEvent(bool OnOff);
		void SetHeadAim_Event(const struct FVector& AimLocation);
		void IsSickEvent(bool OnOff);
		void CanWaveEvent(bool CanWave);
		void PoundDoorEvent(bool PoundDoor);
		void StopScan();
		void LandEvent();
		void Is_Selling_Event();
		void IsStunned();
		void IsNotStunned();
		void Fire_Laser_Event(bool CanFireLazer);
		void JumpscareEvent(bool canJumpscare);
		void AnimNotify_DoneFiring();
		void TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask);
		void AnimNotify_ModelSwap();
		void AnimNotify_TaskAnimDone();
		void CanSeePlayerEvent();
		void JumpEvent(bool CanJump);
		void AimAtPlayerEvent(bool AimAtPlayer);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void LockRShoulder(bool LockR_Shoulder);
		void LockLShoulder(bool LockL_Shoulder);
		void Breakthrough();
		void R_IK_Arm_Event(bool Is_ON);
		void L_IK_Arm_Target_Event(const struct FVector& Target);
		void L_IK_Arm_Event(bool IsON);
		void R_IK_Arm_Target_Event(const struct FVector& Target);
		void WarningEvent(bool IsWarning, int WarningCount);
		void OnAnimInstanceSwap();
		void PlayerHasPartyPass_Event(bool HasPartyPass);
		void AnimNotify_Sound_EndArmMovement();
		void AnimNotify_Sound_EndHeadMovement();
		void AnimNotify_Sound_EndMovement();
		void AnimNotify_Sound_StartArmMovement();
		void AnimNotify_Sound_StartHeadMovement();
		void AnimNotify_Sound_StartMovement();
		void RummagingDoneEvent();
		void AlertEvent(bool isAlerting);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void HeadAimEvent(bool OnOff);
		void FazerblastDestroy_Event();
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void SecurityTurnEvent(float Time);
		void ExecuteUbergraph_Staffbot_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
