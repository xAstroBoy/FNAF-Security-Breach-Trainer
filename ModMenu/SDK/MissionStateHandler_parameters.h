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

// Function MissionStateHandler.MissionStateHandler_C.HasMetConditions
struct UMissionStateHandler_C_HasMetConditions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MissionStateHandler.MissionStateHandler_C.On Mission Completed
struct UMissionStateHandler_C_On_Mission_Completed_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMissionState                           MissionState;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MissionStateHandler.MissionStateHandler_C.On Mission Updated
struct UMissionStateHandler_C_On_Mission_Updated_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMissionState                           MissionState;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MissionStateHandler.MissionStateHandler_C.ReceiveBeginPlay
struct UMissionStateHandler_C_ReceiveBeginPlay_Params
{
};

// Function MissionStateHandler.MissionStateHandler_C.ExecuteUbergraph_MissionStateHandler
struct UMissionStateHandler_C_ExecuteUbergraph_MissionStateHandler_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionStateHandler.MissionStateHandler_C.OnMissionStateAleadyHit__DelegateSignature
struct UMissionStateHandler_C_OnMissionStateAleadyHit__DelegateSignature_Params
{
};

// Function MissionStateHandler.MissionStateHandler_C.OnMissionStateHit__DelegateSignature
struct UMissionStateHandler_C_OnMissionStateHit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif