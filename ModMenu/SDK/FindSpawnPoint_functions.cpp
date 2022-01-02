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
//		Name   -> Function FindSpawnPoint.FindSpawnPoint_C.Select Spawn Point
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AFNAFAISpawnPoint*>                   TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<float>                                      Distances                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UFindSpawnPoint_C::Select_Spawn_Point(TArray<class AFNAFAISpawnPoint*> TargetArray, TArray<float>* Distances)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindSpawnPoint.FindSpawnPoint_C.Select Spawn Point");

	UFindSpawnPoint_C_Select_Spawn_Point_Params params {};
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distances != nullptr)
		*Distances = params.Distances;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindSpawnPoint.FindSpawnPoint_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindSpawnPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindSpawnPoint.FindSpawnPoint_C.ReceiveExecuteAI");

	UFindSpawnPoint_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindSpawnPoint.FindSpawnPoint_C.ExecuteUbergraph_FindSpawnPoint
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindSpawnPoint_C::ExecuteUbergraph_FindSpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindSpawnPoint.FindSpawnPoint_C.ExecuteUbergraph_FindSpawnPoint");

	UFindSpawnPoint_C_ExecuteUbergraph_FindSpawnPoint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif