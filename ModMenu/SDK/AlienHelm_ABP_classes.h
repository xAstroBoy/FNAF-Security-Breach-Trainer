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

// AnimBlueprintGeneratedClass AlienHelm_ABP.AlienHelm_ABP_C
// 0x09C8 (FullSize[0x0C30] - InheritedSize[0x0268])
class UAlienHelm_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_FEXB[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x02A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x03B0(0x0108)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_2;                                // 0x04B8(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone;                                  // 0x05E0(0x0128)
	unsigned char                                      UnknownData_VE7Q[0x8];                                     // 0x0708(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                    // 0x0710(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                      // 0x08C0(0x01B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0A70(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                             // 0x0A90(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0B08(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0B28(0x0108)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AlienHelm_ABP.AlienHelm_ABP_C");
		return ptr;
	}



	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AlienHelm_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
