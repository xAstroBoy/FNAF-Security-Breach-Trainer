// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.GetPowerDrainRate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DrainRate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::GetPowerDrainRate(float* DrainRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.GetPowerDrainRate");

	ADoorLockSystem_C_GetPowerDrainRate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DrainRate != nullptr)
		*DrainRate = params.DrainRate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.GetRemainingLockedTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::GetRemainingLockedTime(float* RemainingTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.GetRemainingLockedTime");

	ADoorLockSystem_C_GetRemainingLockedTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.CanActivate");

	ADoorLockSystem_C_CanActivate_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.ActivateObject");

	ADoorLockSystem_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.On Unlock Timer Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ADoorLockSystem_C::On_Unlock_Timer_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.On Unlock Timer Up");

	ADoorLockSystem_C_On_Unlock_Timer_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.PerformPowerTasks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASecurityOfficeManager_C*                    OfficeManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::PerformPowerTasks(class ASecurityOfficeManager_C* OfficeManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.PerformPowerTasks");

	ADoorLockSystem_C_PerformPowerTasks_Params params {};
	params.OfficeManager = OfficeManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorLockSystem.DoorLockSystem_C.ExecuteUbergraph_DoorLockSystem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorLockSystem_C::ExecuteUbergraph_DoorLockSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorLockSystem.DoorLockSystem_C.ExecuteUbergraph_DoorLockSystem");

	ADoorLockSystem_C_ExecuteUbergraph_DoorLockSystem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
