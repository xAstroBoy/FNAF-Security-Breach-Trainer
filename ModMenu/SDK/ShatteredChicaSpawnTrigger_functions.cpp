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
//		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredChicaSpawnTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveActorBeginOverlap");

	AShatteredChicaSpawnTrigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AShatteredChicaSpawnTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveBeginPlay");

	AShatteredChicaSpawnTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.Event Post Spawn Logic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredChicaSpawnTrigger_C::Event_Post_Spawn_Logic(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.Event Post Spawn Logic");

	AShatteredChicaSpawnTrigger_C_Event_Post_Spawn_Logic_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AShatteredChicaSpawnTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.OnTriggered");

	AShatteredChicaSpawnTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredChicaSpawnTrigger_C::ExecuteUbergraph_ShatteredChicaSpawnTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnTrigger");

	AShatteredChicaSpawnTrigger_C_ExecuteUbergraph_ShatteredChicaSpawnTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
