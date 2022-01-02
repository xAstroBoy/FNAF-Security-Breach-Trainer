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

// AnimBlueprintGeneratedClass Staffbot_Server_LINK.Staffbot_Server_LINK_C
// 0x0404 (FullSize[0x066C] - InheritedSize[0x0268])
class UStaffbot_Server_LINK_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_EQHR[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	unsigned char                                      UnknownData_HNYU[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x02B0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0490(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0598(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x05B8(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                             // 0x05D8(0x0078)
	struct FVector                                     RWristLocation;                                            // 0x0650(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    R_Wrist2Rotation;                                          // 0x065C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LockR_Shoulder_Alpha;                                      // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_Server_LINK.Staffbot_Server_LINK_C");
		return ptr;
	}



	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Staffbot_Server_LINK(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
