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
	 * Enum TimeManagement.EFrameNumberDisplayFormats
	 */
	enum class TimeManagement_EFrameNumberDisplayFormats : uint8_t
	{
		EFrameNumberDisplayFormats__NonDropFrameTimecode           = 0,
		EFrameNumberDisplayFormats__DropFrameTimecode              = 1,
		EFrameNumberDisplayFormats__Seconds                        = 2,
		EFrameNumberDisplayFormats__Frames                         = 3,
		EFrameNumberDisplayFormats__MAX_Count                      = 4,
		EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5
	};

	/**
	 * Enum TimeManagement.ETimedDataInputState
	 */
	enum class TimeManagement_ETimedDataInputState : uint8_t
	{
		ETimedDataInputState__Connected                = 0,
		ETimedDataInputState__Unresponsive             = 1,
		ETimedDataInputState__Disconnected             = 2,
		ETimedDataInputState__ETimedDataInputState_MAX = 3
	};

	/**
	 * Enum TimeManagement.ETimedDataInputEvaluationType
	 */
	enum class TimeManagement_ETimedDataInputEvaluationType : uint8_t
	{
		ETimedDataInputEvaluationType__None                              = 0,
		ETimedDataInputEvaluationType__Timecode                          = 1,
		ETimedDataInputEvaluationType__PlatformTime                      = 2,
		ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TimeManagement.TimedDataInputEvaluationData
	 * Size -> 0x0008
	 */
	struct FTimedDataInputEvaluationData
	{
	public:
		float                                                      DistanceToNewestSampleSeconds;                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToOldestSampleSeconds;                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct TimeManagement.TimedDataChannelSampleTime
	 * Size -> 0x0018
	 */
	struct FTimedDataChannelSampleTime
	{
	public:
		unsigned char                                              UnknownData_G6GS[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
