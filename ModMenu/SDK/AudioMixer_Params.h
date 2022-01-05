﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AudioMixer.SynthComponent.Stop
	 */
	struct USynthComponent_Stop_Params
	{
	};

	/**
	 * Function AudioMixer.SynthComponent.Start
	 */
	struct USynthComponent_Start_Params
	{
	};

	/**
	 * Function AudioMixer.SynthComponent.SetVolumeMultiplier
	 */
	struct USynthComponent_SetVolumeMultiplier_Params
	{
	public:
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SynthComponent.SetSubmixSend
	 */
	struct USynthComponent_SetSubmixSend_Params
	{
	public:
		class USoundSubmixBase*                                    Submix;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SendLevel;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SynthComponent.IsPlaying
	 */
	struct USynthComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	 */
	struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
	{
	public:
		float                                                      InMegabytesToFree;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EAudioRecordingExportType                           ExportType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundWave*                                          ExistingSoundWaveToOverwrite;                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundWave*                                          ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToStopAnalyzing;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ExpectedDuration;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		AudioMixer_EFFTSize                                        FFTSize;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		AudioMixer_EFFTPeakInterpolationMethod                     InterpolationMethod;                                     // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		AudioMixer_EFFTWindowType                                  WindowType;                                              // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HopSize;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	 */
	struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        EntryIndex;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBypassed;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToPause;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	 */
	struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        InSoundSubmix;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        SubmixChainIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        SubmixChainIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        EntryIndex;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	 */
	struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnLoadCompletion;                                        // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	 */
	struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
	{
	public:
		class USoundCue*                                           SoundCue;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToPause;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	 */
	struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Frequencies;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Phases;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	 */
	struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	 */
	struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Frequencies;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Magnitudes;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	 */
	struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	 */
	struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	 */
	struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSourceEffectChainEntry                             Entry;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	 */
	struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	 */
	struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	 */
	struct USubmixEffectSubmixEQPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectSubmixEQSettings                       InSettings;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	 */
	struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
	{
	public:
		class UReverbEffect*                                       InReverbEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetLevel;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DryLevel;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	 */
	struct USubmixEffectReverbPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectReverbSettings                         InSettings;                                              // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	 */
	struct USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params
	{
	public:
		class UReverbEffect*                                       InReverbEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetLevel;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DryLevel;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	 */
	struct USubmixEffectReverbFastPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectReverbFastSettings                     InSettings;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
