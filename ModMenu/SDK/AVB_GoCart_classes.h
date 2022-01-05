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
	 * AnimBlueprintGeneratedClass AVB_GoCart.AVB_GoCart_C
	 * Size -> 0x0520 (FullSize[0x0EA0] - InheritedSize[0x0980])
	 */
	class UAVB_GoCart_C : public UVehicleAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0988(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x09B8(0x0078)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0A30(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0A50(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0B58(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0B78(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0C80(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0D88(0x0108)
		float                                                      Rotation;                                                // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x0E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Turning;                                                 // 0x0E98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputStearing;                                           // 0x0E9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_7C9FF6714F9BBF14154763B96D29759D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_4A2B64FA4A21788011957FB8CBA6D8F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_AA8A20DA426FE42437EAEC96C303478B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_E784316543D17854009593A51F7141AE();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AVB_GoCart(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
