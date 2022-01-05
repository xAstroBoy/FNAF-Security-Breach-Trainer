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
	 * BlueprintGeneratedClass BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C
	 * Size -> 0x003C (FullSize[0x02E4] - InheritedSize[0x02A8])
	 */
	class ABP_NoiseMakingTower_KiddieRide_Rocket_C : public ABP_NoiseMakingTowerBaseInteractible_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MOD_SubLobbySignRocketExaust;                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_KiddieRide_Rocket_Ride;                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_KiddieRide_Rocket_Base;                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Ride_Motion_Rotation_D02EFB42462CDC261900EEABCF7DEB7B;   // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     Ride_Motion__Direction_D02EFB42462CDC261900EEABCF7DEB7B; // 0x02D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RXYT[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Ride_Motion;                                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        LoopTimes;                                               // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Ride_Motion__FinishedFunc();
		void Ride_Motion__UpdateFunc();
		void Ride_Motion__SoundTriggger__EventFunc();
		void On_Triggered(class AActor* Other_Actor);
		void ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
