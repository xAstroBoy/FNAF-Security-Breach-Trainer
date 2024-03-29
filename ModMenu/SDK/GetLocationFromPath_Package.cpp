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
	 * 		Name   -> Function GetLocationFromPath.GetLocationFromPath_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGetLocationFromPath_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetLocationFromPath.GetLocationFromPath_C.ReceiveExecuteAI");
		
		UGetLocationFromPath_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GetLocationFromPath.GetLocationFromPath_C.ExecuteUbergraph_GetLocationFromPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGetLocationFromPath_C::ExecuteUbergraph_GetLocationFromPath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetLocationFromPath.GetLocationFromPath_C.ExecuteUbergraph_GetLocationFromPath");
		
		UGetLocationFromPath_C_ExecuteUbergraph_GetLocationFromPath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetLocationFromPath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetLocationFromPath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GetLocationFromPath.GetLocationFromPath_C");
		return ptr;
	}

}


