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
	 * Function PauseUI.PauseUI_C.GetFocusButton
	 */
	struct UPauseUI_C_GetFocusButton_Params
	{
	public:
		class UButton*                                             Button;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InuputNext
	 */
	struct UPauseUI_C_InuputNext_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputPrevious
	 */
	struct UPauseUI_C_InputPrevious_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputClose
	 */
	struct UPauseUI_C_InputClose_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputAccept
	 */
	struct UPauseUI_C_InputAccept_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputPrimary
	 */
	struct UPauseUI_C_InputPrimary_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputSecondary
	 */
	struct UPauseUI_C_InputSecondary_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputTertiary
	 */
	struct UPauseUI_C_InputTertiary_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputMoveAxis
	 */
	struct UPauseUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputLookAxis
	 */
	struct UPauseUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputOptionAxis
	 */
	struct UPauseUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputOpen
	 */
	struct UPauseUI_C_InputOpen_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.InputZoom
	 */
	struct UPauseUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputCycle
	 */
	struct UPauseUI_C_InputCycle_Params
	{
	public:
		int                                                        Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputDpadDirection
	 */
	struct UPauseUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.Reset
	 */
	struct UPauseUI_C_Reset_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.Tick
	 */
	struct UPauseUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.PreConstruct
	 */
	struct UPauseUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PauseUI.PauseUI_C.InputBack
	 */
	struct UPauseUI_C_InputBack_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.OptionsBackButton
	 */
	struct UPauseUI_C_OptionsBackButton_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.AcceptTextVisibility
	 */
	struct UPauseUI_C_AcceptTextVisibility_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.PlayerClickedQuit
	 */
	struct UPauseUI_C_PlayerClickedQuit_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UPauseUI_C_BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PauseUI.PauseUI_C.ExecuteUbergraph_PauseUI
	 */
	struct UPauseUI_C_ExecuteUbergraph_PauseUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
