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
	 * Enum SWGPlatformUtil.ESWGXboxPlatform
	 */
	enum class ESWGXboxPlatform : uint8_t
	{
		NotXbox     = 0,
		XboxOne     = 1,
		XboxOneS    = 2,
		XboxOneX    = 3,
		XboxSeriesS = 4,
		XboxSeriesX = 5,
		MAX         = 6
	};

	/**
	 * Enum SWGPlatformUtil.ESWGPlatform
	 */
	enum class ESWGPlatform : uint8_t
	{
		Steam   = 0,
		Oculus  = 1,
		PS4     = 2,
		PS5     = 3,
		Switch  = 4,
		Stadia  = 5,
		XboxOne = 6,
		XSX     = 7,
		MAX     = 8
	};

	/**
	 * Enum SWGPlatformUtil.ESWGEditor
	 */
	enum class ESWGEditor : uint8_t
	{
		InEditor    = 0,
		NotInEditor = 1,
		MAX         = 2
	};

	/**
	 * Enum SWGPlatformUtil.EGameActivityEndType
	 */
	enum class EGameActivityEndType : uint8_t
	{
		Completed = 0,
		Failed    = 1,
		Cancelled = 2,
		MAX       = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
