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

// BlueprintGeneratedClass BasicPowerStationEventHandler.BasicPowerStationEventHandler_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ABasicPowerStationEventHandler_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BasicPowerStationEventHandler.BasicPowerStationEventHandler_C");
		return ptr;
	}



	void StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract);
	void ExecuteUbergraph_BasicPowerStationEventHandler(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
