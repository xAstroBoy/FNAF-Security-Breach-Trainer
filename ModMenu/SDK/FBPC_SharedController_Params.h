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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PrintDebugSubtitles
	 */
	struct AFBPC_SharedController_C_PrintDebugSubtitles_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PrintDebug
	 */
	struct AFBPC_SharedController_C_PrintDebug_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.UpdateSubtitles
	 */
	struct AFBPC_SharedController_C_UpdateSubtitles_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ShowFazwatch
	 */
	struct AFBPC_SharedController_C_ShowFazwatch_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.HideFazwatch
	 */
	struct AFBPC_SharedController_C_HideFazwatch_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EndPostEventWithSubtitles
	 */
	struct AFBPC_SharedController_C_EndPostEventWithSubtitles_Params
	{
	public:
		AkAudio_EAkCallbackType                                    CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PostEventWithSubtitles
	 */
	struct AFBPC_SharedController_C_PostEventWithSubtitles_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplay
	 */
	struct AFBPC_SharedController_C_EndSubtitleDisplay_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.BeginSubtitleDisplay
	 */
	struct AFBPC_SharedController_C_BeginSubtitleDisplay_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FallbackSourceString;                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxRadiusPercent;                                        // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SanitizeKey;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HighPriority;                                            // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EnsureSubtitles
	 */
	struct AFBPC_SharedController_C_EnsureSubtitles_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.AfterUnpause
	 */
	struct AFBPC_SharedController_C_AfterUnpause_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.AfterPause
	 */
	struct AFBPC_SharedController_C_AfterPause_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct AFBPC_SharedController_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2
	 */
	struct AFBPC_SharedController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1
	 */
	struct AFBPC_SharedController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ReceiveBeginPlay
	 */
	struct AFBPC_SharedController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause
	 */
	struct AFBPC_SharedController_C_Click_To_Unpause_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.OnToggleLocalizationQA
	 */
	struct AFBPC_SharedController_C_OnToggleLocalizationQA_Params
	{
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ExecuteUbergraph_FBPC_SharedController
	 */
	struct AFBPC_SharedController_C_ExecuteUbergraph_FBPC_SharedController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
