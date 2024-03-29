﻿#pragma once

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
	 * Function AudioEmitterInterface.AudioEmitterInterface_C.ToggleInRange
	 */
	struct UAudioEmitterInterface_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioEmitterInterface.AudioEmitterInterface_C.PlayEmitter
	 */
	struct UAudioEmitterInterface_C_PlayEmitter_Params
	{	};

	/**
	 * Function AudioEmitterInterface.AudioEmitterInterface_C.StopEmitter
	 */
	struct UAudioEmitterInterface_C_StopEmitter_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
