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

// Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent
struct APowerStationManager_C_GetPowerStationEvent_Params
{
};

// Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation
struct APowerStationManager_C_IsPlayerInPowerStation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PowerStationManager.PowerStationManager_C.GetPowerStationID
struct APowerStationManager_C_GetPowerStationID_Params
{
	class APowerStation_Actor_C*                       PowerStation;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerStationID;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationManager.PowerStationManager_C.GetPowerStationByID
struct APowerStationManager_C_GetPowerStationByID_Params
{
	int                                                PowerStationID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APowerStation_Actor_C*                       PowerStation;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationManager.PowerStationManager_C.Finish Power Station Event
struct APowerStationManager_C_Finish_Power_Station_Event_Params
{
};

// Function PowerStationManager.PowerStationManager_C.Power Station Entered
struct APowerStationManager_C_Power_Station_Entered_Params
{
	class APowerStation_Actor_C*                       PowerStation;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager
struct APowerStationManager_C_ExecuteUbergraph_PowerStationManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature
struct APowerStationManager_C_OnPowerStationEntered__DelegateSignature_Params
{
	class APowerStation_Actor_C*                       PowerStation;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerStationID;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
