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
//		Name   -> Function Stroller_HidePoint.Stroller_HidePoint_C.GetSkeletalMesh
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStroller_HidePoint_C::GetSkeletalMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Stroller_HidePoint.Stroller_HidePoint_C.GetSkeletalMesh");

	AStroller_HidePoint_C_GetSkeletalMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStroller_HidePoint_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerInteract");

	AStroller_HidePoint_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerLeave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AStroller_HidePoint_C::OnPlayerLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerLeave");

	AStroller_HidePoint_C_OnPlayerLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Stroller_HidePoint.Stroller_HidePoint_C.ExecuteUbergraph_Stroller_HidePoint
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStroller_HidePoint_C::ExecuteUbergraph_Stroller_HidePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Stroller_HidePoint.Stroller_HidePoint_C.ExecuteUbergraph_Stroller_HidePoint");

	AStroller_HidePoint_C_ExecuteUbergraph_Stroller_HidePoint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
