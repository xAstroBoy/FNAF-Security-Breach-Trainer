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
	 * AnimBlueprintGeneratedClass AnimatronicJiggleABP.AnimatronicJiggleABP_C
	 * Size -> 0x7A14 (FullSize[0x7CCC] - InheritedSize[0x02B8])
	 */
	class UAnimatronicJiggleABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_N5M0[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x02C8(0x0108)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x03D0(0x01B0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_20;                           // 0x0580(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_19;                           // 0x09C0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_18;                           // 0x0E00(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_17;                           // 0x1240(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_16;                           // 0x1680(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_15;                           // 0x1AC0(0x0440)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1F00(0x0028)
		unsigned char                                              UnknownData_U671[0x8];                                   // 0x1F28(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_14;                           // 0x1F30(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_13;                           // 0x2370(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_12;                           // 0x27B0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_11;                           // 0x2BF0(0x0440)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x3030(0x0028)
		unsigned char                                              UnknownData_ZT0G[0x8];                                   // 0x3058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_10;                           // 0x3060(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_9;                            // 0x34A0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_8;                            // 0x38E0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_7;                            // 0x3D20(0x0440)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x4160(0x0158)
		unsigned char                                              UnknownData_ZKR5[0x8];                                   // 0x42B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_6;                            // 0x42C0(0x0440)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_3;                              // 0x4700(0x0108)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_2;                              // 0x4808(0x0108)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x4910(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x4D50(0x0440)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x5190(0x00A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x5230(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x5250(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x5368(0x0020)
		unsigned char                                              UnknownData_I0RG[0x8];                                   // 0x5388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x5390(0x0440)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x57D0(0x01B0)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_15;                             // 0x5980(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x5AA8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x5AC8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x5AE8(0x0158)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x5C40(0x0108)
		unsigned char                                              UnknownData_1HYI[0x8];                                   // 0x5D48(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x5D50(0x0440)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x6190(0x0030)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_14;                             // 0x61C0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_13;                             // 0x62E8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_12;                             // 0x6410(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_11;                             // 0x6538(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_10;                             // 0x6660(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_9;                              // 0x6788(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_8;                              // 0x68B0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_7;                              // 0x69D8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_6;                              // 0x6B00(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_5;                              // 0x6C28(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_4;                              // 0x6D50(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_3;                              // 0x6E78(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x6FA0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x70C8(0x0128)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x71F0(0x01B0)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x73A0(0x0108)
		unsigned char                                              UnknownData_X5EZ[0x8];                                   // 0x74A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x74B0(0x0440)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x78F0(0x0108)
		unsigned char                                              UnknownData_YWVA[0x8];                                   // 0x79F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x7A00(0x01B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x7BB0(0x0108)
		float                                                      JiggleDynamicAlpha;                                      // 0x7CB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JiggleAlphaScale;                                        // 0x7CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShoulderpadDynamicAlpha;                                 // 0x7CC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanJumpscare;                                            // 0x7CC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FT1L[0x3];                                   // 0x7CC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZVel_Alpha;                                              // 0x7CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
