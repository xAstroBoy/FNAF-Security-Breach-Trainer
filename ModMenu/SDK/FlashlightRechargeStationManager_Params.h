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
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.SetupAllRechargeStations
	 */
	struct AFlashlightRechargeStationManager_C_SetupAllRechargeStations_Params
	{	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetChargePercentage
	 */
	struct AFlashlightRechargeStationManager_C_GetChargePercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetCurrentStation
	 */
	struct AFlashlightRechargeStationManager_C_GetCurrentStation_Params
	{
	public:
		class AFlashlightRechargeStation_C*                        Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightCollected
	 */
	struct AFlashlightRechargeStationManager_C_OnFlashlightCollected_Params
	{	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetStationID
	 */
	struct AFlashlightRechargeStationManager_C_GetStationID_Params
	{
	public:
		class AFlashlightRechargeStation_C*                        Input;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightDeposited
	 */
	struct AFlashlightRechargeStationManager_C_OnFlashlightDeposited_Params
	{
	public:
		class AFlashlightRechargeStation_C*                        RechargeStation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnRechargeStationLoaded
	 */
	struct AFlashlightRechargeStationManager_C_OnRechargeStationLoaded_Params
	{
	public:
		class AFlashlightRechargeStation_C*                        RechargeStation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointSave
	 */
	struct AFlashlightRechargeStationManager_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnStoreGameData
	 */
	struct AFlashlightRechargeStationManager_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostGameLoad
	 */
	struct AFlashlightRechargeStationManager_C_PostGameLoad_Params
	{	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostSaveGame
	 */
	struct AFlashlightRechargeStationManager_C_PostSaveGame_Params
	{	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ReceiveTick
	 */
	struct AFlashlightRechargeStationManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointLoad
	 */
	struct AFlashlightRechargeStationManager_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnGameDataLoaded
	 */
	struct AFlashlightRechargeStationManager_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ExecuteUbergraph_FlashlightRechargeStationManager
	 */
	struct AFlashlightRechargeStationManager_C_ExecuteUbergraph_FlashlightRechargeStationManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
