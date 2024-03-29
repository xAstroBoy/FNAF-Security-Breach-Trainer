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
	 * 		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AServiceCart_HidePoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ReceiveBeginPlay");
		
		AServiceCart_HidePoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerLeave
	 * 		Flags  -> ()
	 */
	void AServiceCart_HidePoint_C::OnPlayerLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerLeave");
		
		AServiceCart_HidePoint_C_OnPlayerLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AServiceCart_HidePoint_C::OnPlayerHide(class ACharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerHide");
		
		AServiceCart_HidePoint_C_OnPlayerHide_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ExecuteUbergraph_ServiceCart_HidePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AServiceCart_HidePoint_C::ExecuteUbergraph_ServiceCart_HidePoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ExecuteUbergraph_ServiceCart_HidePoint");
		
		AServiceCart_HidePoint_C_ExecuteUbergraph_ServiceCart_HidePoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServiceCart_HidePoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServiceCart_HidePoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ServiceCart_HidePoint.ServiceCart_HidePoint_C");
		return ptr;
	}

}


