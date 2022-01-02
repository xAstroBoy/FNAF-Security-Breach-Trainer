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
//		Name   -> Function SplinePathFork.SplinePathFork_C.GetPossibleForks
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SplineFollowerActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathway_C*>                    PossibleSplines                                            (Parm, OutParm, HasGetValueTypeHash)
void ASplinePathFork_C::GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ASplinePathway_C*>* PossibleSplines)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathFork.SplinePathFork_C.GetPossibleForks");

	ASplinePathFork_C_GetPossibleForks_Params params {};
	params.SplineFollowerActor = SplineFollowerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossibleSplines != nullptr)
		*PossibleSplines = params.PossibleSplines;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathFork.SplinePathFork_C.On Spline Follower Overlapped
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplineFollowerBase_C*                       SplineFollower                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathFork_C::On_Spline_Follower_Overlapped(class ASplineFollowerBase_C* SplineFollower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathFork.SplinePathFork_C.On Spline Follower Overlapped");

	ASplinePathFork_C_On_Spline_Follower_Overlapped_Params params {};
	params.SplineFollower = SplineFollower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathFork.SplinePathFork_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathFork_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathFork.SplinePathFork_C.ReceiveActorBeginOverlap");

	ASplinePathFork_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathFork.SplinePathFork_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathFork_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathFork.SplinePathFork_C.ReceiveActorEndOverlap");

	ASplinePathFork_C_ReceiveActorEndOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathFork.SplinePathFork_C.ExecuteUbergraph_SplinePathFork
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathFork_C::ExecuteUbergraph_SplinePathFork(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathFork.SplinePathFork_C.ExecuteUbergraph_SplinePathFork");

	ASplinePathFork_C_ExecuteUbergraph_SplinePathFork_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
