#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MedScan_Sequence.SequenceDirector_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MedScan_Sequence.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C* PlanarReflection2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ASequencerVO_C* SequencerVO);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ASequencerVO_C* SequencerVO);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ASequencerVO_C* SequencerVO);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ACineCameraActor* CineCameraActor);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ACineCameraActor* CineCameraActor);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AFreddyEnterExitPawn_C* FreddyEnterExitPawn);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACinematic_Actor_Freddy_C* Cinematic_Actor_Freddy);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACinematic_TargetActor_C* Cinematic_TargetActor);
	void Cinematic_TargetActor_Event_1(class ACinematic_TargetActor_C* Cinematic_TargetActor);
	void Cinematic_Actor_Freddy_Event_1(class ACinematic_Actor_Freddy_C* Cinematic_Actor_Freddy);
	void FreddyEnterExitPawn_Event_1(class AFreddyEnterExitPawn_C* FreddyEnterExitPawn);
	void CineCameraActor_Event_1(class ACineCameraActor* CineCameraActor);
	void CineCameraActor_Event_2(class ACineCameraActor* CineCameraActor);
	void SequencerVO_Event_1(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy);
	void SequencerVO_Event_2(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy);
	void PlanarReflection2_Event_1(class ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C* PlanarReflection2);
	void SequencerVO_Event_3(class ASequencerVO_C* SequencerVO, class UAkAudioEvent* VO, class AActor* Actor, bool Freddy, float MaxRadiusPercent);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
