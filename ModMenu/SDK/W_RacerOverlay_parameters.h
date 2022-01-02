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

// Function W_RacerOverlay.W_RacerOverlay_C.GetCanMove
struct UW_RacerOverlay_C_GetCanMove_Params
{
	bool                                               CanMove;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RacerOverlay.W_RacerOverlay_C.GetLastTime
struct UW_RacerOverlay_C_GetLastTime_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_RacerOverlay.W_RacerOverlay_C.GetBestTime
struct UW_RacerOverlay_C_GetBestTime_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_RacerOverlay.W_RacerOverlay_C.GetLapTime
struct UW_RacerOverlay_C_GetLapTime_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_RacerOverlay.W_RacerOverlay_C.GetLap
struct UW_RacerOverlay_C_GetLap_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_RacerOverlay.W_RacerOverlay_C.GetPosition
struct UW_RacerOverlay_C_GetPosition_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_RacerOverlay.W_RacerOverlay_C.CanMove
struct UW_RacerOverlay_C_CanMove_Params
{
	bool                                               New_Can_Move;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RacerOverlay.W_RacerOverlay_C.StartRaceCountdown
struct UW_RacerOverlay_C_StartRaceCountdown_Params
{
	float                                              TimeTillStart;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RacerOverlay.W_RacerOverlay_C.StartRace
struct UW_RacerOverlay_C_StartRace_Params
{
};

// Function W_RacerOverlay.W_RacerOverlay_C.GameEnd
struct UW_RacerOverlay_C_GameEnd_Params
{
};

// Function W_RacerOverlay.W_RacerOverlay_C.Construct
struct UW_RacerOverlay_C_Construct_Params
{
};

// Function W_RacerOverlay.W_RacerOverlay_C.Tick
struct UW_RacerOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RacerOverlay.W_RacerOverlay_C.EndRace
struct UW_RacerOverlay_C_EndRace_Params
{
};

// Function W_RacerOverlay.W_RacerOverlay_C.ExecuteUbergraph_W_RacerOverlay
struct UW_RacerOverlay_C_ExecuteUbergraph_W_RacerOverlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
