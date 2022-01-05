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
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum FNAFQualityCommands.FNAFQualityCommands
	 */
	enum class FNAFQualityCommands_EFNAFQualityCommands : uint8_t
	{
		FNAFQualityCommands__NewEnumerator0          = 0,
		FNAFQualityCommands__NewEnumerator1          = 1,
		FNAFQualityCommands__NewEnumerator2          = 2,
		FNAFQualityCommands__NewEnumerator5          = 3,
		FNAFQualityCommands__NewEnumerator4          = 4,
		FNAFQualityCommands__NewEnumerator6          = 5,
		FNAFQualityCommands__NewEnumerator3          = 6,
		FNAFQualityCommands__NewEnumerator7          = 7,
		FNAFQualityCommands__NewEnumerator8          = 8,
		FNAFQualityCommands__NewEnumerator9          = 9,
		FNAFQualityCommands__NewEnumerator10         = 10,
		FNAFQualityCommands__NewEnumerator11         = 11,
		FNAFQualityCommands__NewEnumerator12         = 12,
		FNAFQualityCommands__NewEnumerator13         = 13,
		FNAFQualityCommands__NewEnumerator14         = 14,
		FNAFQualityCommands__NewEnumerator15         = 15,
		FNAFQualityCommands__NewEnumerator16         = 16,
		FNAFQualityCommands__NewEnumerator17         = 17,
		FNAFQualityCommands__NewEnumerator18         = 18,
		FNAFQualityCommands__NewEnumerator19         = 19,
		FNAFQualityCommands__NewEnumerator20         = 20,
		FNAFQualityCommands__NewEnumerator21         = 21,
		FNAFQualityCommands__NewEnumerator22         = 22,
		FNAFQualityCommands__NewEnumerator23         = 23,
		FNAFQualityCommands__NewEnumerator24         = 24,
		FNAFQualityCommands__NewEnumerator25         = 25,
		FNAFQualityCommands__NewEnumerator26         = 26,
		FNAFQualityCommands__NewEnumerator27         = 27,
		FNAFQualityCommands__NewEnumerator28         = 28,
		FNAFQualityCommands__NewEnumerator29         = 29,
		FNAFQualityCommands__NewEnumerator30         = 30,
		FNAFQualityCommands__NewEnumerator31         = 31,
		FNAFQualityCommands__NewEnumerator32         = 32,
		FNAFQualityCommands__NewEnumerator33         = 33,
		FNAFQualityCommands__NewEnumerator34         = 34,
		FNAFQualityCommands__NewEnumerator35         = 35,
		FNAFQualityCommands__NewEnumerator36         = 36,
		FNAFQualityCommands__NewEnumerator37         = 37,
		FNAFQualityCommands__NewEnumerator38         = 38,
		FNAFQualityCommands__NewEnumerator39         = 39,
		FNAFQualityCommands__NewEnumerator40         = 40,
		FNAFQualityCommands__NewEnumerator41         = 41,
		FNAFQualityCommands__NewEnumerator42         = 42,
		FNAFQualityCommands__NewEnumerator43         = 43,
		FNAFQualityCommands__NewEnumerator44         = 44,
		FNAFQualityCommands__NewEnumerator45         = 45,
		FNAFQualityCommands__NewEnumerator46         = 46,
		FNAFQualityCommands__NewEnumerator47         = 47,
		FNAFQualityCommands__NewEnumerator48         = 48,
		FNAFQualityCommands__NewEnumerator49         = 49,
		FNAFQualityCommands__NewEnumerator50         = 50,
		FNAFQualityCommands__NewEnumerator51         = 51,
		FNAFQualityCommands__NewEnumerator52         = 52,
		FNAFQualityCommands__NewEnumerator53         = 53,
		FNAFQualityCommands__NewEnumerator54         = 54,
		FNAFQualityCommands__NewEnumerator55         = 55,
		FNAFQualityCommands__NewEnumerator56         = 56,
		FNAFQualityCommands__NewEnumerator57         = 57,
		FNAFQualityCommands__NewEnumerator58         = 58,
		FNAFQualityCommands__NewEnumerator59         = 59,
		FNAFQualityCommands__NewEnumerator60         = 60,
		FNAFQualityCommands__NewEnumerator64         = 61,
		FNAFQualityCommands__NewEnumerator65         = 62,
		FNAFQualityCommands__NewEnumerator66         = 63,
		FNAFQualityCommands__NewEnumerator67         = 64,
		FNAFQualityCommands__NewEnumerator68         = 65,
		FNAFQualityCommands__NewEnumerator69         = 66,
		FNAFQualityCommands__NewEnumerator70         = 67,
		FNAFQualityCommands__NewEnumerator71         = 68,
		FNAFQualityCommands__NewEnumerator72         = 69,
		FNAFQualityCommands__NewEnumerator73         = 70,
		FNAFQualityCommands__NewEnumerator74         = 71,
		FNAFQualityCommands__NewEnumerator75         = 72,
		FNAFQualityCommands__NewEnumerator76         = 73,
		FNAFQualityCommands__NewEnumerator77         = 74,
		FNAFQualityCommands__NewEnumerator78         = 75,
		FNAFQualityCommands__NewEnumerator79         = 76,
		FNAFQualityCommands__NewEnumerator80         = 77,
		FNAFQualityCommands__NewEnumerator81         = 78,
		FNAFQualityCommands__NewEnumerator82         = 79,
		FNAFQualityCommands__NewEnumerator83         = 80,
		FNAFQualityCommands__NewEnumerator84         = 81,
		FNAFQualityCommands__NewEnumerator85         = 82,
		FNAFQualityCommands__NewEnumerator86         = 83,
		FNAFQualityCommands__NewEnumerator87         = 84,
		FNAFQualityCommands__NewEnumerator88         = 85,
		FNAFQualityCommands__NewEnumerator89         = 86,
		FNAFQualityCommands__FNAFQualityCommands_MAX = 87
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
