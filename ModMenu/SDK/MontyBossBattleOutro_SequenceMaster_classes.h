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

// BlueprintGeneratedClass MontyBossBattleOutro_SequenceMaster.SequenceDirector_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MontyBossBattleOutro_SequenceMaster.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_10(class ASequencerAmbienceState_C* Sequencer_Ambience_State);
	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ASequencerAmbienceState_C* Sequencer_Ambience_State);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ASequencerAmbienceState_C* Sequencer_Ambience_State);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void BP_Cinematic_Audio_Emitter_Event_1(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter, class UAkAudioEvent* AkEvent);
	void Sequencer_Ambience_State_Event_1(class ASequencerAmbienceState_C* Sequencer_Ambience_State, const struct FName& State);
	void Sequencer_Ambience_State_Event_2(class ASequencerAmbienceState_C* Sequencer_Ambience_State, const struct FName& SwitchState);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
