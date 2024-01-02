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
	 * AnimBlueprintGeneratedClass EarDynamicsABP.EarDynamicsABP_C
	 * Size -> 0x1854 (FullSize[0x1B0C] - InheritedSize[0x02B8])
	 */
	class UEarDynamicsABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RLQ1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		unsigned char                                              UnknownData_NAFN[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x0300(0x0440)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0740(0x01B0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x08F0(0x0440)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0D30(0x01B0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x0EE0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1320(0x0440)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1760(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x1780(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1898(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x18B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1A10(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1A38(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1AD8(0x0028)
		bool                                                       AnimDynamics_Ears;                                       // 0x1B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QSYN[0x3];                                   // 0x1B01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EarDynamicAlpha;                                         // 0x1B04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EaringDynamicAlpha;                                      // 0x1B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC();
		void ExecuteUbergraph_EarDynamicsABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
