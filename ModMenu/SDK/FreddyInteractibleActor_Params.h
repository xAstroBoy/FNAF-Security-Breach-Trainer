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
	 * Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO
	 */
	struct AFreddyInteractibleActor_C_GetFreddyVO_Params
	{
	public:
		EFreddyVOType                                              VOType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0FG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UDialogueWave*>                               FreddyDialog;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation
	 */
	struct AFreddyInteractibleActor_C_GetFreddyActionLocationAndRotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
