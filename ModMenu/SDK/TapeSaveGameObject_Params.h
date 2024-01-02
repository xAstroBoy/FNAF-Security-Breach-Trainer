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
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed
	 */
	struct UTapeSaveGameObject_C_IncrementTapesPlayed_Params
	{	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone
	 */
	struct UTapeSaveGameObject_C_GetNoOfTapesDone_Params
	{
	public:
		int32_t                                                    NoOfTapesPlayed;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes
	 */
	struct UTapeSaveGameObject_C_GetInventoryTapes_Params
	{
	public:
		TArray<class FName>                                        InInventoryTapes;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll
	 */
	struct UTapeSaveGameObject_C_ClearAll_Params
	{	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying
	 */
	struct UTapeSaveGameObject_C_GetTapesDonePlaying_Params
	{
	public:
		TArray<class FName>                                        TapesDonePlaying;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying
	 */
	struct UTapeSaveGameObject_C_AddTapeDonePlaying_Params
	{
	public:
		class FName                                                TapeDonePlaying;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData
	 */
	struct UTapeSaveGameObject_C_SetCollectedTapesData_Params
	{
	public:
		class FName                                                InventoryItemName;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasBeenCollected;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OTJ1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData
	 */
	struct UTapeSaveGameObject_C_GetCollectedTapesData_Params
	{
	public:
		class FName                                                InventoryItemName;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasBeenCollected;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
