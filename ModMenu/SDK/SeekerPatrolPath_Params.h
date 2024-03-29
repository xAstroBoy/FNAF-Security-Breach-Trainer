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
	 * Function SeekerPatrolPath.SeekerPatrolPath_C.GetPathName
	 */
	struct ASeekerPatrolPath_C_GetPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SeekerPatrolPath.SeekerPatrolPath_C.GetSpawnType
	 */
	struct ASeekerPatrolPath_C_GetSpawnType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SeekerPatrolPath.SeekerPatrolPath_C.ReceiveBeginPlay
	 */
	struct ASeekerPatrolPath_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SeekerPatrolPath.SeekerPatrolPath_C.ExecuteUbergraph_SeekerPatrolPath
	 */
	struct ASeekerPatrolPath_C_ExecuteUbergraph_SeekerPatrolPath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DHA9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
