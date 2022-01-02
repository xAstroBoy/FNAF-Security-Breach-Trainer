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

// BlueprintGeneratedClass DJMusicMan_Booth.DJMusicMan_Booth_C
// 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
class ADJMusicMan_Booth_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                        // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      Mission_Vanish_Condition;                                  // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      Mission_Active_Condition;                                  // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      Mission_Complete_Condition;                                // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DJMusicMan_Booth.DJMusicMan_Booth_C");
		return ptr;
	}



	void BndEvt__MissionStateCondition_K2Node_ComponentBoundEvent_0_OnMissionStateConditionMetDelegate__DelegateSignature();
	void BndEvt__MissionStateCondition_K2Node_ComponentBoundEvent_1_OnMissionStateConditionMetDelegate__DelegateSignature();
	void BndEvt__Mission_Active_Condition_K2Node_ComponentBoundEvent_2_OnMissionStateConditionMetDelegate__DelegateSignature();
	void BndEvt__Mission_Active_Condition_K2Node_ComponentBoundEvent_3_OnMissionStateConditionMetDelegate__DelegateSignature();
	void BndEvt__Mission_Vanish_Condition_K2Node_ComponentBoundEvent_4_OnMissionStateConditionMetDelegate__DelegateSignature();
	void BndEvt__Mission_Vanish_Condition_K2Node_ComponentBoundEvent_5_OnMissionStateConditionMetDelegate__DelegateSignature();
	void Post_Game_State();
	void ExecuteUbergraph_DJMusicMan_Booth(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
