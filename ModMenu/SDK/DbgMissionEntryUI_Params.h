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
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.OnPreviewKeyDown
	 */
	struct UDbgMissionEntryUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.BP_OnEntryReleased
	 */
	struct UDbgMissionEntryUI_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.BP_OnItemExpansionChanged
	 */
	struct UDbgMissionEntryUI_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.BP_OnItemSelectionChanged
	 */
	struct UDbgMissionEntryUI_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.OnListItemObjectSet
	 */
	struct UDbgMissionEntryUI_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.On Task Checked
	 */
	struct UDbgMissionEntryUI_C_OnTaskChecked_Params
	{
	public:
		class UDebugTaskUI_C*                                      Task;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsChecked;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DbgMissionEntryUI.DbgMissionEntryUI_C.ExecuteUbergraph_DbgMissionEntryUI
	 */
	struct UDbgMissionEntryUI_C_ExecuteUbergraph_DbgMissionEntryUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
