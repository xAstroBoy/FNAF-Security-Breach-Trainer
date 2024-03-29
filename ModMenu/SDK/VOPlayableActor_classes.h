﻿#pragma once

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
	 * BlueprintGeneratedClass VOPlayableActor.VOPlayableActor_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVOPlayableActor_C : public UInterface
	{
	public:
		void ForcePlayVoiceLine(class UAkAudioEvent* AKEvent);
		void PlayVoiceType(EAIVoiceOverType VoiceTag);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
