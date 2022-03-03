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
	 * BlueprintGeneratedClass Freddy_GrabGreg_Sequence.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_5(class AFreddyGuideSick_C* FreddyGuideSick2);
		void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ACinematic_Actor_Freddy_C* FreddyGuideSick);
		void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ACinematic_TargetActor_C* Cinematic_TargetActor3);
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACineCameraActor* CineCameraActor);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineCameraActor* CineCameraActor);
		void BlendIn(class ACineCameraActor* CineCameraActor);
		void Cinematic_TargetActor3_Event_1(class ACinematic_TargetActor_C* Cinematic_TargetActor3);
		void FreddyGuideSick_Event_2(class ACinematic_Actor_Freddy_C* FreddyGuideSick);
		void FreddyGuideSick_Event_1(class ACinematic_Actor_Freddy_C* FreddyGuideSick);
		void Cinematic_TargetActor_Event_1(class ACinematic_TargetActor_C* Cinematic_TargetActor);
		void BlendOut(class ACineCameraActor* CineCameraActor);
		void FreddyGuideSick2_Event_1(class AFreddyGuideSick_C* FreddyGuideSick2);
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
