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

// AnimBlueprintGeneratedClass ChicaDynamicsAbp.ChicaDynamicsABP_C
// 0x0F24 (FullSize[0x118C] - InheritedSize[0x0268])
class UChicaDynamicsABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PD21[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_FB3T[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0280(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x06C0(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                             // 0x06E0(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0758(0x0020)
	unsigned char                                      UnknownData_PJB8[0x8];                                     // 0x0778(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x0780(0x0440)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0BC0(0x0030)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                   // 0x0BF0(0x0590)
	float                                              EaringDynamicAlpha;                                        // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnimDynamics_Chica;                                        // 0x1184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shattered;                                                 // 0x1185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AHA4[0x2];                                     // 0x1186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairDynamicAlpha;                                          // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChicaDynamicsAbp.ChicaDynamicsABP_C");
		return ptr;
	}



	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01();
	void ExecuteUbergraph_ChicaDynamicsABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
