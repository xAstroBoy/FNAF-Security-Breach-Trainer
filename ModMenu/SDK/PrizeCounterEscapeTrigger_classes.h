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

// BlueprintGeneratedClass PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C
// 0x00D8 (FullSize[0x0348] - InheritedSize[0x0270])
class APrizeCounterEscapeTrigger_C : public APlayerTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTimeCheckComponent_C*                       TimeCheckComponent;                                        // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUpdateMissionComponent*                     UsePrizeCounterElevatorUpdateMission;                      // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             TetherTransform;                                           // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             SpawnTransform;                                            // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUpdateMissionComponent*                     FindFreddyUpdateMission;                                   // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PatrolPath[0x28];                                          // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      LineSkipper[0x28];                                         // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Sequence[0x28];                                            // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      End_Sequence[0x28];                                        // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnTriggered();
	void On_Sequence_Done();
	void On_Debug_Skip(TArray<struct FName>* SkippedTasks);
	void ExecuteUbergraph_PrizeCounterEscapeTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
