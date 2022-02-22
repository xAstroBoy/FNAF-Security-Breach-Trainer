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
	 * AnimBlueprintGeneratedClass AlienHelm_ABP.AlienHelm_ABP_C
	 * Size -> 0x09C0 (FullSize[0x0C30] - InheritedSize[0x0270])
	 */
	class UAlienHelm_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x02A8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x03B0(0x0108)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x04B8(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x05E0(0x0128)
		unsigned char                                              UnknownData_AQHX[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0710(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x08C0(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0A70(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0A90(0x0078)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0B08(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0B28(0x0108)

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AlienHelm_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
