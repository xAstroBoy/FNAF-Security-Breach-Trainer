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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.FixOnomatopoeiaFormatting
	 */
	struct UWI_SubtitlesManager_C_FixOnomatopoeiaFormatting_Params
	{
	public:
		class FString                                              Subtitle;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SubtitleWithOnomatopeia;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.AdjustSpacing
	 */
	struct UWI_SubtitlesManager_C_AdjustSpacing_Params
	{
	public:
		float                                                      SubtitleSpacing;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastSubtitleSpacing;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetFreeSubtitleFromPool
	 */
	struct UWI_SubtitlesManager_C_GetFreeSubtitleFromPool_Params
	{
	public:
		struct FSubtitlePoolItem                                   SubtitleItem;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.UpdateDisplay
	 */
	struct UWI_SubtitlesManager_C_UpdateDisplay_Params
	{	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.EndVoiceOverDisplay
	 */
	struct UWI_SubtitlesManager_C_EndVoiceOverDisplay_Params
	{
	public:
		class FString                                              reason;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.RemoveSubtitles
	 */
	struct UWI_SubtitlesManager_C_RemoveSubtitles_Params
	{	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.CreateNewSubtitle
	 */
	struct UWI_SubtitlesManager_C_CreateNewSubtitle_Params
	{
	public:
		class UWI_Subtitles_C*                                     Subtitle;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSubtitlePoolItem                                   SubtitlePoolItem;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.SetSubtitleStates
	 */
	struct UWI_SubtitlesManager_C_SetSubtitleStates_Params
	{
	public:
		TArray<struct FS_SubtitleState>                            States;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetSubtitleStates
	 */
	struct UWI_SubtitlesManager_C_GetSubtitleStates_Params
	{
	public:
		TArray<struct FS_SubtitleState>                            SubtitleStates;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.Extract Subtitle Variable
	 */
	struct UWI_SubtitlesManager_C_ExtractSubtitleVariable_Params
	{
	public:
		class FString                                              SourceString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CharStart;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CharEnd;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Variable;                                                // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              String;                                                  // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.PrintDebug
	 */
	struct UWI_SubtitlesManager_C_PrintDebug_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.BeginVoiceOverDisplay
	 */
	struct UWI_SubtitlesManager_C_BeginVoiceOverDisplay_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FallbackSourceString;                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      FallbackDuration;                                        // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxRadiusPercent;                                        // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SanitizeKey;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HightPriority;                                           // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZH4[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.SubtitleEnd
	 */
	struct UWI_SubtitlesManager_C_SubtitleEnd_Params
	{
	public:
		class UWI_Subtitles_C*                                     SubtitleWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_SubtitlesManager.WI_SubtitlesManager_C.ExecuteUbergraph_WI_SubtitlesManager
	 */
	struct UWI_SubtitlesManager_C_ExecuteUbergraph_WI_SubtitlesManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q5GY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
