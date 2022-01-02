#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.CheckIfInUse
struct UWI_ButtonRemapping_C_CheckIfInUse_Params
{
	struct FKey                                        KeyToCheck;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusReceived
struct UWI_ButtonRemapping_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.SetOptionsControlsUI
struct UWI_ButtonRemapping_C_SetOptionsControlsUI_Params
{
	class UOptions_ControlsUI_C*                       ControlsUI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.Brush Style
struct UWI_ButtonRemapping_C_Brush_Style_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIcon
struct UWI_ButtonRemapping_C_UpdateIcon_Params
{
	bool                                               Gamepad;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key1;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        NewKey;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.Get_Key
struct UWI_ButtonRemapping_C_Get_Key_Params
{
	class URichTextBlock*                              RichText_Key;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
struct UWI_ButtonRemapping_C_BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.PreConstruct
struct UWI_ButtonRemapping_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIconsFromSaved_BasedOnController
struct UWI_ButtonRemapping_C_UpdateIconsFromSaved_BasedOnController_Params
{
	bool                                               bIsUsingGamepad;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.Tick
struct UWI_ButtonRemapping_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
struct UWI_ButtonRemapping_C_BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.ResetToDefaultKeys
struct UWI_ButtonRemapping_C_ResetToDefaultKeys_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UWI_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature
struct UWI_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusLost
struct UWI_ButtonRemapping_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.Revert_ChangesNotSaved
struct UWI_ButtonRemapping_C_Revert_ChangesNotSaved_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.SaveMappingsToInstance
struct UWI_ButtonRemapping_C_SaveMappingsToInstance_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.ForceHideImage
struct UWI_ButtonRemapping_C_ForceHideImage_Params
{
	bool                                               HideKey1;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateFnafInstanceMappings
struct UWI_ButtonRemapping_C_UpdateFnafInstanceMappings_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.RemoveSpecificBindings
struct UWI_ButtonRemapping_C_RemoveSpecificBindings_Params
{
	struct FKey                                        KeyToRemove;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.ExecuteUbergraph_WI_ButtonRemapping
struct UWI_ButtonRemapping_C_ExecuteUbergraph_WI_ButtonRemapping_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnHovered__DelegateSignature
struct UWI_ButtonRemapping_C_OnHovered__DelegateSignature_Params
{
};

// Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnClicked__DelegateSignature
struct UWI_ButtonRemapping_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
