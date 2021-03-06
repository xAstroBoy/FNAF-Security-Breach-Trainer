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
	 * Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationInstruction
	 */
	struct UBPFL_Kitchen_C_GetPizzaStationInstruction_Params
	{
	public:
		PizzaStep_EPizzaStep                                       PizzaStep;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationName
	 */
	struct UBPFL_Kitchen_C_GetPizzaStationName_Params
	{
	public:
		PizzaStep_EPizzaStep                                       PizzaStep;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
