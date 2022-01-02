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

// Function DoorLockSystem.DoorLockSystem_C.GetPowerDrainRate
struct ADoorLockSystem_C_GetPowerDrainRate_Params
{
	float                                              DrainRate;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorLockSystem.DoorLockSystem_C.GetRemainingLockedTime
struct ADoorLockSystem_C_GetRemainingLockedTime_Params
{
	float                                              RemainingTime;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorLockSystem.DoorLockSystem_C.CanActivate
struct ADoorLockSystem_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorLockSystem.DoorLockSystem_C.ActivateObject
struct ADoorLockSystem_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorLockSystem.DoorLockSystem_C.On Unlock Timer Up
struct ADoorLockSystem_C_On_Unlock_Timer_Up_Params
{
};

// Function DoorLockSystem.DoorLockSystem_C.PerformPowerTasks
struct ADoorLockSystem_C_PerformPowerTasks_Params
{
	class ASecurityOfficeManager_C*                    OfficeManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorLockSystem.DoorLockSystem_C.ExecuteUbergraph_DoorLockSystem
struct ADoorLockSystem_C_ExecuteUbergraph_DoorLockSystem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
