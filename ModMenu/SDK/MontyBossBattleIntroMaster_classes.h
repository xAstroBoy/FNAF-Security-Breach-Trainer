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

// BlueprintGeneratedClass MontyBossBattleIntroMaster.SequenceDirector_C
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      RideSpline[0x28];                                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MontyBossBattleIntroMaster.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class AActor* StartGameTeleportationDestination);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3();
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void SequenceEvent_1(bool bNewHidden);
	void SequenceEvent_2();
	void StartGameTeleportationDestination_Event_1(class AActor* StartGameTeleportationDestination);
	void SequenceEvent_3();
	void BP_Cinematic_Audio_Emitter_Event_1(class ABP_CinematicAudioEmitter_C* BP_Cinematic_Audio_Emitter, class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
