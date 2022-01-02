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

// BlueprintGeneratedClass HourlyMissionUpdate.HourlyMissionUpdate_C
// 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
class AHourlyMissionUpdate_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MissionHintMap[0x50];                                      // 0x0238(0x0050) UNKNOWN PROPERTY: MapProperty
	struct FName                                       MissionToActivate;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HourlyMissionUpdate.HourlyMissionUpdate_C");
		return ptr;
	}



	void Give_Hourly_Mission();
	void On_Audio_Finished();
	void ExecuteUbergraph_HourlyMissionUpdate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
