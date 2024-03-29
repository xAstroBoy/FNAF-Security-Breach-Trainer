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
	 * Function CameraIcon.CameraIcon_C.SetCameraDirection
	 */
	struct UCameraIcon_C_SetCameraDirection_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.ChowdaMode
	 */
	struct UCameraIcon_C_ChowdaMode_Params
	{
	public:
		bool                                                       ChowdaMode;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_20TM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CameraIcon.CameraIcon_C.End Alert
	 */
	struct UCameraIcon_C_EndAlert_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.AdjustButton
	 */
	struct UCameraIcon_C_AdjustButton_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCameraIcon_C_BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.DistractionStyle
	 */
	struct UCameraIcon_C_DistractionStyle_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCameraIcon_C_BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.AlertEvent
	 */
	struct UCameraIcon_C_AlertEvent_Params
	{	};

	/**
	 * Function CameraIcon.CameraIcon_C.PreConstruct
	 */
	struct UCameraIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CameraIcon.CameraIcon_C.InitCamera
	 */
	struct UCameraIcon_C_InitCamera_Params
	{
	public:
		class ASecurityCamera*                                     Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraIcon.CameraIcon_C.ExecuteUbergraph_CameraIcon
	 */
	struct UCameraIcon_C_ExecuteUbergraph_CameraIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RRH2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CameraIcon.CameraIcon_C.CameraClicked__DelegateSignature
	 */
	struct UCameraIcon_C_CameraClicked__DelegateSignature_Params
	{
	public:
		class UCameraIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
