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
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum FNAFQualityCommands.FNAFQualityCommands
	 */
	enum class EFNAFQualityCommands : uint8_t
	{
		FNAFQualityCommandsNewEnumerator0          = 0,
		FNAFQualityCommandsNewEnumerator1          = 1,
		FNAFQualityCommandsNewEnumerator2          = 2,
		FNAFQualityCommandsNewEnumerator5          = 3,
		FNAFQualityCommandsNewEnumerator4          = 4,
		FNAFQualityCommandsNewEnumerator6          = 5,
		FNAFQualityCommandsNewEnumerator3          = 6,
		FNAFQualityCommandsNewEnumerator7          = 7,
		FNAFQualityCommandsNewEnumerator8          = 8,
		FNAFQualityCommandsNewEnumerator9          = 9,
		FNAFQualityCommandsNewEnumerator10         = 10,
		FNAFQualityCommandsNewEnumerator11         = 11,
		FNAFQualityCommandsNewEnumerator12         = 12,
		FNAFQualityCommandsNewEnumerator13         = 13,
		FNAFQualityCommandsNewEnumerator14         = 14,
		FNAFQualityCommandsNewEnumerator15         = 15,
		FNAFQualityCommandsNewEnumerator16         = 16,
		FNAFQualityCommandsNewEnumerator17         = 17,
		FNAFQualityCommandsNewEnumerator18         = 18,
		FNAFQualityCommandsNewEnumerator19         = 19,
		FNAFQualityCommandsNewEnumerator20         = 20,
		FNAFQualityCommandsNewEnumerator21         = 21,
		FNAFQualityCommandsNewEnumerator22         = 22,
		FNAFQualityCommandsNewEnumerator23         = 23,
		FNAFQualityCommandsNewEnumerator24         = 24,
		FNAFQualityCommandsNewEnumerator25         = 25,
		FNAFQualityCommandsNewEnumerator26         = 26,
		FNAFQualityCommandsNewEnumerator27         = 27,
		FNAFQualityCommandsNewEnumerator28         = 28,
		FNAFQualityCommandsNewEnumerator29         = 29,
		FNAFQualityCommandsNewEnumerator30         = 30,
		FNAFQualityCommandsNewEnumerator31         = 31,
		FNAFQualityCommandsNewEnumerator32         = 32,
		FNAFQualityCommandsNewEnumerator33         = 33,
		FNAFQualityCommandsNewEnumerator34         = 34,
		FNAFQualityCommandsNewEnumerator35         = 35,
		FNAFQualityCommandsNewEnumerator36         = 36,
		FNAFQualityCommandsNewEnumerator37         = 37,
		FNAFQualityCommandsNewEnumerator38         = 38,
		FNAFQualityCommandsNewEnumerator39         = 39,
		FNAFQualityCommandsNewEnumerator40         = 40,
		FNAFQualityCommandsNewEnumerator41         = 41,
		FNAFQualityCommandsNewEnumerator42         = 42,
		FNAFQualityCommandsNewEnumerator43         = 43,
		FNAFQualityCommandsNewEnumerator44         = 44,
		FNAFQualityCommandsNewEnumerator45         = 45,
		FNAFQualityCommandsNewEnumerator46         = 46,
		FNAFQualityCommandsNewEnumerator47         = 47,
		FNAFQualityCommandsNewEnumerator48         = 48,
		FNAFQualityCommandsNewEnumerator49         = 49,
		FNAFQualityCommandsNewEnumerator50         = 50,
		FNAFQualityCommandsNewEnumerator51         = 51,
		FNAFQualityCommandsNewEnumerator52         = 52,
		FNAFQualityCommandsNewEnumerator53         = 53,
		FNAFQualityCommandsNewEnumerator54         = 54,
		FNAFQualityCommandsNewEnumerator55         = 55,
		FNAFQualityCommandsNewEnumerator56         = 56,
		FNAFQualityCommandsNewEnumerator57         = 57,
		FNAFQualityCommandsNewEnumerator58         = 58,
		FNAFQualityCommandsNewEnumerator59         = 59,
		FNAFQualityCommandsNewEnumerator60         = 60,
		FNAFQualityCommandsNewEnumerator64         = 61,
		FNAFQualityCommandsNewEnumerator65         = 62,
		FNAFQualityCommandsNewEnumerator66         = 63,
		FNAFQualityCommandsNewEnumerator67         = 64,
		FNAFQualityCommandsNewEnumerator68         = 65,
		FNAFQualityCommandsNewEnumerator69         = 66,
		FNAFQualityCommandsNewEnumerator70         = 67,
		FNAFQualityCommandsNewEnumerator71         = 68,
		FNAFQualityCommandsNewEnumerator72         = 69,
		FNAFQualityCommandsNewEnumerator73         = 70,
		FNAFQualityCommandsNewEnumerator74         = 71,
		FNAFQualityCommandsNewEnumerator75         = 72,
		FNAFQualityCommandsNewEnumerator76         = 73,
		FNAFQualityCommandsNewEnumerator77         = 74,
		FNAFQualityCommandsNewEnumerator78         = 75,
		FNAFQualityCommandsNewEnumerator79         = 76,
		FNAFQualityCommandsNewEnumerator80         = 77,
		FNAFQualityCommandsNewEnumerator81         = 78,
		FNAFQualityCommandsNewEnumerator82         = 79,
		FNAFQualityCommandsNewEnumerator83         = 80,
		FNAFQualityCommandsNewEnumerator84         = 81,
		FNAFQualityCommandsNewEnumerator85         = 82,
		FNAFQualityCommandsNewEnumerator86         = 83,
		FNAFQualityCommandsNewEnumerator87         = 84,
		FNAFQualityCommandsNewEnumerator88         = 85,
		FNAFQualityCommandsNewEnumerator89         = 86,
		FNAFQualityCommandsNewEnumerator90         = 87,
		FNAFQualityCommandsNewEnumerator92         = 88,
		FNAFQualityCommandsNewEnumerator93         = 89,
		FNAFQualityCommandsFNAFQualityCommands_MAX = 90
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
