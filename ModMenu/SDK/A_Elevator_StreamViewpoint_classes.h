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

// BlueprintGeneratedClass A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class AA_Elevator_StreamViewpoint_C : public AActor
{
public:
	class ULevelStreamViewpoint*                       LevelStreamViewpoint;                                      // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C");
		return ptr;
	}



	bool IsStreamingEnabled();
	void SetStreamingEnable(bool bEnable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
