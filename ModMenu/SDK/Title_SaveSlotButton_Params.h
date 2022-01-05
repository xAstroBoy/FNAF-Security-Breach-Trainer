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
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnFocusReceived
	 */
	struct UTitle_SaveSlotButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.Construct
	 */
	struct UTitle_SaveSlotButton_C_Construct_Params
	{
	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.Tick
	 */
	struct UTitle_SaveSlotButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.TriggerSave
	 */
	struct UTitle_SaveSlotButton_C_TriggerSave_Params
	{
	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.SetDisplayedData
	 */
	struct UTitle_SaveSlotButton_C_SetDisplayedData_Params
	{
	public:
		class FString                                              SaveFileName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int                                                        GameHour;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           DateTimeWhenSaved;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int                                                        GameplayTime_Sec;                                        // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.Set Slot Save Data
	 */
	struct UTitle_SaveSlotButton_C_Set_Slot_Save_Data_Params
	{
	public:
		class UFNAFSaveData*                                       SaveData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.ExecuteUbergraph_Title_SaveSlotButton
	 */
	struct UTitle_SaveSlotButton_C_ExecuteUbergraph_Title_SaveSlotButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnHovered__DelegateSignature
	 */
	struct UTitle_SaveSlotButton_C_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnClicked__DelegateSignature
	 */
	struct UTitle_SaveSlotButton_C_OnClicked__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
