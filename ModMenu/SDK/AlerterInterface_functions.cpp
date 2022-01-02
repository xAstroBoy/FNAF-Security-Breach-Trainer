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
//		Name   -> Function AlerterInterface.AlerterInterface_C.SetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlerterInterface_C::SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.SetAlertInfo");

	UAlerterInterface_C_SetAlertInfo_Params params {};
	params.TypesToAlert = TypesToAlert;
	params.NumberOfAlerts = NumberOfAlerts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.GetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, OutParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlerterInterface_C::GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int* NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.GetAlertInfo");

	UAlerterInterface_C_GetAlertInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TypesToAlert != nullptr)
		*TypesToAlert = params.TypesToAlert;
	if (NumberOfAlerts != nullptr)
		*NumberOfAlerts = params.NumberOfAlerts;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.IsWarningFinished
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAlerterInterface_C::IsWarningFinished(bool* Finished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.IsWarningFinished");

	UAlerterInterface_C_IsWarningFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.Stop Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAlerterInterface_C::Stop_Warning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.Stop Warning");

	UAlerterInterface_C_Stop_Warning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.Start Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlerterInterface_C::Start_Warning(int WarningCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.Start Warning");

	UAlerterInterface_C_Start_Warning_Params params {};
	params.WarningCount = WarningCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.Stop Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlerterInterface_C::Stop_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.Stop Alert");

	UAlerterInterface_C_Stop_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlerterInterface.AlerterInterface_C.Start Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlerterInterface_C::Start_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlerterInterface.AlerterInterface_C.Start Alert");

	UAlerterInterface_C_Start_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
