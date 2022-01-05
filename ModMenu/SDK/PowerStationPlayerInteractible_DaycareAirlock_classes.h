#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C
	 * Size -> 0x0014 (FullSize[0x02A8] - InheritedSize[0x0294])
	 */
	class APowerStationPlayerInteractible_DaycareAirlock_C : public APowerStationPlayerInteractible_C
	{
	public:
		unsigned char                                              UnknownData_26GI[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpdateMissionComponent*                             UpdateEscapeDaycare;                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
