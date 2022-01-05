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
	 * BlueprintGeneratedClass DJMM_Reveal.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ACinematic_TargetActor_C* Cinematic_TargetActor);
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACineCameraActor* CineCameraActor);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineCameraActor* CineCameraActor);
		void CineCameraActor_Event_1(class ACineCameraActor* CineCameraActor);
		void CineCameraActor_Event_2(class ACineCameraActor* CineCameraActor);
		void Cinematic_TargetActor_Event_1(class ACinematic_TargetActor_C* Cinematic_TargetActor);
		void ExecuteUbergraph_SequenceDirector(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
