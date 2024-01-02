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
	 * BlueprintGeneratedClass Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C
	 * Size -> 0x00D0 (FullSize[0x0348] - InheritedSize[0x0278])
	 */
	class AStandard_Spawn_DestroyWithAITrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              ToDestory_Actors[0x10];                                  // 0x0280(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ToSpawn_Actors[0x50];                                    // 0x0290(0x0050) UNKNOWN PROPERTY: MapProperty
		class FName                                                NewMissionName;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MissionToComplete;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFNAFAISpawnType                                           AIType;                                                  // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PKGK[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               AIPawn;                                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AIPath[0x28];                                            // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ToSpawn_staffbots[0x10];                                 // 0x0328(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<EFNAFAISpawnType>                                   StaffBotAlertTypes;                                      // 0x0338(0x0010) Edit, BlueprintVisible

	public:
		void OnTriggered();
		void OnAIAlerted(const class FName& Alert, const struct FVector& Location);
		void ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
