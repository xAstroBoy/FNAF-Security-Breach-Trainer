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
	 * Function VannyController.VannyController_C.ReceiveBeginPlay
	 */
	struct AVannyController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function VannyController.VannyController_C.OnRoomChanged
	 */
	struct AVannyController_C_OnRoomChanged_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VannyController.VannyController_C.UpdateRoomSetup
	 */
	struct AVannyController_C_UpdateRoomSetup_Params
	{	};

	/**
	 * Function VannyController.VannyController_C.OnPlayerEnteredRoom
	 */
	struct AVannyController_C_OnPlayerEnteredRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VannyController.VannyController_C.ExecuteUbergraph_VannyController
	 */
	struct AVannyController_C_ExecuteUbergraph_VannyController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_803E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
