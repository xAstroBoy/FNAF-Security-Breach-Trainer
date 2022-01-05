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
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Begin Video
	 */
	struct UCinematicMediaPlayerUI_C_Begin_Video_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 2
	 */
	struct UCinematicMediaPlayerUI_C_Eyes_Open_2_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 1
	 */
	struct UCinematicMediaPlayerUI_C_Eyes_Open_1_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.NewGameIntroVideo
	 */
	struct UCinematicMediaPlayerUI_C_NewGameIntroVideo_Params
	{
	public:
		struct FCinematicCutscene                                  CinematicCutscene;                                       // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.StopIntroVideo
	 */
	struct UCinematicMediaPlayerUI_C_StopIntroVideo_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 2
	 */
	struct UCinematicMediaPlayerUI_C_Eyes_Shut_2_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 1
	 */
	struct UCinematicMediaPlayerUI_C_Eyes_Shut_1_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.PreConstruct
	 */
	struct UCinematicMediaPlayerUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Stop
	 */
	struct UCinematicMediaPlayerUI_C_Stop_Params
	{
	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Play
	 */
	struct UCinematicMediaPlayerUI_C_Play_Params
	{
	public:
		struct FCinematicCutscene                                  CinematicCutscene;                                       // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Tick
	 */
	struct UCinematicMediaPlayerUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.ExecuteUbergraph_CinematicMediaPlayerUI
	 */
	struct UCinematicMediaPlayerUI_C_ExecuteUbergraph_CinematicMediaPlayerUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.OnStop__DelegateSignature
	 */
	struct UCinematicMediaPlayerUI_C_OnStop__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
