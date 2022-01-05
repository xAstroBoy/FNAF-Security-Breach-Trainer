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
	 * BlueprintGeneratedClass BPITurnTowardsAudio.BPITurnTowardsAudio_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPITurnTowardsAudio_C : public UInterface
	{
	public:
		void GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards);
		void GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
