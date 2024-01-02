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
	 * Function AlerterInterface.AlerterInterface_C.GetAlertInfoComplex
	 */
	struct UAlerterInterface_C_GetAlertInfoComplex_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.SetAlertInfoComplex
	 */
	struct UAlerterInterface_C_SetAlertInfoComplex_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.SetAlertInfo
	 */
	struct UAlerterInterface_C_SetAlertInfo_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.GetAlertInfo
	 */
	struct UAlerterInterface_C_GetAlertInfo_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.IsWarningFinished
	 */
	struct UAlerterInterface_C_IsWarningFinished_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Stop Warning
	 */
	struct UAlerterInterface_C_StopWarning_Params
	{	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Start Warning
	 */
	struct UAlerterInterface_C_StartWarning_Params
	{
	public:
		int32_t                                                    WarningCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Stop Alert
	 */
	struct UAlerterInterface_C_StopAlert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Start Alert
	 */
	struct UAlerterInterface_C_StartAlert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
