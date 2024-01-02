/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlayerTeleportHandler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveBeginPlay");
		
		APlayerTeleportHandler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.On Destination Loaded
	 * 		Flags  -> ()
	 */
	void APlayerTeleportHandler_C::OnDestinationLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.On Destination Loaded");
		
		APlayerTeleportHandler_C_OnDestinationLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerTeleportHandler_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveTick");
		
		APlayerTeleportHandler_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.ExecuteUbergraph_PlayerTeleportHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerTeleportHandler_C::ExecuteUbergraph_PlayerTeleportHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.ExecuteUbergraph_PlayerTeleportHandler");
		
		APlayerTeleportHandler_C_ExecuteUbergraph_PlayerTeleportHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.OnTeleportFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APlayerTeleportHandler_C::OnTeleportFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.OnTeleportFinished__DelegateSignature");
		
		APlayerTeleportHandler_C_OnTeleportFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerTeleportHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerTeleportHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerTeleportHandler.PlayerTeleportHandler_C");
		return ptr;
	}

}


