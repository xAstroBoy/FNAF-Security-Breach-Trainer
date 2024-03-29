﻿/**
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
	 * 		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASignalActorLoaded_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ReceiveTick");
		
		ASignalActorLoaded_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASignalActorLoaded_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ReceiveBeginPlay");
		
		ASignalActorLoaded_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ExecuteUbergraph_SignalActorLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASignalActorLoaded_C::ExecuteUbergraph_SignalActorLoaded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ExecuteUbergraph_SignalActorLoaded");
		
		ASignalActorLoaded_C_ExecuteUbergraph_SignalActorLoaded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.OnActorLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      LoadedActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASignalActorLoaded_C::OnActorLoaded__DelegateSignature(class AActor* LoadedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.OnActorLoaded__DelegateSignature");
		
		ASignalActorLoaded_C_OnActorLoaded__DelegateSignature_Params params {};
		params.LoadedActor = LoadedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASignalActorLoaded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASignalActorLoaded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SignalActorLoaded.SignalActorLoaded_C");
		return ptr;
	}

}


