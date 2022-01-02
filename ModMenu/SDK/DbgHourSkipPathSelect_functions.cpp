﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.GetSkipRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>        SkipRoute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDbgHourSkipPathSelect_C::GetSkipRoute(int Index, TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>* SkipRoute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.GetSkipRoute");

	UDbgHourSkipPathSelect_C_GetSkipRoute_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkipRoute != nullptr)
		*SkipRoute = params.SkipRoute;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDbgHourSkipPathSelect_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.PreConstruct");

	UDbgHourSkipPathSelect_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDbgHourSkipPathSelect_C::BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDbgHourSkipPathSelect_C_BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDbgHourSkipPathSelect_C::BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UDbgHourSkipPathSelect_C_BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.ExecuteUbergraph_DbgHourSkipPathSelect
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDbgHourSkipPathSelect_C::ExecuteUbergraph_DbgHourSkipPathSelect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.ExecuteUbergraph_DbgHourSkipPathSelect");

	UDbgHourSkipPathSelect_C_ExecuteUbergraph_DbgHourSkipPathSelect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.OnPathSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDbgHourSkipPathSelect_C::OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.OnPathSelected__DelegateSignature");

	UDbgHourSkipPathSelect_C_OnPathSelected__DelegateSignature_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
