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
	 * Function UI_TextAndIcons.UI_TextAndIcons_C.UpdateIcons
	 */
	struct UUI_TextAndIcons_C_UpdateIcons_Params
	{	};

	/**
	 * Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts
	 */
	struct UUI_TextAndIcons_C_SetFonts_Params
	{	};

	/**
	 * Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields
	 */
	struct UUI_TextAndIcons_C_SetTextFields_Params
	{
	public:
		class FText                                                LeftSide;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                ActionMappingName;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Middle;                                                  // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                ActionMappingName2;                                      // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RightSide;                                               // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct
	 */
	struct UUI_TextAndIcons_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons
	 */
	struct UUI_TextAndIcons_C_ExecuteUbergraph_UI_TextAndIcons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
