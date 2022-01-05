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
	 * UserDefinedStruct LobbyInstructionCardSetup.LobbyInstructionCardSetup
	 * Size -> 0x0050
	 */
	struct FLobbyInstructionCardSetup
	{
	public:
		TMap<fnaf9_ESWGInputDeviceType, class UTexture*>           Mapping_5_B90853C241FEFFD376AA10A0D6F0B02E;              // 0x0000(0x0050) Edit, BlueprintVisible

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
