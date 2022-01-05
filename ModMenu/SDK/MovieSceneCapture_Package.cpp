﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MovieSceneCapture_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01F693A0
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneCaptureProtocolBase::IsCapturing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");
		
		UMovieSceneCaptureProtocolBase_IsCapturing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0199C7E0
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	MovieSceneCapture_EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");
		
		UMovieSceneCaptureProtocolBase_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneAudioCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNullAudioCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNullAudioCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMasterAudioSubmixCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterAudioSubmixCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneImageCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneImageCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCompositionGraphCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositionGraphCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFrameGrabberProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrameGrabberProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCompressedImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompressedImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_BMP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_BMP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_PNG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_PNG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_JPG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_JPG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_EXR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_EXR::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCaptureInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69690
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");
		
		UMovieSceneCapture_SetImageCaptureProtocolType_Params params {};
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69610
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");
		
		UMovieSceneCapture_SetAudioCaptureProtocolType_Params params {};
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69350
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");
		
		UMovieSceneCapture_GetImageCaptureProtocol_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F692B0
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");
		
		UMovieSceneCapture_GetAudioCaptureProtocol_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69370
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UMovieSceneCaptureEnvironment::STATIC_IsCaptureInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");
		
		UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69300
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int UMovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");
		
		UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F692D0
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UMovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");
		
		UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F68F00
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::STATIC_FindImageCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");
		
		UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F68ED0
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::STATIC_FindAudioCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");
		
		UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCaptureEnvironment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureEnvironment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F698A0
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");
		
		UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69710
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");
		
		UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params params {};
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69440
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           BufferID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");
		
		UUserDefinedCaptureProtocol_ResolveBuffer_Params params {};
		params.Buffer = Buffer;
		params.BufferID = BufferID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnWarmUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");
		
		UUserDefinedCaptureProtocol_OnWarmUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");
		
		UUserDefinedCaptureProtocol_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnStartCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");
		
		UUserDefinedCaptureProtocol_OnStartCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69410
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool UUserDefinedCaptureProtocol::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");
		
		UUserDefinedCaptureProtocol_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnPreTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");
		
		UUserDefinedCaptureProtocol_OnPreTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCapturedPixels                             Pixels                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");
		
		UUserDefinedCaptureProtocol_OnPixelsReceived_Params params {};
		params.Pixels = Pixels;
		params.ID = ID;
		params.FrameMetrics = FrameMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnPauseCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");
		
		UUserDefinedCaptureProtocol_OnPauseCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");
		
		UUserDefinedCaptureProtocol_OnFinalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnCaptureFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");
		
		UUserDefinedCaptureProtocol_OnCaptureFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F693E0
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	bool UUserDefinedCaptureProtocol::OnCanFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");
		
		UUserDefinedCaptureProtocol_OnCanFinalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUserDefinedCaptureProtocol::OnBeginFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");
		
		UUserDefinedCaptureProtocol_OnBeginFinalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69330
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");
		
		UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F68F30
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FFrameMetrics                               InFrameMetrics                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");
		
		UUserDefinedCaptureProtocol_GenerateFilename_Params params {};
		params.InFrameMetrics = InFrameMetrics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUserDefinedCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserDefinedCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F698C0
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCapturedPixels                             PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyImageData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");
		
		UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params params {};
		params.PixelData = PixelData;
		params.StreamID = StreamID;
		params.FrameMetrics = FrameMetrics;
		params.bCopyImageData = bCopyImageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69230
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");
		
		UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01F69020
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");
		
		UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params params {};
		params.Buffer = Buffer;
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUserDefinedImageCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserDefinedImageCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVideoCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}

}

