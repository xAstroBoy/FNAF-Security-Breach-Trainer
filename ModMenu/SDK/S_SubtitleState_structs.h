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
	 * UserDefinedStruct S_SubtitleState.S_SubtitleState
	 * Size -> 0x0050
	 */
	struct FS_SubtitleState
	{
	public:
		class FText                                                Text_2_41CFCA0B4E2F00DB7D8E1A80028361FB;                 // 0x0000(0x0018) Edit, BlueprintVisible
		float                                                      TimerRemaining_5_B53676F94F77BB5A9CE1B1B3012256A8;       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeElapsed_7_727A35A74A909CFB117CEFAA76F2BC32;          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Source_14_51F67308477EFDE491C591A9193D2EC4;              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class AActor*                                              Actor_20_F6F98DE34E3BBA9872D4A7B3263BC028;               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius_17_45964EA746CAEE29AEE1F39DD72B5F5E;              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_II8Z[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_SubtitleLine>                             Lines_11_657C280748312C78B38C97926A556799;               // 0x0040(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
