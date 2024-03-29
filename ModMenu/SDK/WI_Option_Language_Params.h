﻿#pragma once

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
	 * Function WI_Option_Language.WI_Option_Language_C.GetCultureFromPlayerSettingsSaveSlot
	 */
	struct UWI_Option_Language_C_GetCultureFromPlayerSettingsSaveSlot_Params
	{
	public:
		ELocalizationCulture                                       CultureFromSave;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KOB3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.SetupColumns
	 */
	struct UWI_Option_Language_C_SetupColumns_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.SetupLanguageDropdownMenu
	 */
	struct UWI_Option_Language_C_SetupLanguageDropdownMenu_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.PreConstruct
	 */
	struct UWI_Option_Language_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWI_Option_Language_C_BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature
	 */
	struct UWI_Option_Language_C_BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.ResetLanguage
	 */
	struct UWI_Option_Language_C_ResetLanguage_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.OnAddedToFocusPath
	 */
	struct UWI_Option_Language_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.OnRemovedFromFocusPath
	 */
	struct UWI_Option_Language_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.ResetToDefault
	 */
	struct UWI_Option_Language_C_ResetToDefault_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.ForceLanguageUpdate
	 */
	struct UWI_Option_Language_C_ForceLanguageUpdate_Params
	{	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.ExecuteUbergraph_WI_Option_Language
	 */
	struct UWI_Option_Language_C_ExecuteUbergraph_WI_Option_Language_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Option_Language.WI_Option_Language_C.ArrowKeyPressed__DelegateSignature
	 */
	struct UWI_Option_Language_C_ArrowKeyPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
