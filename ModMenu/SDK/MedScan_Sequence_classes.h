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
	 * BlueprintGeneratedClass MedScan_Sequence.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_PlanarReflectionsShowOnlyFreddyGregory_C* PlanarReflection2);
		void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ASequencerVO_C* SequencerVO);
		void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ASequencerVO_C* SequencerVO);
		void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ASequencerVO_C* SequencerVO);
		void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ACineCameraActor* CineCameraActor);
		void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ACineCameraActor* CineCameraActor);
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class AFreddyEnterExitPawn_C* FreddyEnterExitPawn);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACinematic_Actor_Freddy_C* Cinematic_Actor_Freddy);
		void Cinematic_Actor_Freddy_Event_1(class ACinematic_Actor_Freddy_C* Cinematic_Actor_Freddy);
		void FreddyEnterExitPawn_Event_1(class AFreddyEnterExitPawn_C* FreddyEnterExitPawn);
		void CineCameraActor_Event_1(class ACineCameraActor* CineCameraActor);
		void CineCameraActor_Event_2(class ACineCameraActor* CineCameraActor);
		void SequencerVO_Event_1(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy);
		void SequencerVO_Event_2(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy);
		void PlanarReflection2_Event_1(class ABP_PlanarReflectionsShowOnlyFreddyGregory_C* PlanarReflection2);
		void SequencerVO_Event_3(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy, float MaxRadiusPercent);
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
