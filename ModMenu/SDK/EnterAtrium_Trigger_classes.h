﻿#pragma once

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

// BlueprintGeneratedClass EnterAtrium_Trigger.EnterAtrium_Trigger_C
// 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
class AEnterAtrium_Trigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUpdateMissionComponent*                     UpdateShowtime;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      lineskippper[0x28];                                        // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EnterAtrium_Trigger.EnterAtrium_Trigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_EnterAtrium_Trigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
