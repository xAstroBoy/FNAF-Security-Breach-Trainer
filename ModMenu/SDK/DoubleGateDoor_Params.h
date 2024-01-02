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
	 * Function DoubleGateDoor.DoubleGateDoor_C.UserConstructionScript
	 */
	struct ADoubleGateDoor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DoubleGateDoor.DoubleGateDoor_C.SetLockState
	 */
	struct ADoubleGateDoor_C_SetLockState_Params
	{
	public:
		EDoubleGateLockState                                       LockState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoubleGateDoor.DoubleGateDoor_C.Refresh State
	 */
	struct ADoubleGateDoor_C_RefreshState_Params
	{	};

	/**
	 * Function DoubleGateDoor.DoubleGateDoor_C.ExecuteUbergraph_DoubleGateDoor
	 */
	struct ADoubleGateDoor_C_ExecuteUbergraph_DoubleGateDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
