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

// Function WI_Messages.WI_Messages_C.GetCurrentMessageList
struct UWI_Messages_C_GetCurrentMessageList_Params
{
};

// Function WI_Messages.WI_Messages_C.Move Menu
struct UWI_Messages_C_Move_Menu_Params
{
	struct FVector2D                                   InVec;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.CheckUnread
struct UWI_Messages_C_CheckUnread_Params
{
	bool                                               unread;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_Messages.WI_Messages_C.ParseReadMessage
struct UWI_Messages_C_ParseReadMessage_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMessageTableStruct                     Data;                                                      // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WI_Messages.WI_Messages_C.Check Read
struct UWI_Messages_C_Check_Read_Params
{
};

// Function WI_Messages.WI_Messages_C.PopulateList
struct UWI_Messages_C_PopulateList_Params
{
};

// Function WI_Messages.WI_Messages_C.MarkAsRead
struct UWI_Messages_C_MarkAsRead_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.ParseNewMessage
struct UWI_Messages_C_ParseNewMessage_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMessageTableStruct                     Data;                                                      // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WI_Messages.WI_Messages_C.InuputNext
struct UWI_Messages_C_InuputNext_Params
{
};

// Function WI_Messages.WI_Messages_C.InputPrevious
struct UWI_Messages_C_InputPrevious_Params
{
};

// Function WI_Messages.WI_Messages_C.InputPrimary
struct UWI_Messages_C_InputPrimary_Params
{
};

// Function WI_Messages.WI_Messages_C.InputSecondary
struct UWI_Messages_C_InputSecondary_Params
{
};

// Function WI_Messages.WI_Messages_C.InputTertiary
struct UWI_Messages_C_InputTertiary_Params
{
};

// Function WI_Messages.WI_Messages_C.InputLookAxis
struct UWI_Messages_C_InputLookAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.InputOpen
struct UWI_Messages_C_InputOpen_Params
{
};

// Function WI_Messages.WI_Messages_C.InputZoom
struct UWI_Messages_C_InputZoom_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.InputCycle
struct UWI_Messages_C_InputCycle_Params
{
	int                                                Increment;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.InputDpadDirection
struct UWI_Messages_C_InputDpadDirection_Params
{
	struct FVector2D                                   Direction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.Reset
struct UWI_Messages_C_Reset_Params
{
};

// Function WI_Messages.WI_Messages_C.Construct
struct UWI_Messages_C_Construct_Params
{
};

// Function WI_Messages.WI_Messages_C.Tick
struct UWI_Messages_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.BindAllEvents
struct UWI_Messages_C_BindAllEvents_Params
{
};

// Function WI_Messages.WI_Messages_C.ObtainMessage
struct UWI_Messages_C_ObtainMessage_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMessageTableStruct                     MessageInfo;                                               // 0x0008(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WI_Messages.WI_Messages_C.InputClose
struct UWI_Messages_C_InputClose_Params
{
};

// Function WI_Messages.WI_Messages_C.InputOptionAxis
struct UWI_Messages_C_InputOptionAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.InputAccept
struct UWI_Messages_C_InputAccept_Params
{
};

// Function WI_Messages.WI_Messages_C.InputMoveAxis
struct UWI_Messages_C_InputMoveAxis_Params
{
	struct FVector2D                                   Axis;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_Messages.WI_Messages_C.InputBack
struct UWI_Messages_C_InputBack_Params
{
};

// Function WI_Messages.WI_Messages_C.ExecuteUbergraph_WI_Messages
struct UWI_Messages_C_ExecuteUbergraph_WI_Messages_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
