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
	 * AnimBlueprintGeneratedClass AnimatronicJiggleABP.AnimatronicJiggleABP_C
	 * Size -> 0x7815 (FullSize[0x7A85] - InheritedSize[0x0270])
	 */
	class UAnimatronicJiggleABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0278(0x0108)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x0380(0x01B0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_20;                           // 0x0530(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_19;                           // 0x0970(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_18;                           // 0x0DB0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_17;                           // 0x11F0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_16;                           // 0x1630(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_15;                           // 0x1A70(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_14;                           // 0x1EB0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_13;                           // 0x22F0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_12;                           // 0x2730(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_11;                           // 0x2B70(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_10;                           // 0x2FB0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_9;                            // 0x33F0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_8;                            // 0x3830(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_7;                            // 0x3C70(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_6;                            // 0x40B0(0x0440)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_3;                              // 0x44F0(0x0108)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_2;                              // 0x45F8(0x0108)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x4700(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x4B40(0x0440)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x4F80(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x4FA0(0x0078)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x5018(0x0020)
		unsigned char                                              UnknownData_988G[0x8];                                   // 0x5038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x5040(0x0440)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x5480(0x01B0)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_15;                             // 0x5630(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x5758(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x5778(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x5798(0x00B8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x5850(0x0108)
		unsigned char                                              UnknownData_EG4V[0x8];                                   // 0x5958(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x5960(0x0440)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x5DA0(0x0030)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_14;                             // 0x5DD0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_13;                             // 0x5EF8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_12;                             // 0x6020(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_11;                             // 0x6148(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_10;                             // 0x6270(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_9;                              // 0x6398(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_8;                              // 0x64C0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_7;                              // 0x65E8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_6;                              // 0x6710(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_5;                              // 0x6838(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_4;                              // 0x6960(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_3;                              // 0x6A88(0x0128)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x6BB0(0x0108)
		unsigned char                                              UnknownData_RQ26[0x8];                                   // 0x6CB8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x6CC0(0x0440)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x7100(0x0108)
		unsigned char                                              UnknownData_6OYK[0x8];                                   // 0x7208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x7210(0x01B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x73C0(0x0108)
		unsigned char                                              UnknownData_WYPI[0x8];                                   // 0x74C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x74D0(0x01B0)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x7680(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x77A8(0x0128)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x78D0(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x7970(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x7A28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x7A50(0x0028)
		float                                                      JiggleDynamicAlpha;                                      // 0x7A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JiggleAlphaScale;                                        // 0x7A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shoulderpad_DynamicAlpha;                                // 0x7A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanJumpscare;                                            // 0x7A84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AnimatronicJiggleABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
