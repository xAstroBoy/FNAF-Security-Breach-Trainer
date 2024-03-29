﻿#pragma once

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
	 * Enum DLSSBlueprint.UDLSSMode
	 */
	enum class EUDLSSMode : uint8_t
	{
		UDLSSModeOff              = 0,
		UDLSSModeAuto             = 1,
		UDLSSModeUltraQuality     = 2,
		UDLSSModeQuality          = 3,
		UDLSSModeBalanced         = 4,
		UDLSSModePerformance      = 5,
		UDLSSModeUltraPerformance = 6,
		UDLSSModeUDLSSMode_MAX    = 7
	};

	/**
	 * Enum DLSSBlueprint.UDLSSSupport
	 */
	enum class EUDLSSSupport : uint8_t
	{
		UDLSSSupportSupported                            = 0,
		UDLSSSupportNotSupported                         = 1,
		UDLSSSupportNotSupportedIncompatibleHardware     = 2,
		UDLSSSupportNotSupportedDriverOutOfDate          = 3,
		UDLSSSupportNotSupportedOperatingSystemOutOfDate = 4,
		UDLSSSupportNotSupportedByPlatformAtBuildTime    = 5,
		UDLSSSupportUDLSSSupport_MAX                     = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
