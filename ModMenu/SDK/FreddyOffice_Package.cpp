﻿/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyOffice.FreddyOffice_C.GetPossibleSplinePaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm)
	 */
	void AFreddyOffice_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.GetPossibleSplinePaths");
		
		AFreddyOffice_C_GetPossibleSplinePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossiblePaths != nullptr)
			*PossiblePaths = params.PossiblePaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyOffice.FreddyOffice_C.GetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void AFreddyOffice_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.GetSplineFollowerContext");
		
		AFreddyOffice_C_GetSplineFollowerContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineFollowerContext != nullptr)
			*SplineFollowerContext = params.SplineFollowerContext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyOffice.FreddyOffice_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFreddyOffice_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.ReceiveBeginPlay");
		
		AFreddyOffice_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyOffice.FreddyOffice_C.SetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void AFreddyOffice_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.SetSplineFollowerContext");
		
		AFreddyOffice_C_SetSplineFollowerContext_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyOffice.FreddyOffice_C.ExecuteUbergraph_FreddyOffice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyOffice_C::ExecuteUbergraph_FreddyOffice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.ExecuteUbergraph_FreddyOffice");
		
		AFreddyOffice_C_ExecuteUbergraph_FreddyOffice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyOffice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyOffice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyOffice.FreddyOffice_C");
		return ptr;
	}

}


