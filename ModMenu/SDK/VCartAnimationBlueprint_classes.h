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
	 * AnimBlueprintGeneratedClass VCartAnimationBlueprint.VCartAnimationBlueprint_C
	 * Size -> 0x0148 (FullSize[0x0AC8] - InheritedSize[0x0980])
	 */
	class UVCartAnimationBlueprint_C : public UVehicleAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0988(0x0030)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x09B8(0x0010)
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler;                              // 0x09C8(0x00E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0AA8(0x0020)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_VCartAnimationBlueprint(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
