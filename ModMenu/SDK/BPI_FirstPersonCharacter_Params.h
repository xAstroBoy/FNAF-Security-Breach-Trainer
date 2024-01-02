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
	 * Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.TriggerJump
	 */
	struct UBPI_FirstPersonCharacter_C_TriggerJump_Params
	{	};

	/**
	 * Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.GetWalkingFOV
	 */
	struct UBPI_FirstPersonCharacter_C_GetWalkingFOV_Params
	{
	public:
		float                                                      FOV;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
