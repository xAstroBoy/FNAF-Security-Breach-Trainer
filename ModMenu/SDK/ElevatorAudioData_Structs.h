#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ElevatorAudioData.ElevatorAudioData
	 * Size -> 0x001C
	 */
	struct FElevatorAudioData
	{
	public:
		class UAkAudioEvent*                                       AkEvent_2_60A31B55495ECD221724A4AE4CBDB5D1;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ActorName_5_DE8C598F4E01B0BEDE3D1882B32F9DB6;            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      DelayAfterPlay_8_AB3E4DA24AFD36D543D5918748FA6918;       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
