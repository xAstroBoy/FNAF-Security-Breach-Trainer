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
	 * Function FBPC_SharedController.FBPC_SharedController_C.IsOnPauseMenu
	 */
	struct AFBPC_SharedController_C_IsOnPauseMenu_Params
	{
	public:
		bool                                                       IsOnPauseMenu;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.UsingGamepad
	 */
	struct AFBPC_SharedController_C_UsingGamepad_Params
	{
	public:
		bool                                                       UsingGamepad;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S86G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.GetRobotArmsAnimInstance
	 */
	struct AFBPC_SharedController_C_GetRobotArmsAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.GetFreddyChairAnimInstance
	 */
	struct AFBPC_SharedController_C_GetFreddyChairAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
	 * Function FBPC_SharedController.FBPC_SharedController_C.AttemptToExitPawns
	 */
	struct AFBPC_SharedController_C_AttemptToExitPawns_Params
	{
	public:
		struct FKey                                                A;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PrintDebugSubtitles
	 */
	struct AFBPC_SharedController_C_PrintDebugSubtitles_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYBE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PrintDebug
	 */
	struct AFBPC_SharedController_C_PrintDebug_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1OYV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.UpdateSubtitles
	 */
	struct AFBPC_SharedController_C_UpdateSubtitles_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ShowFazwatch
	 */
	struct AFBPC_SharedController_C_ShowFazwatch_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.HideFazwatch
	 */
	struct AFBPC_SharedController_C_HideFazwatch_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EndPostEventWithSubtitles
	 */
	struct AFBPC_SharedController_C_EndPostEventWithSubtitles_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S0IA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.Post Event With Subtitles Func
	 */
	struct AFBPC_SharedController_C_PostEventWithSubtitlesFunc_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XI06[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplayFunc
	 */
	struct AFBPC_SharedController_C_EndSubtitleDisplayFunc_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.Begin Subtitle Display Func
	 */
	struct AFBPC_SharedController_C_BeginSubtitleDisplayFunc_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FallbackSourceString;                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxRadiusPercent;                                        // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SanitizeKey;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HighPriority;                                            // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8Z15[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EnsureSubtitles
	 */
	struct AFBPC_SharedController_C_EnsureSubtitles_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HCAO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.AfterUnpause
	 */
	struct AFBPC_SharedController_C_AfterUnpause_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.AfterPause
	 */
	struct AFBPC_SharedController_C_AfterPause_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_2
	 */
	struct AFBPC_SharedController_C_InpActEvt_Pause_K2Node_InputActionEvent_2_Params
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
	 * Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Inventory_K2Node_InputActionEvent_1
	 */
	struct AFBPC_SharedController_C_InpActEvt_Inventory_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause
	 */
	struct AFBPC_SharedController_C_ClickToUnpause_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.OnToggleLocalizationQA
	 */
	struct AFBPC_SharedController_C_OnToggleLocalizationQA_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplay
	 */
	struct AFBPC_SharedController_C_EndSubtitleDisplay_Params
	{	};

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
	 * Function FBPC_SharedController.FBPC_SharedController_C.SkipSubtitles
	 */
	struct AFBPC_SharedController_C_SkipSubtitles_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.SetPlayingPartsAndServiceGame
	 */
	struct AFBPC_SharedController_C_SetPlayingPartsAndServiceGame_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.OverridePause
	 */
	struct AFBPC_SharedController_C_OverridePause_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.RemoveOverride
	 */
	struct AFBPC_SharedController_C_RemoveOverride_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.AllowNewItemPreview
	 */
	struct AFBPC_SharedController_C_AllowNewItemPreview_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.PauseGame
	 */
	struct AFBPC_SharedController_C_PauseGame_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.UsingCameraStation
	 */
	struct AFBPC_SharedController_C_UsingCameraStation_Params
	{
	public:
		bool                                                       UsingCamStation;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.CloseInventoryMenu
	 */
	struct AFBPC_SharedController_C_CloseInventoryMenu_Params
	{	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.IsOnLoadingScreen
	 */
	struct AFBPC_SharedController_C_IsOnLoadingScreen_Params
	{
	public:
		bool                                                       _TRUE__;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ToggleCanPause
	 */
	struct AFBPC_SharedController_C_ToggleCanPause_Params
	{
	public:
		bool                                                       AllowPausing;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.ExecuteUbergraph_FBPC_SharedController
	 */
	struct AFBPC_SharedController_C_ExecuteUbergraph_FBPC_SharedController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FBPC_SharedController.FBPC_SharedController_C.EscapePressed__DelegateSignature
	 */
	struct AFBPC_SharedController_C_EscapePressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
