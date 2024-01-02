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
	 * Function FlashlightRechargeUI.FlashlightRechargeUI_C.Update Percentage
	 */
	struct UFlashlightRechargeUI_C_UpdatePercentage_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightRechargeUI.FlashlightRechargeUI_C.Reset
	 */
	struct UFlashlightRechargeUI_C_Reset_Params
	{	};

	/**
	 * Function FlashlightRechargeUI.FlashlightRechargeUI_C.ExecuteUbergraph_FlashlightRechargeUI
	 */
	struct UFlashlightRechargeUI_C_ExecuteUbergraph_FlashlightRechargeUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
