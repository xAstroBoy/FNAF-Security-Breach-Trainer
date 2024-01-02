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
	 * Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.CamAccessPointStaticTeleported
	 */
	struct UBPI_ChowdaPawnInterface_DLC_C_CamAccessPointStaticTeleported_Params
	{	};

	/**
	 * Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsSecurityNodePawn
	 */
	struct UBPI_ChowdaPawnInterface_DLC_C_IsSecurityNodePawn_Params
	{
	public:
		bool                                                       IsPawnType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsConduitPawn
	 */
	struct UBPI_ChowdaPawnInterface_DLC_C_IsConduitPawn_Params
	{
	public:
		bool                                                       IsPawnType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsCamAccessPawn
	 */
	struct UBPI_ChowdaPawnInterface_DLC_C_IsCamAccessPawn_Params
	{
	public:
		bool                                                       IsPawnType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
