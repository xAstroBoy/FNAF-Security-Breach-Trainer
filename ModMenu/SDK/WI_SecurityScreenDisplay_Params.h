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
	 * Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.UpdateWidget
	 */
	struct UWI_SecurityScreenDisplay_C_UpdateWidget_Params
	{	};

	/**
	 * Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.PreConstruct
	 */
	struct UWI_SecurityScreenDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.ExecuteUbergraph_WI_SecurityScreenDisplay
	 */
	struct UWI_SecurityScreenDisplay_C_ExecuteUbergraph_WI_SecurityScreenDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
