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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapController.MagicLeapControllerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetMotionSourceForHand(InputCore_EControllerHand Hand, const class FName& MotionSource);
		bool STATIC_SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode);
		bool STATIC_PlayLEDPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool STATIC_PlayLEDEffect(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool STATIC_PlayHapticPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
		bool STATIC_PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool STATIC_PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool STATIC_PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
		int32_t STATIC_MaxSupportedMagicLeapControllers();
		bool STATIC_IsMLControllerConnected(const class FName& MotionSource);
		void STATIC_InvertControllerMapping();
		class FName STATIC_GetMotionSourceForHand(InputCore_EControllerHand Hand);
		MagicLeapController_EMagicLeapControllerType STATIC_GetMLControllerType(InputCore_EControllerHand Hand);
		InputCore_EControllerHand STATIC_GetHandForMotionSource(const class FName& MotionSource);
		MagicLeapController_EMagicLeapControllerType STATIC_GetControllerType(const class FName& MotionSource);
		MagicLeapController_EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
		bool STATIC_GetControllerMapping(int32_t ControllerIndex, InputCore_EControllerHand* Hand);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapController.MagicLeapTouchpadGesturesComponent
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UMagicLeapTouchpadGesturesComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M03Y[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTouchpadGestureStart;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTouchpadGestureContinue;                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTouchpadGestureEnd;                                    // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87V0[0x58];                                  // 0x00E8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
