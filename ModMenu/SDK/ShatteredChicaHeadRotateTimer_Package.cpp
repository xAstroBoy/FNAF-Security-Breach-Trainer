﻿/**
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ReceiveActivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShatteredChicaHeadRotateTimer_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ReceiveActivationAI");
		
		UShatteredChicaHeadRotateTimer_C_ReceiveActivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ReceiveDeactivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShatteredChicaHeadRotateTimer_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ReceiveDeactivationAI");
		
		UShatteredChicaHeadRotateTimer_C_ReceiveDeactivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ExecuteUbergraph_ShatteredChicaHeadRotateTimer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShatteredChicaHeadRotateTimer_C::ExecuteUbergraph_ShatteredChicaHeadRotateTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C.ExecuteUbergraph_ShatteredChicaHeadRotateTimer");
		
		UShatteredChicaHeadRotateTimer_C_ExecuteUbergraph_ShatteredChicaHeadRotateTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UShatteredChicaHeadRotateTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShatteredChicaHeadRotateTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChicaHeadRotateTimer.ShatteredChicaHeadRotateTimer_C");
		return ptr;
	}

}


