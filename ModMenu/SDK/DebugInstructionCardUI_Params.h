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
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusReceived
	 */
	struct UDebugInstructionCardUI_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.ShowNewCard
	 */
	struct UDebugInstructionCardUI_C_ShowNewCard_Params
	{
	public:
		class UClass*                                              InstructionCard;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.AddCardButton
	 */
	struct UDebugInstructionCardUI_C_AddCardButton_Params
	{
	public:
		class UUserWidget*                                         InstructionCardWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_InstructionCard_Type                                     InstructionCardType;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSSG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDebugInstructionCardButton_C*                       CreatedButton;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.Construct
	 */
	struct UDebugInstructionCardUI_C_Construct_Params
	{	};

	/**
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusLost
	 */
	struct UDebugInstructionCardUI_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function DebugInstructionCardUI.DebugInstructionCardUI_C.ExecuteUbergraph_DebugInstructionCardUI
	 */
	struct UDebugInstructionCardUI_C_ExecuteUbergraph_DebugInstructionCardUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
