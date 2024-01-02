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
	 * UserDefinedStruct FogDataTableStruct.FogDataTableStruct
	 * Size -> 0x00A8
	 */
	struct FFogDataTableStruct
	{
	public:
		struct FFogVolumeInfo                                      ExponentialFog_7_67E239C7474E5305348C22906A0BCE97;       // 0x0000(0x0054) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFogVolumeInfo                                      VolumetricFog_8_5B177E464A88223B5B7F73856C98D090;        // 0x0054(0x0054) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
