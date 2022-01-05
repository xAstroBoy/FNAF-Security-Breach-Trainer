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
	 * Function ExitPopUp.ExitPopUp_C.OnPreviewKeyDown
	 */
	struct UExitPopUp_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.PreConstruct
	 */
	struct UExitPopUp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.Construct
	 */
	struct UExitPopUp_C_Construct_Params
	{
	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UExitPopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UExitPopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.UserBackedOut
	 */
	struct UExitPopUp_C_UserBackedOut_Params
	{
	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.ExecuteUbergraph_ExitPopUp
	 */
	struct UExitPopUp_C_ExecuteUbergraph_ExitPopUp_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ExitPopUp.ExitPopUp_C.Exit_BackedOut__DelegateSignature
	 */
	struct UExitPopUp_C_Exit_BackedOut__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
