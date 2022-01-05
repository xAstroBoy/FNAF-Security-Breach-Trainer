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
	 * Function LaserTagHUD.LaserTagHUD_C.Get_CurrentHighScore
	 */
	struct ULaserTagHUD_C_Get_CurrentHighScore_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Get_LaserTagCountdown
	 */
	struct ULaserTagHUD_C_Get_LaserTagCountdown_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Get_CurrentScore
	 */
	struct ULaserTagHUD_C_Get_CurrentScore_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.GameOver_Text
	 */
	struct ULaserTagHUD_C_GameOver_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Get_CrossHairLaserGun_Visibility
	 */
	struct ULaserTagHUD_C_Get_CrossHairLaserGun_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Get_CountdownLaserTag_CountdownTimer
	 */
	struct ULaserTagHUD_C_Get_CountdownLaserTag_CountdownTimer_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.GameTimerCountdown
	 */
	struct ULaserTagHUD_C_GameTimerCountdown_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.GameSessionUI
	 */
	struct ULaserTagHUD_C_GameSessionUI_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.GameOverUI
	 */
	struct ULaserTagHUD_C_GameOverUI_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.HideUI
	 */
	struct ULaserTagHUD_C_HideUI_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Construct
	 */
	struct ULaserTagHUD_C_Construct_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.Display Go Text
	 */
	struct ULaserTagHUD_C_Display_Go_Text_Params
	{
	};

	/**
	 * Function LaserTagHUD.LaserTagHUD_C.ExecuteUbergraph_LaserTagHUD
	 */
	struct ULaserTagHUD_C_ExecuteUbergraph_LaserTagHUD_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
