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
	 * BlueprintGeneratedClass PlaySequenceTrigger_VanessaCapture.PlaySequenceTrigger_VanessaCapture_C
	 * Size -> 0x0040 (FullSize[0x0390] - InheritedSize[0x0350])
	 */
	class APlaySequenceTrigger_VanessaCapture_C : public APlaySequenceTrigger_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LostAndFoundSpawnLocation[0x28];                         // 0x0360(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                LoadingDock;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnSequenceStopEvent();
		void OnSequenceStarting();
		void OnTriggered();
		void ExecuteUbergraph_PlaySequenceTrigger_VanessaCapture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
