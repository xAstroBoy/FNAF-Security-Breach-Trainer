#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function DoorManagerWithSave.DoorManagerWithSave_C.SetSaveState
	 */
	struct ADoorManagerWithSave_C_SetSaveState_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorClose
	 */
	struct ADoorManagerWithSave_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function DoorManagerWithSave.DoorManagerWithSave_C.ForceDoorOpen
	 */
	struct ADoorManagerWithSave_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function DoorManagerWithSave.DoorManagerWithSave_C.ReceiveBeginPlay
	 */
	struct ADoorManagerWithSave_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DoorManagerWithSave.DoorManagerWithSave_C.ExecuteUbergraph_DoorManagerWithSave
	 */
	struct ADoorManagerWithSave_C_ExecuteUbergraph_DoorManagerWithSave_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
