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

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPowerForAudio
struct ABP_PowerMeter_Door_C_SetDoorPowerForAudio_Params
{
	float                                              Power;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialize;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.RoundToHundreths
struct ABP_PowerMeter_Door_C_RoundToHundreths_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoundedValue;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.Adjust Power To Input Amount
struct ABP_PowerMeter_Door_C_Adjust_Power_To_Input_Amount_Params
{
	float                                              DesiredPowerLevel;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FastAdjustment;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPower
struct ABP_PowerMeter_Door_C_SetDoorPower_Params
{
	float                                              Power;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveTick
struct ABP_PowerMeter_Door_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveBeginPlay
struct ABP_PowerMeter_Door_C_ReceiveBeginPlay_Params
{
};

// Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ExecuteUbergraph_BP_PowerMeter_Door
struct ABP_PowerMeter_Door_C_ExecuteUbergraph_BP_PowerMeter_Door_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
