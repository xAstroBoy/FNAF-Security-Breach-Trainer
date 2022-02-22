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
	 * 		Name   -> Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AA_FazerBlast_Spawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ReceiveBeginPlay");
		
		AA_FazerBlast_Spawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_FazerBlast_Spawner_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ReceiveTick");
		
		AA_FazerBlast_Spawner_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.Spawn AI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AA_FazerBlast_Spawner_C::Spawn_AI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.Spawn AI");
		
		AA_FazerBlast_Spawner_C_Spawn_AI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ExecuteUbergraph_A_FazerBlast_Spawner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AA_FazerBlast_Spawner_C::ExecuteUbergraph_A_FazerBlast_Spawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_FazerBlast_Spawner.A_FazerBlast_Spawner_C.ExecuteUbergraph_A_FazerBlast_Spawner");
		
		AA_FazerBlast_Spawner_C_ExecuteUbergraph_A_FazerBlast_Spawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AA_FazerBlast_Spawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AA_FazerBlast_Spawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_FazerBlast_Spawner.A_FazerBlast_Spawner_C");
		return ptr;
	}

}


