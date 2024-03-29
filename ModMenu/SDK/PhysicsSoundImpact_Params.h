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
	 * Function PhysicsSoundImpact.PhysicsSoundImpact_C.Initialize
	 */
	struct UPhysicsSoundImpact_C_Initialize_Params
	{	};

	/**
	 * Function PhysicsSoundImpact.PhysicsSoundImpact_C.ReceiveTick
	 */
	struct UPhysicsSoundImpact_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhysicsSoundImpact.PhysicsSoundImpact_C.ExecuteUbergraph_PhysicsSoundImpact
	 */
	struct UPhysicsSoundImpact_C_ExecuteUbergraph_PhysicsSoundImpact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXA8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
