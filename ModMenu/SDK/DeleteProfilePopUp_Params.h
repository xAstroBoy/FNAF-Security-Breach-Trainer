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
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.UpdateFileDeletionInformation
	 */
	struct UDeleteProfilePopUp_C_UpdateFileDeletionInformation_Params
	{
	public:
		int32_t                                                    ProfileIndexToDelete;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.PreConstruct
	 */
	struct UDeleteProfilePopUp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UDeleteProfilePopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UDeleteProfilePopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.UserBackedOut
	 */
	struct UDeleteProfilePopUp_C_UserBackedOut_Params
	{	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.OnAddedToFocusPath
	 */
	struct UDeleteProfilePopUp_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.Construct
	 */
	struct UDeleteProfilePopUp_C_Construct_Params
	{	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.ExecuteUbergraph_DeleteProfilePopUp
	 */
	struct UDeleteProfilePopUp_C_ExecuteUbergraph_DeleteProfilePopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.ProfileDeleted__DelegateSignature
	 */
	struct UDeleteProfilePopUp_C_ProfileDeleted__DelegateSignature_Params
	{	};

	/**
	 * Function DeleteProfilePopUp.DeleteProfilePopUp_C.Exit_BackedOut__DelegateSignature
	 */
	struct UDeleteProfilePopUp_C_Exit_BackedOut__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
