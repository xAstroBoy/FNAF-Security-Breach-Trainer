/**
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
	 * 		Name   -> Function StandardAITrigger.StandardAITrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStandardAITrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardAITrigger.StandardAITrigger_C.OnTriggered");
		
		AStandardAITrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StandardAITrigger.StandardAITrigger_C.AI Spawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandardAITrigger_C::AISpawned(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardAITrigger.StandardAITrigger_C.AI Spawned");
		
		AStandardAITrigger_C_AISpawned_Params params {};
		params.SpawnedPawn = SpawnedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StandardAITrigger.StandardAITrigger_C.ExecuteUbergraph_StandardAITrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandardAITrigger_C::ExecuteUbergraph_StandardAITrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardAITrigger.StandardAITrigger_C.ExecuteUbergraph_StandardAITrigger");
		
		AStandardAITrigger_C_ExecuteUbergraph_StandardAITrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandardAITrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandardAITrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardAITrigger.StandardAITrigger_C");
		return ptr;
	}

}


