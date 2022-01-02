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

// BlueprintGeneratedClass Monty_Intro_Shot_401.SequenceDirector_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Monty_Intro_Shot_401.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ACinematic_Actor_Monty_C* Cinematic_Actor_Monty2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ASkeletalMeshActor* RIG_BallBlaster_ABP);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ASkeletalMeshActor* RIG_BallBlaster_ABP);
	void RIG_BallBlaster_ABP_Event_1(class ASkeletalMeshActor* RIG_BallBlaster_ABP);
	void RIG_BallBlaster_ABP_Event_2(class ASkeletalMeshActor* RIG_BallBlaster_ABP);
	void Cinematic_Actor_Monty2_Event_1(class ACinematic_Actor_Monty_C* Cinematic_Actor_Monty2, class UAkAudioEvent* SubtitleEvent, bool SanitizeSubtitleKey, class UAkAudioEvent* AudioEvent);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
