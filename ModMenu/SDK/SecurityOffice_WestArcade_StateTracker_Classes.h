#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * BlueprintGeneratedClass SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C
	 * Size -> 0x000D (FullSize[0x0235] - InheritedSize[0x0228])
	 */
	class ASecurityOffice_WestArcade_StateTracker_C : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SwitchesActivated;                                       // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGameActive;                                            // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetIsGameActive(bool* GameActive);
		void SetSwitchesActivatedCount(int32_t SwitchesActivated);
		void GetSwitchesActivatedCount(int32_t* NumberActivated);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
