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
	 * Function BPI_Controller.BPI_Controller_C.ToggleCanPause
	 */
	struct UBPI_Controller_C_ToggleCanPause_Params
	{
	public:
		bool                                                       AllowPausing;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.IsOnPauseMenu
	 */
	struct UBPI_Controller_C_IsOnPauseMenu_Params
	{
	public:
		bool                                                       IsOnPauseMenu;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.IsOnLoadingScreen
	 */
	struct UBPI_Controller_C_IsOnLoadingScreen_Params
	{
	public:
		bool                                                       _TRUE__;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.CloseInventoryMenu
	 */
	struct UBPI_Controller_C_CloseInventoryMenu_Params
	{	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.UsingCameraStation
	 */
	struct UBPI_Controller_C_UsingCameraStation_Params
	{
	public:
		bool                                                       UsingCamStation;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.PauseGame
	 */
	struct UBPI_Controller_C_PauseGame_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.AllowNewItemPreview
	 */
	struct UBPI_Controller_C_AllowNewItemPreview_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Controller.BPI_Controller_C.UsingGamepad
	 */
	struct UBPI_Controller_C_UsingGamepad_Params
	{
	public:
		bool                                                       UsingGamepad;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
