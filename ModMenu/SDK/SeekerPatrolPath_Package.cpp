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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.GetPathName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ASeekerPatrolPath_C::GetPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.GetPathName");
		
		ASeekerPatrolPath_C_GetPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.GetSpawnType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	fnaf9_EFNAFAISpawnType ASeekerPatrolPath_C::GetSpawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.GetSpawnType");
		
		ASeekerPatrolPath_C_GetSpawnType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASeekerPatrolPath_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.ReceiveBeginPlay");
		
		ASeekerPatrolPath_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.ExecuteUbergraph_SeekerPatrolPath
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASeekerPatrolPath_C::ExecuteUbergraph_SeekerPatrolPath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.ExecuteUbergraph_SeekerPatrolPath");
		
		ASeekerPatrolPath_C_ExecuteUbergraph_SeekerPatrolPath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASeekerPatrolPath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeekerPatrolPath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeekerPatrolPath.SeekerPatrolPath_C");
		return ptr;
	}

}


