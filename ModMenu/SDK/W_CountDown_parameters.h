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

// Function W_CountDown.W_CountDown_C.GetCanMove
struct UW_CountDown_C_GetCanMove_Params
{
	bool                                               CanMove;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CountDown.W_CountDown_C.GetText_1
struct UW_CountDown_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_CountDown.W_CountDown_C.CanMove
struct UW_CountDown_C_CanMove_Params
{
	bool                                               New_Can_Move;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CountDown.W_CountDown_C.StartRace
struct UW_CountDown_C_StartRace_Params
{
};

// Function W_CountDown.W_CountDown_C.EndRace
struct UW_CountDown_C_EndRace_Params
{
};

// Function W_CountDown.W_CountDown_C.GameEnd
struct UW_CountDown_C_GameEnd_Params
{
};

// Function W_CountDown.W_CountDown_C.PreConstruct
struct UW_CountDown_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CountDown.W_CountDown_C.Construct
struct UW_CountDown_C_Construct_Params
{
};

// Function W_CountDown.W_CountDown_C.StartRaceCountdown
struct UW_CountDown_C_StartRaceCountdown_Params
{
	float                                              TimeTillStart;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CountDown.W_CountDown_C.PlayGo 
struct UW_CountDown_C_PlayGo__Params
{
};

// Function W_CountDown.W_CountDown_C.Reset
struct UW_CountDown_C_Reset_Params
{
};

// Function W_CountDown.W_CountDown_C.ExecuteUbergraph_W_CountDown
struct UW_CountDown_C_ExecuteUbergraph_W_CountDown_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
