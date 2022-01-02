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
//		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.Spawn
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyBossSpawn_C::Spawn(class AActor** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.Spawn");

	AMontyBossSpawn_C_Spawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.SpawnOld
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMontyBossSpawn_C::SpawnOld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.SpawnOld");

	AMontyBossSpawn_C_SpawnOld_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyBossSpawn.MontyBossSpawn_C.ExecuteUbergraph_MontyBossSpawn
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyBossSpawn_C::ExecuteUbergraph_MontyBossSpawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyBossSpawn.MontyBossSpawn_C.ExecuteUbergraph_MontyBossSpawn");

	AMontyBossSpawn_C_ExecuteUbergraph_MontyBossSpawn_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
