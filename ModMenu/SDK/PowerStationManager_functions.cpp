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
//		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
void APowerStationManager_C::GetPowerStationEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent");

	APowerStationManager_C_GetPowerStationEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APowerStationManager_C::IsPlayerInPowerStation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation");

	APowerStationManager_C_IsPlayerInPowerStation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationID
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PowerStationID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerStationManager_C::GetPowerStationID(class APowerStation_Actor_C* PowerStation, int* PowerStationID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationID");

	APowerStationManager_C_GetPowerStationID_Params params {};
	params.PowerStation = PowerStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PowerStationID != nullptr)
		*PowerStationID = params.PowerStationID;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationByID
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                PowerStationID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APowerStation_Actor_C*                       PowerStation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerStationManager_C::GetPowerStationByID(int PowerStationID, class APowerStation_Actor_C** PowerStation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationByID");

	APowerStationManager_C_GetPowerStationByID_Params params {};
	params.PowerStationID = PowerStationID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PowerStation != nullptr)
		*PowerStation = params.PowerStation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.Finish Power Station Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APowerStationManager_C::Finish_Power_Station_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.Finish Power Station Event");

	APowerStationManager_C_Finish_Power_Station_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.Power Station Entered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerStationManager_C::Power_Station_Entered(class APowerStation_Actor_C* PowerStation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.Power Station Entered");

	APowerStationManager_C_Power_Station_Entered_Params params {};
	params.PowerStation = PowerStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerStationManager_C::ExecuteUbergraph_PowerStationManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager");

	APowerStationManager_C_ExecuteUbergraph_PowerStationManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PowerStationID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerStationManager_C::OnPowerStationEntered__DelegateSignature(class APowerStation_Actor_C* PowerStation, int PowerStationID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature");

	APowerStationManager_C_OnPowerStationEntered__DelegateSignature_Params params {};
	params.PowerStation = PowerStation;
	params.PowerStationID = PowerStationID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
