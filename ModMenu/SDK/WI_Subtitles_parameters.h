#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WI_Subtitles.WI_Subtitles_C.ToggleSubtitleVisibility
struct UWI_Subtitles_C_ToggleSubtitleVisibility_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_Subtitles.WI_Subtitles_C.PrintDebug
struct UWI_Subtitles_C_PrintDebug_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.UpdateDisplay
struct UWI_Subtitles_C_UpdateDisplay_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.ExtractSubtitleVariable
struct UWI_Subtitles_C_ExtractSubtitleVariable_Params
{
	struct FString                                     SourceString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CharStart;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CharEnd;                                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Variable;                                                  // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     String;                                                    // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.BeginVoiceOverDisplay
struct UWI_Subtitles_C_BeginVoiceOverDisplay_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FallbackSourceString;                                      // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              FallbackDuration;                                          // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRadiusPercent;                                          // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SanitizeKey;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HighPriority;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_Subtitles.WI_Subtitles_C.TickDistance
struct UWI_Subtitles_C_TickDistance_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.TickLines
struct UWI_Subtitles_C_TickLines_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.ToggleActive
struct UWI_Subtitles_C_ToggleActive_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_Subtitles.WI_Subtitles_C.GetSubtitleState
struct UWI_Subtitles_C_GetSubtitleState_Params
{
	struct FS_SubtitleState                            ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.SetSubtitleState
struct UWI_Subtitles_C_SetSubtitleState_Params
{
	struct FS_SubtitleState                            State;                                                     // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.Reset Lines
struct UWI_Subtitles_C_Reset_Lines_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.PreConstruct
struct UWI_Subtitles_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_Subtitles.WI_Subtitles_C.Construct
struct UWI_Subtitles_C_Construct_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.Tick
struct UWI_Subtitles_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.EndVoiceOverDisplay
struct UWI_Subtitles_C_EndVoiceOverDisplay_Params
{
	struct FString                                     reason;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.SetEndTimer
struct UWI_Subtitles_C_SetEndTimer_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Subtitles.WI_Subtitles_C.EndTimer
struct UWI_Subtitles_C_EndTimer_Params
{
};

// Function WI_Subtitles.WI_Subtitles_C.ExecuteUbergraph_WI_Subtitles
struct UWI_Subtitles_C_ExecuteUbergraph_WI_Subtitles_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
