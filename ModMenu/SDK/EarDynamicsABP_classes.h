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

// AnimBlueprintGeneratedClass EarDynamicsABP.EarDynamicsABP_C
// 0x156C (FullSize[0x17D4] - InheritedSize[0x0268])
class UEarDynamicsABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_5P3H[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	unsigned char                                      UnknownData_XCJT[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x02B0(0x0440)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                    // 0x06F0(0x01B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x08A0(0x0440)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                      // 0x0CE0(0x01B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0E90(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x12D0(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1710(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                             // 0x1730(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x17A8(0x0020)
	bool                                               AnimDynamics_Ears;                                         // 0x17C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RWFL[0x3];                                     // 0x17C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EarDynamicAlpha;                                           // 0x17CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EaringDynamicAlpha;                                        // 0x17D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass EarDynamicsABP.EarDynamicsABP_C");
		return ptr;
	}



	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC();
	void ExecuteUbergraph_EarDynamicsABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
