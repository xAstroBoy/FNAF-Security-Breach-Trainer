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
	 * 		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.Find Best Next Point
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APatrolPath_C*                               InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PointLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PawnPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BestNextPointIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BestNextPointLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindClosestSeekerPath_C::FindBestNextPoint(int32_t PointIndex, class APatrolPath_C* InputPin, const struct FVector& PointLocation, const struct FVector& PawnPosition, int32_t* BestNextPointIndex, struct FVector* BestNextPointLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.Find Best Next Point");
		
		UFindClosestSeekerPath_C_FindBestNextPoint_Params params {};
		params.PointIndex = PointIndex;
		params.InputPin = InputPin;
		params.PointLocation = PointLocation;
		params.PawnPosition = PawnPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BestNextPointIndex != nullptr)
			*BestNextPointIndex = params.BestNextPointIndex;
		if (BestNextPointLocation != nullptr)
			*BestNextPointLocation = params.BestNextPointLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindClosestSeekerPath_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.ReceiveExecuteAI");
		
		UFindClosestSeekerPath_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.ExecuteUbergraph_FindClosestSeekerPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindClosestSeekerPath_C::ExecuteUbergraph_FindClosestSeekerPath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.ExecuteUbergraph_FindClosestSeekerPath");
		
		UFindClosestSeekerPath_C_ExecuteUbergraph_FindClosestSeekerPath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindClosestSeekerPath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindClosestSeekerPath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FindClosestSeekerPath.FindClosestSeekerPath_C");
		return ptr;
	}

}


