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
	 * Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetOnAudioJackUnpluggedDelegate(const class FScriptDelegate& ResultDelegate);
		bool STATIC_SetOnAudioJackPluggedDelegate(const class FScriptDelegate& ResultDelegate);
		bool STATIC_SetMicMute(bool IsMuted);
		bool STATIC_IsMicMuted();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
