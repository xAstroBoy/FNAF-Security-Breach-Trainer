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
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.SetBlackBoardKeys
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     PlayerLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::SetBlackBoardKeys(const struct FVector& TargetLocation, const struct FVector& PlayerLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.SetBlackBoardKeys");

	UFazerBlast_FindLocationAtDistance_C_SetBlackBoardKeys_Params params {};
	params.TargetLocation = TargetLocation;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.GetBestLocation
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              ActorsToIgnore                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UFazerBlast_FindLocationAtDistance_C::GetBestLocation(class APawn** ControlledPawn, TArray<class AActor*>* ActorsToIgnore, struct FVector* PlayerLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.GetBestLocation");

	UFazerBlast_FindLocationAtDistance_C_GetBestLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControlledPawn != nullptr)
		*ControlledPawn = params.ControlledPawn;
	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (PlayerLocation != nullptr)
		*PlayerLocation = params.PlayerLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Score
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FVector>                             NavRay_Ends                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FVector                                     ReturnBestLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::NavRays_Score(class APawn* ControlledPawn, const struct FVector& InDirection, const struct FVector& InStart, TArray<struct FVector>* NavRay_Ends, struct FVector* ReturnBestLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Score");

	UFazerBlast_FindLocationAtDistance_C_NavRays_Score_Params params {};
	params.ControlledPawn = ControlledPawn;
	params.InDirection = InDirection;
	params.InStart = InStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavRay_Ends != nullptr)
		*NavRay_Ends = params.NavRay_Ends;
	if (ReturnBestLocation != nullptr)
		*ReturnBestLocation = params.ReturnBestLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Correct
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FVector>                             InNavRay_Ends                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FVector>                             OutNavRay_Ends                                             (Parm, OutParm, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::NavRays_Correct(const struct FVector& InDirection, const struct FVector& InStart, TArray<struct FVector>* InNavRay_Ends, TArray<class AActor*> ActorsToIgnore, struct FVector* OutDirection, struct FVector* OutStart, TArray<struct FVector>* OutNavRay_Ends)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Correct");

	UFazerBlast_FindLocationAtDistance_C_NavRays_Correct_Params params {};
	params.InDirection = InDirection;
	params.InStart = InStart;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InNavRay_Ends != nullptr)
		*InNavRay_Ends = params.InNavRay_Ends;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
	if (OutStart != nullptr)
		*OutStart = params.OutStart;
	if (OutNavRay_Ends != nullptr)
		*OutNavRay_Ends = params.OutNavRay_Ends;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Cast
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              ActorsToIgnore                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FVector>                             NavRay_Ends                                                (Parm, OutParm, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::NavRays_Cast(class APawn* ControlledPawn, TArray<class AActor*>* ActorsToIgnore, struct FVector* Direction, struct FVector* Start, TArray<struct FVector>* NavRay_Ends)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Cast");

	UFazerBlast_FindLocationAtDistance_C_NavRays_Cast_Params params {};
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Start != nullptr)
		*Start = params.Start;
	if (NavRay_Ends != nullptr)
		*NavRay_Ends = params.NavRay_Ends;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.Process
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::Process(class APawn** ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.Process");

	UFazerBlast_FindLocationAtDistance_C_Process_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControlledPawn != nullptr)
		*ControlledPawn = params.ControlledPawn;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ReceiveExecuteAI");

	UFazerBlast_FindLocationAtDistance_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ExecuteUbergraph_FazerBlast_FindLocationAtDistance
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_FindLocationAtDistance_C::ExecuteUbergraph_FazerBlast_FindLocationAtDistance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ExecuteUbergraph_FazerBlast_FindLocationAtDistance");

	UFazerBlast_FindLocationAtDistance_C_ExecuteUbergraph_FazerBlast_FindLocationAtDistance_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
