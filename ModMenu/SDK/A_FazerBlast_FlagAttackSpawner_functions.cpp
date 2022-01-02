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
//		Name   -> Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AA_FazerBlast_FlagAttackSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveBeginPlay");

	AA_FazerBlast_FlagAttackSpawner_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_FazerBlast_FlagAttackSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveTick");

	AA_FazerBlast_FlagAttackSpawner_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.Spawn AI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USceneComponent*                             Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_FazerBlast_FlagAttackSpawner_C::Spawn_AI(bool Attacker, class USceneComponent* Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.Spawn AI");

	AA_FazerBlast_FlagAttackSpawner_C_Spawn_AI_Params params {};
	params.Attacker = Attacker;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.DespawnAI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AA_FazerBlast_FlagAttackSpawner_C::DespawnAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.DespawnAI");

	AA_FazerBlast_FlagAttackSpawner_C_DespawnAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_FazerBlast_FlagAttackSpawner_C::ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner");

	AA_FazerBlast_FlagAttackSpawner_C_ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
