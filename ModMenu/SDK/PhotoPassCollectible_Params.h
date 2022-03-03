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
	 * Function PhotoPassCollectible.PhotoPassCollectible_C.ReceiveBeginPlay
	 */
	struct APhotoPassCollectible_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Collected
	 */
	struct APhotoPassCollectible_C_On_Item_Collected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Removed
	 */
	struct APhotoPassCollectible_C_On_Item_Removed_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PhotoPassCollectible.PhotoPassCollectible_C.ExecuteUbergraph_PhotoPassCollectible
	 */
	struct APhotoPassCollectible_C_ExecuteUbergraph_PhotoPassCollectible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
