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

// Function DebugTaskUI.DebugTaskUI_C.CompleteTask
struct UDebugTaskUI_C_CompleteTask_Params
{
};

// Function DebugTaskUI.DebugTaskUI_C.AwardTaskItems
struct UDebugTaskUI_C_AwardTaskItems_Params
{
};

// Function DebugTaskUI.DebugTaskUI_C.PreConstruct
struct UDebugTaskUI_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugTaskUI.DebugTaskUI_C.BndEvt__TaskCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugTaskUI_C_BndEvt__TaskCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugTaskUI.DebugTaskUI_C.Set Checked
struct UDebugTaskUI_C_Set_Checked_Params
{
	bool                                               IsChecked;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugTaskUI.DebugTaskUI_C.ExecuteUbergraph_DebugTaskUI
struct UDebugTaskUI_C_ExecuteUbergraph_DebugTaskUI_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugTaskUI.DebugTaskUI_C.OnTaskChecked__DelegateSignature
struct UDebugTaskUI_C_OnTaskChecked__DelegateSignature_Params
{
	class UDebugTaskUI_C*                              Task;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChecked;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
