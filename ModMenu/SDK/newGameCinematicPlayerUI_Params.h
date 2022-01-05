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
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick
	 */
	struct UNewGameCinematicPlayerUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo
	 */
	struct UNewGameCinematicPlayerUI_C_StopIntroVideo_Params
	{
	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo
	 */
	struct UNewGameCinematicPlayerUI_C_NewGameIntroVideo_Params
	{
	public:
		struct FCinematicCutscene                                  CinematicCutscene;                                       // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 */
	struct UNewGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params
	{
	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway
	 */
	struct UNewGameCinematicPlayerUI_C_StartTextFadeAway_Params
	{
	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText
	 */
	struct UNewGameCinematicPlayerUI_C_SetText_Params
	{
	};

	/**
	 * Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI
	 */
	struct UNewGameCinematicPlayerUI_C_ExecuteUbergraph_NewGameCinematicPlayerUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
