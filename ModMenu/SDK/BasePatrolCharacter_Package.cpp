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
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.GetCurrentPatrolPointIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t ABasePatrolCharacter_C::GetCurrentPatrolPointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.GetCurrentPatrolPointIndex");
		
		ABasePatrolCharacter_C_GetCurrentPatrolPointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.GetPatrolPath
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void ABasePatrolCharacter_C::GetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.GetPatrolPath");
		
		ABasePatrolCharacter_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.SetCurrentPatrolPointIndex
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasePatrolCharacter_C::SetCurrentPatrolPointIndex(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.SetCurrentPatrolPointIndex");
		
		ABasePatrolCharacter_C_SetCurrentPatrolPointIndex_Params params {};
		params.PatrolPointIndex = PatrolPointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.SetPatrolPath
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void ABasePatrolCharacter_C::SetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.SetPatrolPath");
		
		ABasePatrolCharacter_C_SetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABasePatrolCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.ReceiveBeginPlay");
		
		ABasePatrolCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.ExecuteUbergraph_BasePatrolCharacter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasePatrolCharacter_C::ExecuteUbergraph_BasePatrolCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.ExecuteUbergraph_BasePatrolCharacter");
		
		ABasePatrolCharacter_C_ExecuteUbergraph_BasePatrolCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABasePatrolCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasePatrolCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasePatrolCharacter.BasePatrolCharacter_C");
		return ptr;
	}

}


