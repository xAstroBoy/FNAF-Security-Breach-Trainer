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
	 * UserDefinedStruct DbgProgressionInfo.DbgProgressionInfo
	 * Size -> 0x0048
	 */
	struct FDbgProgressionInfo
	{
	public:
		TArray<class FName>                                        Missions_3_A2EE865442E07898129354B64257DB5B;             // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class FName>                                        Items_5_0313D851473CC18AE417308CD7795CFB;                // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		unsigned char                                              Location_9_146C72D446E54DC82C90359DC90A9C4E[0x28];       // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
