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
	 * Function BPI_PlayerInput.BPI_PlayerInput_C.GetIsPlaySequenceRunning
	 */
	struct UBPI_PlayerInput_C_GetIsPlaySequenceRunning_Params
	{
	public:
		bool                                                       IsSequenceRunning;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerInput.BPI_PlayerInput_C.SetIsPlaySequenceRunning
	 */
	struct UBPI_PlayerInput_C_SetIsPlaySequenceRunning_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerInput.BPI_PlayerInput_C.SetEnabledInputFlags
	 */
	struct UBPI_PlayerInput_C_SetEnabledInputFlags_Params
	{
	public:
		int32_t                                                    InputFlags;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerInput.BPI_PlayerInput_C.EnableAllInputs
	 */
	struct UBPI_PlayerInput_C_EnableAllInputs_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
