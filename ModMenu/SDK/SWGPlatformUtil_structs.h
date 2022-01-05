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
	 * Enum SWGPlatformUtil.ESWGPlatform
	 */
	enum class SWGPlatformUtil_ESWGPlatform : uint8_t
	{
		ESWGPlatform__Steam            = 0,
		ESWGPlatform__Oculus           = 1,
		ESWGPlatform__PS4              = 2,
		ESWGPlatform__PS5              = 3,
		ESWGPlatform__Switch           = 4,
		ESWGPlatform__ESWGPlatform_MAX = 5
	};

	/**
	 * Enum SWGPlatformUtil.ESWGEditor
	 */
	enum class SWGPlatformUtil_ESWGEditor : uint8_t
	{
		ESWGEditor__InEditor       = 0,
		ESWGEditor__NotInEditor    = 1,
		ESWGEditor__ESWGEditor_MAX = 2
	};

	/**
	 * Enum SWGPlatformUtil.EGameActivityEndType
	 */
	enum class SWGPlatformUtil_EGameActivityEndType : uint8_t
	{
		EGameActivityEndType__Completed                = 0,
		EGameActivityEndType__Failed                   = 1,
		EGameActivityEndType__Cancelled                = 2,
		EGameActivityEndType__EGameActivityEndType_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
