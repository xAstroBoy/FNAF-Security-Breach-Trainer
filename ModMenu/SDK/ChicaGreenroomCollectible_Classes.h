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
	 * BlueprintGeneratedClass ChicaGreenroomCollectible.ChicaGreenroomCollectible_C
	 * Size -> 0x005F (FullSize[0x0338] - InheritedSize[0x02D9])
	 */
	class AChicaGreenroomCollectible_C : public APresentCollectible_C
	{
	public:
		unsigned char                                              UnknownData_IELI[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpdateMissionComponent*                             UpdateMission_PartyPass;                                 // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             UpdateMission_MoonlightSerenade;                         // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTimeTrigger_C*                                      TimeTrigger;                                             // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Timer_End_Time_Hour;                                     // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Time_End_Time_Minute;                                    // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTimeHour;                                         // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTimeMinute;                                       // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Power_Station[0x28];                                     // 0x0310(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnFailure_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_A91445044E68314BD471929DF90DE4E5();
		void OnSuccess_A91445044E68314BD471929DF90DE4E5();
		void OnCollect();
		void On_Timer_Ended();
		void Setup_Hourly_Sequence();
		void OnLoadCollected();
		void On_Finished_Loading();
		void Setup_Time();
		void ExecuteUbergraph_ChicaGreenroomCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
