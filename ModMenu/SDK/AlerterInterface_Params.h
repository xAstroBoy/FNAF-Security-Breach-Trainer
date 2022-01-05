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
	 * Function AlerterInterface.AlerterInterface_C.SetAlertInfo
	 */
	struct UAlerterInterface_C_SetAlertInfo_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int                                                        NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.GetAlertInfo
	 */
	struct UAlerterInterface_C_GetAlertInfo_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		int                                                        NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	struct UAlerterInterface_C_Stop_Warning_Params
	{
	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Start Warning
	 */
	struct UAlerterInterface_C_Start_Warning_Params
	{
	public:
		int                                                        WarningCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Stop Alert
	 */
	struct UAlerterInterface_C_Stop_Alert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AlerterInterface.AlerterInterface_C.Start Alert
	 */
	struct UAlerterInterface_C_Start_Alert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
