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

// BlueprintGeneratedClass PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C
// 0x0014 (FullSize[0x02A8] - InheritedSize[0x0294])
class APowerStationPlayerInteractible_DaycareAirlock_C : public APowerStationPlayerInteractible_C
{
public:
	unsigned char                                      UnknownData_EZ3M[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUpdateMissionComponent*                     UpdateEscapeDaycare;                                       // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C");
		return ptr;
	}



	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
