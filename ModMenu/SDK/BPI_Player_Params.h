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
	 * Function BPI_Player.BPI_Player_C.VisualChangeItem
	 */
	struct UBPI_Player_C_VisualChangeItem_Params
	{
	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsSwitchingItems
	 */
	struct UBPI_Player_C_IsSwitchingItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsInAir
	 */
	struct UBPI_Player_C_IsInAir_Params
	{
	public:
		bool                                                       InAir;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy
	 */
	struct UBPI_Player_C_PlayerEnteringExitingFreddy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
