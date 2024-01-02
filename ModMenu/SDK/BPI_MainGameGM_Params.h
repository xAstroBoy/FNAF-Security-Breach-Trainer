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
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetNavigationData
	 */
	struct UBPI_MainGameGM_C_GetNavigationData_Params
	{
	public:
		class ANavigationData*                                     NavigationData;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMPowerStationManager
	 */
	struct UBPI_MainGameGM_C_GetGMPowerStationManager_Params
	{
	public:
		class APowerStationManager_C*                              PowerStationManager;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMTextFormatter
	 */
	struct UBPI_MainGameGM_C_GetGMTextFormatter_Params
	{
	public:
		class UMissionTextFormatterFactory_C*                      MissionTextFormatter;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetPlayerHUD
	 */
	struct UBPI_MainGameGM_C_GetPlayerHUD_Params
	{
	public:
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.SetPlayerHUD
	 */
	struct UBPI_MainGameGM_C_SetPlayerHUD_Params
	{
	public:
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetGregoryRef
	 */
	struct UBPI_MainGameGM_C_GetGregoryRef_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.SetGregoryRef
	 */
	struct UBPI_MainGameGM_C_SetGregoryRef_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.OnGMCallFreddy
	 */
	struct UBPI_MainGameGM_C_OnGMCallFreddy_Params
	{	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.HasGMLoaded
	 */
	struct UBPI_MainGameGM_C_HasGMLoaded_Params
	{
	public:
		bool                                                       HasLoaded;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.SetFreddyRef
	 */
	struct UBPI_MainGameGM_C_SetFreddyRef_Params
	{
	public:
		class AFreddy_C*                                           Freddy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetFreddyRef
	 */
	struct UBPI_MainGameGM_C_GetFreddyRef_Params
	{
	public:
		class AFreddy_C*                                           Freddy;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager
	 */
	struct UBPI_MainGameGM_C_GetFlashlightManager_Params
	{
	public:
		class AFlashlightRechargeStationManager_C*                 FlashlightManager;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
