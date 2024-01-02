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
	 * Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_TimeAsText
	 */
	struct UBackstage_VannyUI_ForScreen_C_Get_TimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_VannyTimer
	 */
	struct UBackstage_VannyUI_ForScreen_C_Get_VannyTimer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
