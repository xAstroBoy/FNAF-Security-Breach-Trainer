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
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Power Display
	 */
	struct ASecurityOfficePowerMeter_C_Update_Power_Display_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Remaining Time
	 */
	struct ASecurityOfficePowerMeter_C_Update_Remaining_Time_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveTick
	 */
	struct ASecurityOfficePowerMeter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveBeginPlay
	 */
	struct ASecurityOfficePowerMeter_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.OnGameStart
	 */
	struct ASecurityOfficePowerMeter_C_OnGameStart_Params
	{
	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.EndGame
	 */
	struct ASecurityOfficePowerMeter_C_EndGame_Params
	{
	public:
		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>           EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ExecuteUbergraph_SecurityOfficePowerMeter
	 */
	struct ASecurityOfficePowerMeter_C_ExecuteUbergraph_SecurityOfficePowerMeter_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
