/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.GetChildForkPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplinePathway_C*                            SplineIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASplinePathFork_C*>                   ForksUsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ASplinePathFork_C*                           OriginalFork                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASplinePathway_C*>                    OnesToCheck                                                (Parm, OutParm)
	 * 		TArray<class ASplinePathFork_C*>                   OutForks                                                   (Parm, OutParm)
	 */
	void ASplinePathwayManager_C::GetChildForkPaths(class ASplinePathway_C** SplineIn, TArray<class ASplinePathFork_C*>* ForksUsed, class ASplinePathFork_C* OriginalFork, TArray<class ASplinePathway_C*>* OnesToCheck, TArray<class ASplinePathFork_C*>* OutForks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.GetChildForkPaths");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPointSoftRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASplinePathway_C*                            Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::FindClosestSplineAndPointSoftRef(const struct FVector& WorldLocation, class ASplinePathway_C** Spline, struct FVector* SplineLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPointSoftRef");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineUsingForks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASplinePathway_C*>                    Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ASplinePathway_C*                            SplineOut                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASplinePathFork_C*                           ForkOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::FindClosestSplineUsingForks(struct FVector* WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** SplineOut, class ASplinePathFork_C** ForkOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineUsingForks");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SetupForks
	 * 		Flags  -> ()
	 */
	void ASplinePathwayManager_C::SetupForks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SetupForks");
		
		ASplinePathwayManager_C_SetupForks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SelectStartSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplinePathway_C*                            StartSpline                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::SelectStartSpline(class ASplinePathway_C** StartSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SelectStartSpline");
		
		ASplinePathwayManager_C_SelectStartSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartSpline != nullptr)
			*StartSpline = params.StartSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.RecurseSpline
	 * 		Flags  -> ()
	 */
	void ASplinePathwayManager_C::RecurseSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.RecurseSpline");
		
		ASplinePathwayManager_C_RecurseSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestDistAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplinePathway_C*                            Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistAlongSpline                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::FindClosestDistAlongSpline(class ASplinePathway_C* Spline, const struct FVector& WorldLocation, float* DistAlongSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestDistAlongSpline");
		
		ASplinePathwayManager_C_FindClosestDistAlongSpline_Params params {};
		params.Spline = Spline;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistAlongSpline != nullptr)
			*DistAlongSpline = params.DistAlongSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASplinePathway_C*>                    Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ASplinePathway_C*                            Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::FindClosestSplineAndPoint(const struct FVector& WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** Spline, struct FVector* SplineLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPoint");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.SetupNewSplinePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplinePathway_C*                            NextSpline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplineFollowerContext                      StructRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		bool                                               UseDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESplineFollowDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::SetupNewSplinePath(class ASplinePathway_C* NextSpline, struct FSplineFollowerContext* StructRef, bool UseDistance, float Distance, ESplineFollowDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.SetupNewSplinePath");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.GetPositionAtDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplineFollowerContext                      Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplinePathwayManager_C::GetPositionAtDistance(float DeltaDistance, struct FSplineFollowerContext* Context, struct FVector* WorldLocation, struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.GetPositionAtDistance");
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayManager.SplinePathwayManager_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASplinePathwayManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayManager.SplinePathwayManager_C.UserConstructionScript");
		
		ASplinePathwayManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplinePathwayManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplinePathwayManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplinePathwayManager.SplinePathwayManager_C");
		return ptr;
	}

}


