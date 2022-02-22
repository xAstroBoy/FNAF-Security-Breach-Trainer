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
	 * 		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveActorBeginOverlap");
		
		AShatteredChicaSpawnTrigger_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShatteredChicaSpawnTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveBeginPlay");
		
		AShatteredChicaSpawnTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.Event Post Spawn Logic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnTrigger_C::Event_Post_Spawn_Logic(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.Event Post Spawn Logic");
		
		AShatteredChicaSpawnTrigger_C_Event_Post_Spawn_Logic_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShatteredChicaSpawnTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.OnTriggered");
		
		AShatteredChicaSpawnTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnTrigger_C::ExecuteUbergraph_ShatteredChicaSpawnTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnTrigger");
		
		AShatteredChicaSpawnTrigger_C_ExecuteUbergraph_ShatteredChicaSpawnTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AShatteredChicaSpawnTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShatteredChicaSpawnTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C");
		return ptr;
	}

}


