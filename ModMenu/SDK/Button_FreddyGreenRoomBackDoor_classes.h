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

// BlueprintGeneratedClass Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C
// 0x0042 (FullSize[0x0330] - InheritedSize[0x02EE])
class AButton_FreddyGreenRoomBackDoor_C : public ABasicButton_C
{
public:
	unsigned char                                      UnknownData_RBPZ[0x2];                                     // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTriggerMissionOnActivated_C*                TriggerMissionOnPress;                                     // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      StartupMission[0x28];                                      // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C");
		return ptr;
	}



	void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ExecuteUbergraph_Button_FreddyGreenRoomBackDoor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif