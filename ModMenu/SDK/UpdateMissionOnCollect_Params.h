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
	 * Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.On Item Collected
	 */
	struct UUpdateMissionOnCollect_C_OnItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.OnMessageAdded_Event_1
	 */
	struct UUpdateMissionOnCollect_C_OnMessageAdded_Event_1_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMessageTableStruct                             MessageInfo;                                             // 0x0008(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ReceiveBeginPlay
	 */
	struct UUpdateMissionOnCollect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ExecuteUbergraph_UpdateMissionOnCollect
	 */
	struct UUpdateMissionOnCollect_C_ExecuteUbergraph_UpdateMissionOnCollect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
