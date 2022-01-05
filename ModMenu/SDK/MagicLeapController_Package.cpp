/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MagicLeapController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00A70060
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_SetMotionSourceForHand(InputCore_EControllerHand Hand, const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");
		
		UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params {};
		params.Hand = Hand;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F770
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");
		
		UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params {};
		params.TrackingMode = TrackingMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6FF20
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");
		
		UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params {};
		params.MotionSource = MotionSource;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6FD70
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDEffect(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");
		
		UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params {};
		params.MotionSource = MotionSource;
		params.LEDEffect = LEDEffect;
		params.LEDSpeed = LEDSpeed;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6FC80
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayHapticPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");
		
		UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params {};
		params.MotionSource = MotionSource;
		params.HapticPattern = HapticPattern;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6FAD0
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");
		
		UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params {};
		params.Hand = Hand;
		params.LEDEffect = LEDEffect;
		params.LEDSpeed = LEDSpeed;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F990
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");
		
		UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params params {};
		params.Hand = Hand;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F890
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");
		
		UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params {};
		params.Hand = Hand;
		params.HapticPattern = HapticPattern;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A63090
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int UMagicLeapControllerFunctionLibrary::STATIC_MaxSupportedMagicLeapControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");
		
		UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F670
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_IsMLControllerConnected(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");
		
		UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params {};
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F870
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMagicLeapControllerFunctionLibrary::STATIC_InvertControllerMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");
		
		UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F7F0
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMagicLeapControllerFunctionLibrary::STATIC_GetMotionSourceForHand(InputCore_EControllerHand Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");
		
		UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params {};
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F770
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetMLControllerType(InputCore_EControllerHand Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");
		
		UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params params {};
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F6F0
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	InputCore_EControllerHand UMagicLeapControllerFunctionLibrary::STATIC_GetHandForMotionSource(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");
		
		UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params {};
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F670
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetControllerType(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");
		
		UMagicLeapControllerFunctionLibrary_GetControllerType_Params params {};
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F640
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::STATIC_GetControllerTrackingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");
		
		UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A6F570
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::STATIC_GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");
		
		UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params params {};
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hand != nullptr)
			*Hand = params.Hand;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapControllerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapControllerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapTouchpadGesturesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapTouchpadGesturesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}

}


