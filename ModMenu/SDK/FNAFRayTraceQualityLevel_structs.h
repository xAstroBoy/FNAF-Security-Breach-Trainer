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
	 * UserDefinedEnum FNAFRayTraceQualityLevel.FNAFRayTraceQualityLevel
	 */
	enum class EFNAFRayTraceQualityLevel : uint8_t
	{
		FNAFRayTraceQualityLevelNewEnumerator0               = 0,
		FNAFRayTraceQualityLevelNewEnumerator1               = 1,
		FNAFRayTraceQualityLevelNewEnumerator2               = 2,
		FNAFRayTraceQualityLevelNewEnumerator3               = 3,
		FNAFRayTraceQualityLevelFNAFRayTraceQualityLevel_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
