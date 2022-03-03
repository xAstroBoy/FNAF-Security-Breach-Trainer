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
	 * BlueprintGeneratedClass Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C
	 * Size -> 0x0080 (FullSize[0x02F8] - InheritedSize[0x0278])
	 */
	class AStandard_Spawn_DestroyTrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              ToDestory_Actors[0x10];                                  // 0x0280(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ToSpawn_Actors[0x50];                                    // 0x0290(0x0050) UNKNOWN PROPERTY: MapProperty
		class FName                                                NewMissionName;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MissionToComplete;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NewWorldStateName;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTriggered();
		void ExecuteUbergraph_Standard_Spawn_DestroyTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
