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
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.RemoveAxisMapping
	 */
	struct UWI_DLC_ButtonRemapping_C_RemoveAxisMapping_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.RebindAxis
	 */
	struct UWI_DLC_ButtonRemapping_C_RebindAxis_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                KeyName;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.CheckIfInUse
	 */
	struct UWI_DLC_ButtonRemapping_C_CheckIfInUse_Params
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       KeyInUse;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Q9J[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ActionNameInUse;                                         // 0x0024(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.OnFocusReceived
	 */
	struct UWI_DLC_ButtonRemapping_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.Set DLC Options
	 */
	struct UWI_DLC_ButtonRemapping_C_SetDLCOptions_Params
	{
	public:
		class UOptions_DLC_C*                                      DlcControlsUI;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.Brush Style
	 */
	struct UWI_DLC_ButtonRemapping_C_BrushStyle_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.UpdateIcon
	 */
	struct UWI_DLC_ButtonRemapping_C_UpdateIcon_Params
	{
	public:
		bool                                                       Gamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Key1;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MS15[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.Get_Key
	 */
	struct UWI_DLC_ButtonRemapping_C_Get_Key_Params
	{
	public:
		class URichTextBlock*                                      RichText_Key;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.PreConstruct
	 */
	struct UWI_DLC_ButtonRemapping_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.UpdateIconsFromSaved_BasedOnController
	 */
	struct UWI_DLC_ButtonRemapping_C_UpdateIconsFromSaved_BasedOnController_Params
	{
	public:
		bool                                                       bIsUsingGamepad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.Tick
	 */
	struct UWI_DLC_ButtonRemapping_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.ResetToDefaultKeys
	 */
	struct UWI_DLC_ButtonRemapping_C_ResetToDefaultKeys_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.OnFocusLost
	 */
	struct UWI_DLC_ButtonRemapping_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.Revert_ChangesNotSaved
	 */
	struct UWI_DLC_ButtonRemapping_C_Revert_ChangesNotSaved_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.SaveMappingsToInstance
	 */
	struct UWI_DLC_ButtonRemapping_C_SaveMappingsToInstance_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.ForceHideImage
	 */
	struct UWI_DLC_ButtonRemapping_C_ForceHideImage_Params
	{
	public:
		bool                                                       HideKey1;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.UpdateFnafInstanceMappings
	 */
	struct UWI_DLC_ButtonRemapping_C_UpdateFnafInstanceMappings_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.RemoveSpecificBindings
	 */
	struct UWI_DLC_ButtonRemapping_C_RemoveSpecificBindings_Params
	{
	public:
		struct FKey                                                KeyToRemove;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.ReapplyPreviousMappings
	 */
	struct UWI_DLC_ButtonRemapping_C_ReapplyPreviousMappings_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.RebindingConfirmed
	 */
	struct UWI_DLC_ButtonRemapping_C_RebindingConfirmed_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.ExecuteUbergraph_WI_DLC_ButtonRemapping
	 */
	struct UWI_DLC_ButtonRemapping_C_ExecuteUbergraph_WI_DLC_ButtonRemapping_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.OnHovered__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WI_DLC_ButtonRemapping.WI_DLC_ButtonRemapping_C.OnClicked__DelegateSignature
	 */
	struct UWI_DLC_ButtonRemapping_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
