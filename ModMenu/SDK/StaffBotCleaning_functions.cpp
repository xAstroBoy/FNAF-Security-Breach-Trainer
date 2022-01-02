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
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.GetPossibleSplinePaths
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
void AStaffBotCleaning_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.GetPossibleSplinePaths");

	AStaffBotCleaning_C_GetPossibleSplinePaths_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossiblePaths != nullptr)
		*PossiblePaths = params.PossiblePaths;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.GetSplineFollowerContext
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AStaffBotCleaning_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.GetSplineFollowerContext");

	AStaffBotCleaning_C_GetSplineFollowerContext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineFollowerContext != nullptr)
		*SplineFollowerContext = params.SplineFollowerContext;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaffBotCleaning_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.ReceiveBeginPlay");

	AStaffBotCleaning_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.SetSplineFollowerContext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AStaffBotCleaning_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.SetSplineFollowerContext");

	AStaffBotCleaning_C_SetSplineFollowerContext_Params params {};
	params.SplineFollowerContext = SplineFollowerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffBotCleaning_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.ReceiveActorBeginOverlap");

	AStaffBotCleaning_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotCleaning.StaffBotCleaning_C.ExecuteUbergraph_StaffBotCleaning
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffBotCleaning_C::ExecuteUbergraph_StaffBotCleaning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotCleaning.StaffBotCleaning_C.ExecuteUbergraph_StaffBotCleaning");

	AStaffBotCleaning_C_ExecuteUbergraph_StaffBotCleaning_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
