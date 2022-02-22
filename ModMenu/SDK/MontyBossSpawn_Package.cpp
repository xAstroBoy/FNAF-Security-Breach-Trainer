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
	 * 		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.Spawn
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMontyBossSpawn_C::Spawn(class AActor** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.Spawn");
		
		AMontyBossSpawn_C_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.SpawnOld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMontyBossSpawn_C::SpawnOld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.SpawnOld");
		
		AMontyBossSpawn_C_SpawnOld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.ExecuteUbergraph_MontyBossSpawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMontyBossSpawn_C::ExecuteUbergraph_MontyBossSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.ExecuteUbergraph_MontyBossSpawn");
		
		AMontyBossSpawn_C_ExecuteUbergraph_MontyBossSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMontyBossSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMontyBossSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MontyBossSpawn.MontyBossSpawn_C");
		return ptr;
	}

}


