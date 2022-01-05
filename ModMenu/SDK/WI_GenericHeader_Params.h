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
	 * Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct
	 */
	struct UWI_GenericHeader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.UpdateData
	 */
	struct UWI_GenericHeader_C_UpdateData_Params
	{
	};

	/**
	 * Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader
	 */
	struct UWI_GenericHeader_C_ExecuteUbergraph_WI_GenericHeader_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
