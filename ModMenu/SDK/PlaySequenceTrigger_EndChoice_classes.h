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
	 * BlueprintGeneratedClass PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C
	 * Size -> 0x00E1 (FullSize[0x0431] - InheritedSize[0x0350])
	 */
	class APlaySequenceTrigger_EndChoice_C : public APlaySequenceTrigger_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     FreddySpawn;                                             // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EndingActor[0x28];                                       // 0x0368(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UFinalChoiceUI_C*                                    FinalChoice;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VannyBossTeleportLocator[0x28];                          // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseLoadingDockCondition;                                 // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EH3C[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEndVO_C*                                            EndVO;                                                   // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFireEscapeCondition;                                  // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SFYL[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              VannyCinematicPlayerUI;                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VannyBattleManager[0x28];                                // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x0408(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       SequenceRunning;                                         // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlaySequence(bool* success);
		void FireEscapeConditionCheck(bool* HasMetConditions);
		void OnFailure_A1CEA053484729074DE2FC8418AB6D01();
		void OnSuccess_A1CEA053484729074DE2FC8418AB6D01();
		void OnFailure_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnTriggered();
		void OnSequenceStopEvent();
		void Staying();
		void Leaving();
		void Vanny();
		void OnVannyIntroStop();
		void OnTeleportFinished();
		void HandleIAmNotMeAchievementCheck();
		void ReceiveBeginPlay();
		void OnStayVOFinished();
		void ResetTrigger();
		void ExecuteUbergraph_PlaySequenceTrigger_EndChoice(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
