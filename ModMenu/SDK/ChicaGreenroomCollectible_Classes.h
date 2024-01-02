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
	 * BlueprintGeneratedClass ChicaGreenroomCollectible.ChicaGreenroomCollectible_C
	 * Size -> 0x005F (FullSize[0x0368] - InheritedSize[0x0309])
	 */
	class AChicaGreenroomCollectible_C : public APresentCollectible_C
	{
	public:
		unsigned char                                              UnknownData_XLQM[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpdateMissionComponent*                             UpdateMission_PartyPass;                                 // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             UpdateMission_MoonlightSerenade;                         // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTimeTrigger_C*                                      TimeTrigger;                                             // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerEndTimeHour;                                        // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimeEndTimeMinute;                                       // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTimeHour;                                         // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTimeMinute;                                       // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PowerStation[0x28];                                      // 0x0340(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnFailure_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_A91445044E68314BD471929DF90DE4E5();
		void OnSuccess_A91445044E68314BD471929DF90DE4E5();
		void OnCollect();
		void OnTimerEnded();
		void SetupHourlySequence();
		void OnLoadCollected();
		void OnFinishedLoading();
		void SetupTime();
		void ExecuteUbergraph_ChicaGreenroomCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
