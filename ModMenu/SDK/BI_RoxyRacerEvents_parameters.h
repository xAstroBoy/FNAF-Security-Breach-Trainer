﻿#pragma once

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

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GetCanMove
struct UBI_RoxyRacerEvents_C_GetCanMove_Params
{
	bool                                               CanMove;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GameEnd
struct UBI_RoxyRacerEvents_C_GameEnd_Params
{
};

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.EndRace
struct UBI_RoxyRacerEvents_C_EndRace_Params
{
};

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRace
struct UBI_RoxyRacerEvents_C_StartRace_Params
{
};

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRaceCountdown
struct UBI_RoxyRacerEvents_C_StartRaceCountdown_Params
{
	float                                              TimeTillStart;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.CanMove
struct UBI_RoxyRacerEvents_C_CanMove_Params
{
	bool                                               New_Can_Move;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
