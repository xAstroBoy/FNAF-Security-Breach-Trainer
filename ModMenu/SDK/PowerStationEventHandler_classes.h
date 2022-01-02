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

// BlueprintGeneratedClass PowerStationEventHandler.PowerStationEventHandler_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPowerStationEventHandler_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationEventHandler.PowerStationEventHandler_C");
		return ptr;
	}



	void StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
