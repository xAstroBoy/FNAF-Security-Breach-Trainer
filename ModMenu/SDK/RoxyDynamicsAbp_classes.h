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
	 * AnimBlueprintGeneratedClass RoxyDynamicsAbp.RoxyDynamicsABP_C
	 * Size -> 0x1B4C (FullSize[0x1DBC] - InheritedSize[0x0270])
	 */
	class URoxyDynamicsABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_XKP5[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x0280(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x06C0(0x0440)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0B00(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0B78(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0C38(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0C58(0x0020)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0C78(0x00C8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0D40(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0D60(0x0078)
		unsigned char                                              UnknownData_S2ZN[0x8];                                   // 0x0DD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x0DE0(0x0440)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x1220(0x0078)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1298(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x12B8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1378(0x0078)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x13F0(0x0440)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x1830(0x0108)
		unsigned char                                              UnknownData_3W38[0x8];                                   // 0x1938(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1940(0x0440)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1D80(0x0030)
		bool                                                       AnimDynamics_Roxy;                                       // 0x1DB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BYCD[0x3];                                   // 0x1DB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TailDynamicAlpha;                                        // 0x1DB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HairDynamicAlpha;                                        // 0x1DB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_46F86D8240F8ACA574A93F988992C3B7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_91E243E7438F47A4B8A901A4C6D5E07B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_83B2BB6D45375CA4D8665DA7ACD3036D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_ApplyAdditive_515794A74F0D78795A2788BF98F384B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_17C9FB8B473A79F3D6FC9DBDCCF37489();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_5F50E9F74DAED1131D3ADBBBD611D3CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_Constraint_AE7B32954333B383741E3FB4E2AED097();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_8FD4335A4E3C45DD49C4E18C21742C22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_CCE1177F431B26BEAAA6E6AA7E162207();
		void ExecuteUbergraph_RoxyDynamicsABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
