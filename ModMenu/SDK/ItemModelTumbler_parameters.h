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

// Function ItemModelTumbler.ItemModelTumbler_C.RotateItem
struct AItemModelTumbler_C_RotateItem_Params
{
	struct FRotator                                    Rotation_Delta;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Local_Space;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemModelTumbler.ItemModelTumbler_C.SetIsVisible
struct AItemModelTumbler_C_SetIsVisible_Params
{
	bool                                               Is_Visible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemModelTumbler.ItemModelTumbler_C.FocusView
struct AItemModelTumbler_C_FocusView_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.SetMesh
struct AItemModelTumbler_C_SetMesh_Params
{
	class UStaticMesh*                                 New_Model;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct AItemModelTumbler_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
struct AItemModelTumbler_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InuputNext
struct AItemModelTumbler_C_InuputNext_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputPrevious
struct AItemModelTumbler_C_InputPrevious_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputClose
struct AItemModelTumbler_C_InputClose_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputBack
struct AItemModelTumbler_C_InputBack_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputAccept
struct AItemModelTumbler_C_InputAccept_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputPrimary
struct AItemModelTumbler_C_InputPrimary_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputSecondary
struct AItemModelTumbler_C_InputSecondary_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputTertiary
struct AItemModelTumbler_C_InputTertiary_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputMoveAxis
struct AItemModelTumbler_C_InputMoveAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputLookAxis
struct AItemModelTumbler_C_InputLookAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputOptionAxis
struct AItemModelTumbler_C_InputOptionAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputOpen
struct AItemModelTumbler_C_InputOpen_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputZoom
struct AItemModelTumbler_C_InputZoom_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputCycle
struct AItemModelTumbler_C_InputCycle_Params
{
	int                                                Increment;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InputDpadDirection
struct AItemModelTumbler_C_InputDpadDirection_Params
{
	struct FVector2D                                   Direction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.Reset
struct AItemModelTumbler_C_Reset_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.ReceiveBeginPlay
struct AItemModelTumbler_C_ReceiveBeginPlay_Params
{
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_14
struct AItemModelTumbler_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_14_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_15
struct AItemModelTumbler_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_15_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_16
struct AItemModelTumbler_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_16_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_17
struct AItemModelTumbler_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_17_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemModelTumbler.ItemModelTumbler_C.ExecuteUbergraph_ItemModelTumbler
struct AItemModelTumbler_C_ExecuteUbergraph_ItemModelTumbler_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
