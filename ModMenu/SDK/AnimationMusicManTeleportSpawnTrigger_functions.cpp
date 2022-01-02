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
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAnimationMusicManTeleportSpawnTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveBeginPlay");

	AAnimationMusicManTeleportSpawnTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnimationMusicManTeleportSpawnTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveActorBeginOverlap");

	AAnimationMusicManTeleportSpawnTrigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAnimationMusicManTeleportSpawnTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.OnTriggered");

	AAnimationMusicManTeleportSpawnTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.Event Post Spawn Logic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnimationMusicManTeleportSpawnTrigger_C::Event_Post_Spawn_Logic(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.Event Post Spawn Logic");

	AAnimationMusicManTeleportSpawnTrigger_C_Event_Post_Spawn_Logic_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.End Animation Sequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAnimationMusicManTeleportSpawnTrigger_C::End_Animation_Sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.End Animation Sequence");

	AAnimationMusicManTeleportSpawnTrigger_C_End_Animation_Sequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnimationMusicManTeleportSpawnTrigger_C::ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger");

	AAnimationMusicManTeleportSpawnTrigger_C_ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
