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
	 * UserDefinedStruct ElevatorAudioOption.ElevatorAudioOption
	 * Size -> 0x0021
	 */
	struct FElevatorAudioOption
	{
	public:
		class FString                                              Name_7_6C28AA6D44A57C84F1F00DB4E38C4552;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FElevatorAudioData>                          AKAudioOptions_11_D69EEE6B48DDCF9004486A96EE7F2F8B;      // 0x0010(0x0010) Edit, BlueprintVisible
		bool                                                       CanBeReplayed_10_B9F5C2C5415BE6C002289FB27E2C0CBC;       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
