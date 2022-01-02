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
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.GetChildForkPaths
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplinePathway_C*                            SplineIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathFork_C*>                   ForksUsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class ASplinePathFork_C*                           OriginalFork                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathway_C*>                    OnesToCheck                                                (Parm, OutParm, HasGetValueTypeHash)
//		TArray<class ASplinePathFork_C*>                   OutForks                                                   (Parm, OutParm, HasGetValueTypeHash)
void ASplinePathwayManager_C::GetChildForkPaths(class ASplinePathway_C** SplineIn, TArray<class ASplinePathFork_C*>* ForksUsed, class ASplinePathFork_C* OriginalFork, TArray<class ASplinePathway_C*>* OnesToCheck, TArray<class ASplinePathFork_C*>* OutForks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.GetChildForkPaths");

	ASplinePathwayManager_C_GetChildForkPaths_Params params {};
	params.OriginalFork = OriginalFork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineIn != nullptr)
		*SplineIn = params.SplineIn;
	if (ForksUsed != nullptr)
		*ForksUsed = params.ForksUsed;
	if (OnesToCheck != nullptr)
		*OnesToCheck = params.OnesToCheck;
	if (OutForks != nullptr)
		*OutForks = params.OutForks;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPointSoftRef
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASplinePathway_C*                            Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::FindClosestSplineAndPointSoftRef(const struct FVector& WorldLocation, class ASplinePathway_C** Spline, struct FVector* SplineLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPointSoftRef");

	ASplinePathwayManager_C_FindClosestSplineAndPointSoftRef_Params params {};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spline != nullptr)
		*Spline = params.Spline;
	if (SplineLocation != nullptr)
		*SplineLocation = params.SplineLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineUsingForks
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathway_C*>                    Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class ASplinePathway_C*                            SplineOut                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASplinePathFork_C*                           ForkOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::FindClosestSplineUsingForks(struct FVector* WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** SplineOut, class ASplinePathFork_C** ForkOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineUsingForks");

	ASplinePathwayManager_C_FindClosestSplineUsingForks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Splines != nullptr)
		*Splines = params.Splines;
	if (SplineOut != nullptr)
		*SplineOut = params.SplineOut;
	if (ForkOut != nullptr)
		*ForkOut = params.ForkOut;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SetupForks
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ASplinePathwayManager_C::SetupForks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SetupForks");

	ASplinePathwayManager_C_SetupForks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SelectStartSpline
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplinePathway_C*                            Start_Spline                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::SelectStartSpline(class ASplinePathway_C** Start_Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SelectStartSpline");

	ASplinePathwayManager_C_SelectStartSpline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start_Spline != nullptr)
		*Start_Spline = params.Start_Spline;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.RecurseSpline
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ASplinePathwayManager_C::RecurseSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.RecurseSpline");

	ASplinePathwayManager_C_RecurseSpline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestDistAlongSpline
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplinePathway_C*                            Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DistAlongSpline                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::FindClosestDistAlongSpline(class ASplinePathway_C* Spline, const struct FVector& WorldLocation, float* DistAlongSpline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestDistAlongSpline");

	ASplinePathwayManager_C_FindClosestDistAlongSpline_Params params {};
	params.Spline = Spline;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DistAlongSpline != nullptr)
		*DistAlongSpline = params.DistAlongSpline;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPoint
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathway_C*>                    Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class ASplinePathway_C*                            Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::FindClosestSplineAndPoint(const struct FVector& WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** Spline, struct FVector* SplineLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPoint");

	ASplinePathwayManager_C_FindClosestSplineAndPoint_Params params {};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Splines != nullptr)
		*Splines = params.Splines;
	if (Spline != nullptr)
		*Spline = params.Spline;
	if (SplineLocation != nullptr)
		*SplineLocation = params.SplineLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SetupNewSplinePath
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplinePathway_C*                            NextSpline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSplineFollowerContext                      StructRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
//		bool                                               UseDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SplineFollowDirection_ESplineFollowDirection> Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::SetupNewSplinePath(class ASplinePathway_C* NextSpline, struct FSplineFollowerContext* StructRef, bool UseDistance, float Distance, TEnumAsByte<SplineFollowDirection_ESplineFollowDirection> Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SetupNewSplinePath");

	ASplinePathwayManager_C_SetupNewSplinePath_Params params {};
	params.NextSpline = NextSpline;
	params.UseDistance = UseDistance;
	params.Distance = Distance;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructRef != nullptr)
		*StructRef = params.StructRef;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.GetPositionAtDistance
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSplineFollowerContext                      Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplinePathwayManager_C::GetPositionAtDistance(float DeltaDistance, struct FSplineFollowerContext* Context, struct FVector* WorldLocation, struct FVector* Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.GetPositionAtDistance");

	ASplinePathwayManager_C_GetPositionAtDistance_Params params {};
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Forward != nullptr)
		*Forward = params.Forward;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ASplinePathwayManager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.UserConstructionScript");

	ASplinePathwayManager_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
