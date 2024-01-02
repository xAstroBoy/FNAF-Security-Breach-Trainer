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
	 * Function WI_GenericHeader.WI_GenericHeader_C.OnFocusReceived
	 */
	struct UWI_GenericHeader_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderTextColor
	 */
	struct UWI_GenericHeader_C_GetHeaderTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.GetColorAndOpacity_2
	 */
	struct UWI_GenericHeader_C_GetColorAndOpacity_2_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderBackground
	 */
	struct UWI_GenericHeader_C_GetHeaderBackground_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.GetNewTexture
	 */
	struct UWI_GenericHeader_C_GetNewTexture_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.UpdateData
	 */
	struct UWI_GenericHeader_C_UpdateData_Params
	{	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWI_GenericHeader_C_BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct
	 */
	struct UWI_GenericHeader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader
	 */
	struct UWI_GenericHeader_C_ExecuteUbergraph_WI_GenericHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UU07[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.HeaderClicked__DelegateSignature
	 */
	struct UWI_GenericHeader_C_HeaderClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
