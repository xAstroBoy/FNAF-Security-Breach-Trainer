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
	 * Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Percentage
	 */
	struct USecurityOfficePowerUI_C_Update_Percentage_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Time
	 */
	struct USecurityOfficePowerUI_C_Update_Time_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.ExecuteUbergraph_SecurityOfficePowerUI
	 */
	struct USecurityOfficePowerUI_C_ExecuteUbergraph_SecurityOfficePowerUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
