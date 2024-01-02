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
	 * AnimBlueprintGeneratedClass ChicaDynamicsAbp.ChicaDynamicsABP_C
	 * Size -> 0x14A4 (FullSize[0x175C] - InheritedSize[0x02B8])
	 */
	class UChicaDynamicsABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NGGU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_8717[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x02D0(0x0440)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x0710(0x0440)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0B50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0B78(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0BA0(0x0158)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0CF8(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0D18(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0E30(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0E50(0x00A0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0EF0(0x0030)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0F20(0x0830)
		float                                                      EaringDynamicAlpha;                                      // 0x1750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimDynamics_Chica;                                      // 0x1754(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Shattered;                                               // 0x1755(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZPKY[0x2];                                   // 0x1756(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairDynamicAlpha;                                        // 0x1758(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215();
		void ExecuteUbergraph_ChicaDynamicsABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
