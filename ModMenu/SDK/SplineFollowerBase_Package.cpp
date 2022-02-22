/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.GetSplineFollowerContext
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ASplineFollowerBase_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.GetSplineFollowerContext");
		
		ASplineFollowerBase_C_GetSplineFollowerContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineFollowerContext != nullptr)
			*SplineFollowerContext = params.SplineFollowerContext;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.GetPossibleSplinePaths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ASplineFollowerBase_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.GetPossibleSplinePaths");
		
		ASplineFollowerBase_C_GetPossibleSplinePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossiblePaths != nullptr)
			*PossiblePaths = params.PossiblePaths;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.PickRandomFork
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASplineFollowerBase_C::PickRandomFork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.PickRandomFork");
		
		ASplineFollowerBase_C_PickRandomFork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASplineFollowerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.ReceiveBeginPlay");
		
		ASplineFollowerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.Stop at Door
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DoorMaster_C*                            Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowerBase_C::Stop_at_Door(class ABP_DoorMaster_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.Stop at Door");
		
		ASplineFollowerBase_C_Stop_at_Door_Params params {};
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.Hit Fork
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void ASplineFollowerBase_C::Hit_Fork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.Hit Fork");
		
		ASplineFollowerBase_C_Hit_Fork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.On Door Unlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DoorMaster_C*                            Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASplineFollowerBase_C::On_Door_Unlocked(class ABP_DoorMaster_C* Door, bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.On Door Unlocked");
		
		ASplineFollowerBase_C_On_Door_Unlocked_Params params {};
		params.Door = Door;
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.SetSplineFollowerContext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ASplineFollowerBase_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.SetSplineFollowerContext");
		
		ASplineFollowerBase_C_SetSplineFollowerContext_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerBase.SplineFollowerBase_C.ExecuteUbergraph_SplineFollowerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowerBase_C::ExecuteUbergraph_SplineFollowerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerBase.SplineFollowerBase_C.ExecuteUbergraph_SplineFollowerBase");
		
		ASplineFollowerBase_C_ExecuteUbergraph_SplineFollowerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASplineFollowerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineFollowerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowerBase.SplineFollowerBase_C");
		return ptr;
	}

}


