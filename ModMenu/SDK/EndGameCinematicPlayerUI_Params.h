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
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.EndGameVideoCredits
	 */
	struct UEndGameCinematicPlayerUI_C_EndGameVideoCredits_Params
	{
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StopVideo
	 */
	struct UEndGameCinematicPlayerUI_C_StopVideo_Params
	{
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 */
	struct UEndGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params
	{
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StartTextFadeAway
	 */
	struct UEndGameCinematicPlayerUI_C_StartTextFadeAway_Params
	{
	};

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
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetText
	 */
	struct UEndGameCinematicPlayerUI_C_SetText_Params
	{
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.PlayFazerblastDialogue
	 */
	struct UEndGameCinematicPlayerUI_C_PlayFazerblastDialogue_Params
	{
	};

	/**
	 * Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI
	 */
	struct UEndGameCinematicPlayerUI_C_ExecuteUbergraph_EndGameCinematicPlayerUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
