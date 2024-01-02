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
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.Edit Popup Lines
	 */
	struct ULoadChapterPopUp_C_EditPopupLines_Params
	{
	public:
		class FText                                                Line1;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Line2;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.UpdateChapterNumber
	 */
	struct ULoadChapterPopUp_C_UpdateChapterNumber_Params
	{	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.PreConstruct
	 */
	struct ULoadChapterPopUp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct ULoadChapterPopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct ULoadChapterPopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.UserBackedOut
	 */
	struct ULoadChapterPopUp_C_UserBackedOut_Params
	{	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.ExecuteUbergraph_LoadChapterPopUp
	 */
	struct ULoadChapterPopUp_C_ExecuteUbergraph_LoadChapterPopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.PlayChapter__DelegateSignature
	 */
	struct ULoadChapterPopUp_C_PlayChapter__DelegateSignature_Params
	{
	public:
		class FName                                                Chapter;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadChapterPopUp.LoadChapterPopUp_C.Exit_BackedOut__DelegateSignature
	 */
	struct ULoadChapterPopUp_C_Exit_BackedOut__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
