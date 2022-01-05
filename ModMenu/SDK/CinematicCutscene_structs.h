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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct CinematicCutscene.CinematicCutscene
	 * Size -> 0x0039
	 */
	struct FCinematicCutscene
	{
	public:
		class UFileMediaSource*                                    MediaSource_17_F0861EBA482CF373698053B6FFA75572;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundWave*                                          Audio_14_0E12833548EE05101B3FFCB0A7FB421F;               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       AudioEvent_20_48434951466DC3A3CA0DC99E121EC79D;          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              CinematicWwiseState_23_17A2CF6B4BB155BB3F402DA8ED022202; // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PostVideoWwiseState_25_40470A1846B938FF0F520286667105B1; // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       PlayFazerblastDialogue_27_6A5885FD4DEE9E682EE888AEF138E812; // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
