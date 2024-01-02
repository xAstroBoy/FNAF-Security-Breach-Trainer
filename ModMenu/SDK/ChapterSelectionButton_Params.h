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
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.RemoveHighlightIfLocked
	 */
	struct UChapterSelectionButton_C_RemoveHighlightIfLocked_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.OnFocusReceived
	 */
	struct UChapterSelectionButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.ShowCompletionCheckmark
	 */
	struct UChapterSelectionButton_C_ShowCompletionCheckmark_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.ShouldThisButtonBeClickable
	 */
	struct UChapterSelectionButton_C_ShouldThisButtonBeClickable_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.Construct
	 */
	struct UChapterSelectionButton_C_Construct_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChapterSelectionButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.OnAddedToFocusPath
	 */
	struct UChapterSelectionButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.OnRemovedFromFocusPath
	 */
	struct UChapterSelectionButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UChapterSelectionButton_C_BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChapterSelectionButton_C_BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.ExecuteUbergraph_ChapterSelectionButton
	 */
	struct UChapterSelectionButton_C_ExecuteUbergraph_ChapterSelectionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.GetChapterCompletionDetails__DelegateSignature
	 */
	struct UChapterSelectionButton_C_GetChapterCompletionDetails__DelegateSignature_Params
	{
	public:
		int32_t                                                    Chapter;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.OnHovered__DelegateSignature
	 */
	struct UChapterSelectionButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ChapterSelectionButton.ChapterSelectionButton_C.OnClicked__DelegateSignature
	 */
	struct UChapterSelectionButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ChapterName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
