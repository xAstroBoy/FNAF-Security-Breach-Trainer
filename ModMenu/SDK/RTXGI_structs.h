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
	 * Enum RTXGI.EDDGISkyLightType
	 */
	enum class EDDGISkyLightType : uint8_t
	{
		None       = 0,
		Raster     = 1,
		RayTracing = 2,
		MAX        = 3
	};

	/**
	 * Enum RTXGI.EDDGIRaysPerProbe
	 */
	enum class EDDGIRaysPerProbe : uint8_t
	{
		n144  = 0,
		n288  = 1,
		n432  = 2,
		n576  = 3,
		n720  = 4,
		n864  = 5,
		n1008 = 6,
		MAX   = 7
	};

	/**
	 * Enum RTXGI.EDDGIProbesVisulizationMode
	 */
	enum class EDDGIProbesVisulizationMode : uint8_t
	{
		off   = 0,
		irrad = 1,
		distr = 2,
		distg = 3,
		MAX   = 4
	};

	/**
	 * Enum RTXGI.EDDGIDistanceBits
	 */
	enum class EDDGIDistanceBits : uint8_t
	{
		n16 = 0,
		n32 = 1,
		MAX = 2
	};

	/**
	 * Enum RTXGI.EDDGIIrradianceBits
	 */
	enum class EDDGIIrradianceBits : uint8_t
	{
		n10 = 0,
		n32 = 1,
		MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RTXGI.ProbeRelocation
	 * Size -> 0x000C
	 */
	struct FProbeRelocation
	{
	public:
		bool                                                       AutomaticProbeRelocation;                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7CX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProbeMinFrontfaceDistance;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProbeBackfaceThreshold;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
