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
	 * Function WI_InstructionCard_PAS_FinishProcedure_Claws.WI_InstructionCard_PAS_FinishProcedure_Claws_C.Tick
	 */
	struct UWI_InstructionCard_PAS_FinishProcedure_Claws_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_InstructionCard_PAS_FinishProcedure_Claws.WI_InstructionCard_PAS_FinishProcedure_Claws_C.ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Claws
	 */
	struct UWI_InstructionCard_PAS_FinishProcedure_Claws_C_ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Claws_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LGHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
