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

// Function TimeTrigger.TimeTrigger_C.Start Timer
struct UTimeTrigger_C_Start_Timer_Params
{
	int                                                Current_Time_Hour;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Current_Time_Minute;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TImer_End_Hour;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Timer_End_Minute;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Timer_End_Event;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// Function TimeTrigger.TimeTrigger_C.Handle Minute Check
struct UTimeTrigger_C_Handle_Minute_Check_Params
{
	int                                                CurrentMinute;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TimeTrigger.TimeTrigger_C.ReceiveBeginPlay
struct UTimeTrigger_C_ReceiveBeginPlay_Params
{
};

// Function TimeTrigger.TimeTrigger_C.On Timer Started
struct UTimeTrigger_C_On_Timer_Started_Params
{
};

// Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed
struct UTimeTrigger_C_On_Game_Clock_TIme_Has_Changed_Params
{
	int                                                Hour;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Minute;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TimeTrigger.TimeTrigger_C.On Clock State Changed
struct UTimeTrigger_C_On_Clock_State_Changed_Params
{
	bool                                               bIsRunning;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TimeTrigger.TimeTrigger_C.ExecuteUbergraph_TimeTrigger
struct UTimeTrigger_C_ExecuteUbergraph_TimeTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TimeTrigger.TimeTrigger_C.TimerInvoked__DelegateSignature
struct UTimeTrigger_C_TimerInvoked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
