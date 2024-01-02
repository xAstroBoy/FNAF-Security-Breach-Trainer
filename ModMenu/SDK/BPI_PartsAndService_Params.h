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
	 * Function BPI_PartsAndService.BPI_PartsAndService_C.SetPlayingPartsAndServiceGame
	 */
	struct UBPI_PartsAndService_C_SetPlayingPartsAndServiceGame_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PartsAndService.BPI_PartsAndService_C.GetFreddyChairAnimInstance
	 */
	struct UBPI_PartsAndService_C_GetFreddyChairAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PartsAndService.BPI_PartsAndService_C.GetRobotArmsAnimInstance
	 */
	struct UBPI_PartsAndService_C_GetRobotArmsAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
