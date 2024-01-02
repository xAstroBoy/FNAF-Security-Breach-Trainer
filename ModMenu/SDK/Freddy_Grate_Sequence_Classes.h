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
	 * BlueprintGeneratedClass Freddy_Grate_Sequence.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_6(class AOGM_BackStage_C* OGM_BackStage);
		void SequenceEvent__ENTRYPOINTSequenceDirector_5(class AFreddyGuideSick_C* FreddyGuideSick2);
		void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ACinematic_Actor_Freddy_C* FreddyGuideSick);
		void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AStaticMeshActor* MOD_Grate_Cover_Dented);
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class AStaticMeshActor* MOD_Grate);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class AStaticMeshActor* MOD_Grate);
		void MOD_Grate_Event_1(class AStaticMeshActor* MOD_Grate);
		void MOD_Grate_Event_2(class AStaticMeshActor* MOD_Grate);
		void MOD_Grate_Cover_Dented_Event_1(class AStaticMeshActor* MOD_Grate_Cover_Dented);
		void FreddyGuideSick_Event_1(class ACinematic_Actor_Freddy_C* FreddyGuideSick);
		void FreddyGuideSick2_Event_1(class AFreddyGuideSick_C* FreddyGuideSick2);
		void OGM_BackStage_Event_1(class AOGM_BackStage_C* OGM_BackStage);
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
