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
	 * Function BPI_PauseUI.BPI_PauseUI_C.GoToLastItemCollected
	 */
	struct UBPI_PauseUI_C_GoToLastItemCollected_Params
	{	};

	/**
	 * Function BPI_PauseUI.BPI_PauseUI_C.UpdateLastItem
	 */
	struct UBPI_PauseUI_C_UpdateLastItem_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           ItemInfo;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_PauseUI.BPI_PauseUI_C.OpenInventoryMenu
	 */
	struct UBPI_PauseUI_C_OpenInventoryMenu_Params
	{	};

	/**
	 * Function BPI_PauseUI.BPI_PauseUI_C.GetFocusButton
	 */
	struct UBPI_PauseUI_C_GetFocusButton_Params
	{
	public:
		class UButton*                                             Button;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
