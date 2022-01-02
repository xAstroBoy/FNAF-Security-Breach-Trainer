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

// BlueprintGeneratedClass LaserTagCountDown.LaserTagCountDown_C
// 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
class ALaserTagCountDown_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             LazerTag_Elevator_Counter_GO;                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             LazerTag_Elevator_Counter_322;                             // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Countdown;                                                 // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULaserTagHUD_C*                              LaserTagHUDTimer;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LaserTagCountDown.LaserTagCountDown_C");
		return ptr;
	}



	void CastToLaserTagHud(class ULaserTagHUD_C** AsLaser_Tag_HUD);
	void ReceiveBeginPlay();
	void Start_Count_down();
	void Start_Game_Session_Timer();
	void ExecuteUbergraph_LaserTagCountDown(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
