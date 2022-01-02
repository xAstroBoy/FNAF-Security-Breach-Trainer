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
//		Name   -> Function PresentCollectible.PresentCollectible_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APresentCollectible_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.GetInteractibleType");

	APresentCollectible_C_GetInteractibleType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (PressType != nullptr)
		*PressType = params.PressType;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APresentCollectible_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.UserConstructionScript");

	APresentCollectible_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APresentCollectible_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay");

	APresentCollectible_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.OnBeginCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APresentCollectible_C::OnBeginCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnBeginCollect");

	APresentCollectible_C_OnBeginCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APresentCollectible_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnCollect");

	APresentCollectible_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.OnCancelCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APresentCollectible_C::OnCancelCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnCancelCollect");

	APresentCollectible_C_OnCancelCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.OnLoadCollected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APresentCollectible_C::OnLoadCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnLoadCollected");

	APresentCollectible_C_OnLoadCollected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.Reset Animation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APresentCollectible_C::Reset_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.Reset Animation");

	APresentCollectible_C_Reset_Animation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APresentCollectible_C::ExecuteUbergraph_PresentCollectible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible");

	APresentCollectible_C_ExecuteUbergraph_PresentCollectible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif