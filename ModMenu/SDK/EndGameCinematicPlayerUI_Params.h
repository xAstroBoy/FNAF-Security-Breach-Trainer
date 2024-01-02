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
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.DisplayComicbookSubtitle
	 */
	struct UEndGameCinematicPlayerUI_C_DisplayComicbookSubtitle_Params
	{
	public:
		class FText                                                Subtitle;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetupComicbookSubtitles
	 */
	struct UEndGameCinematicPlayerUI_C_SetupComicbookSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Tick
	 */
	struct UEndGameCinematicPlayerUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.EndGameVideoCredits
	 */
	struct UEndGameCinematicPlayerUI_C_EndGameVideoCredits_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StopVideo
	 */
	struct UEndGameCinematicPlayerUI_C_StopVideo_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 */
	struct UEndGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StartTextFadeAway
	 */
	struct UEndGameCinematicPlayerUI_C_StartTextFadeAway_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetText
	 */
	struct UEndGameCinematicPlayerUI_C_SetText_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.PlayFazerblastDialogue
	 */
	struct UEndGameCinematicPlayerUI_C_PlayFazerblastDialogue_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Hold Timer
	 */
	struct UEndGameCinematicPlayerUI_C_StartHoldTimer_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Stop Hold Timer
	 */
	struct UEndGameCinematicPlayerUI_C_StopHoldTimer_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.OnMediaOpened
	 */
	struct UEndGameCinematicPlayerUI_C_OnMediaOpened_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Loading Dock Subtitles
	 */
	struct UEndGameCinematicPlayerUI_C_StartLoadingDockSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Fire Escape Subtitles
	 */
	struct UEndGameCinematicPlayerUI_C_StartFireEscapeSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Gregory Escapes Subtitles
	 */
	struct UEndGameCinematicPlayerUI_C_StartGregoryEscapesSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Destroyed Subtitles
	 */
	struct UEndGameCinematicPlayerUI_C_StartVannyDestroyedSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Redeemed Subtitles
	 */
	struct UEndGameCinematicPlayerUI_C_StartVannyRedeemedSubtitles_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Construct
	 */
	struct UEndGameCinematicPlayerUI_C_Construct_Params
	{	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI
	 */
	struct UEndGameCinematicPlayerUI_C_ExecuteUbergraph_EndGameCinematicPlayerUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5M7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
