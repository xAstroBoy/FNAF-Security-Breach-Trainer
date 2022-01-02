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
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlashlightCollectible_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.UpdateUIOnTick");

	AFlashlightCollectible_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void AFlashlightCollectible_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.OnCollect");

	AFlashlightCollectible_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFlashlightCollectible_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.CanPlayerInteract");

	AFlashlightCollectible_C_CanPlayerInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFlashlightCollectible_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.OnPlayerInteract");

	AFlashlightCollectible_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.OnLoadCollected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFlashlightCollectible_C::OnLoadCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.OnLoadCollected");

	AFlashlightCollectible_C_OnLoadCollected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightCollectible.FlashlightCollectible_C.ExecuteUbergraph_FlashlightCollectible
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFlashlightCollectible_C::ExecuteUbergraph_FlashlightCollectible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightCollectible.FlashlightCollectible_C.ExecuteUbergraph_FlashlightCollectible");

	AFlashlightCollectible_C_ExecuteUbergraph_FlashlightCollectible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
