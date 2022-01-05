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
	 * BlueprintGeneratedClass PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C
	 * Size -> 0x00E8 (FullSize[0x0479] - InheritedSize[0x0391])
	 */
	class APlaySequenceTrigger_EndChoice_C : public APlaySequenceTrigger_C
	{
	public:
		unsigned char                                              UnknownData_GBYH[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Freddy_Spawn;                                            // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EndingActor[0x28];                                       // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UFinalChoiceUI_C*                                    FinalChoice;                                             // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VannyBossTeleportLocator[0x28];                          // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseLoadingDockCondition;                                 // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U3KN[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEndVO_C*                                            EndVO;                                                   // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFireEscapeCondition;                                  // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XM0S[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              VannyCinematicPlayerUI;                                  // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Vanny_Battle_Manager[0x28];                              // 0x0428(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x0450(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       SequenceRunning;                                         // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FireEscapeConditionCheck(bool* Has_Met_Conditions);
		void OnFailure_A1CEA053484729074DE2FC8418AB6D01();
		void OnSuccess_A1CEA053484729074DE2FC8418AB6D01();
		void OnFailure_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnSuccess_7F2250294461044CDA36CD9C7D00F0D9(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnTriggered();
		void On_Sequence_Stop_Event();
		void Staying();
		void Leaving();
		void Vanny();
		void On_Vanny_Intro_Stop();
		void On_Teleport_Finished();
		void HandleIAmNotMeAchievementCheck();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_PlaySequenceTrigger_EndChoice(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
