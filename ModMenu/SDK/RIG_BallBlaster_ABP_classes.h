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
	 * AnimBlueprintGeneratedClass RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C
	 * Size -> 0x0C58 (FullSize[0x0EC8] - InheritedSize[0x0270])
	 */
	class URIG_BallBlaster_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02A8(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0320(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0428(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0530(0x0020)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint_2;                              // 0x0550(0x0108)
		struct FAnimNode_Constraint                                AnimGraphNode_Constraint;                                // 0x0658(0x0108)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0760(0x0590)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0CF0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0D38(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D58(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0DF8(0x0078)
		float                                                      InputYaw;                                                // 0x0E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputPitch;                                              // 0x0E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CameraRotation;                                          // 0x0E78(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeltaTimeX;                                              // 0x0E84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            appliedRotation;                                         // 0x0E88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Max_Angle;                                               // 0x0E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBroken;                                                // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TRKU[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BrokenMEsh[0x28];                                        // 0x0E99(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_9ADFD5044E6B48D4FAEBE692EED0D647();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_66DFD46844C5CAD2432A8CAA2334DB9F();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_ModelSwap();
		void ExecuteUbergraph_RIG_BallBlaster_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
