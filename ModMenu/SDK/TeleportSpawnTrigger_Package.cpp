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
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Teleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::Teleport(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Teleport");
		
		ATeleportSpawnTrigger_C_Teleport_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATeleportSpawnTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveBeginPlay");
		
		ATeleportSpawnTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveActorBeginOverlap");
		
		ATeleportSpawnTrigger_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::OnAISpawned(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawned");
		
		ATeleportSpawnTrigger_C_OnAISpawned_Params params {};
		params.SpawnedPawn = SpawnedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawnedFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::OnAISpawnedFailure(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawnedFailure");
		
		ATeleportSpawnTrigger_C_OnAISpawnedFailure_Params params {};
		params.SpawnedPawn = SpawnedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Event Post Spawn Logic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::EventPostSpawnLogic(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Event Post Spawn Logic");
		
		ATeleportSpawnTrigger_C_EventPostSpawnLogic_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Enable Trigger
	 * 		Flags  -> ()
	 */
	void ATeleportSpawnTrigger_C::EnableTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Enable Trigger");
		
		ATeleportSpawnTrigger_C_EnableTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Disable Trigger
	 * 		Flags  -> ()
	 */
	void ATeleportSpawnTrigger_C::DisableTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Disable Trigger");
		
		ATeleportSpawnTrigger_C_DisableTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Reactivation Timer
	 * 		Flags  -> ()
	 */
	void ATeleportSpawnTrigger_C::ReactivationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Reactivation Timer");
		
		ATeleportSpawnTrigger_C_ReactivationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ExecuteUbergraph_TeleportSpawnTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpawnTrigger_C::ExecuteUbergraph_TeleportSpawnTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ExecuteUbergraph_TeleportSpawnTrigger");
		
		ATeleportSpawnTrigger_C_ExecuteUbergraph_TeleportSpawnTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATeleportSpawnTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportSpawnTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportSpawnTrigger.TeleportSpawnTrigger_C");
		return ptr;
	}

}


