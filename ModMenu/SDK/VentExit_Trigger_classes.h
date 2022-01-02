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

// BlueprintGeneratedClass VentExit_Trigger.VentExit_Trigger_C
// 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
class AVentExit_Trigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      chicaPawn[0x28];                                           // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VentExit_Trigger.VentExit_Trigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_VentExit_Trigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif