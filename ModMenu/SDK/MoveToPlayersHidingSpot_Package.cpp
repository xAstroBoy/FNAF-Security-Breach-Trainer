﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MoveToPlayersHidingSpot_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.FindClosestHideLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FoundLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToPlayersHidingSpot_C::FindClosestHideLocation(class UObject* HideActor, class APawn* Pawn, bool* FoundLocation, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.FindClosestHideLocation");
		
		UMoveToPlayersHidingSpot_C_FindClosestHideLocation_Params params {};
		params.HideActor = HideActor;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundLocation != nullptr)
			*FoundLocation = params.FoundLocation;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnMoveFinished_0E1FC4584AE08718647C04A951D545C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<AIModule_EPathFollowingResult>         Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToPlayersHidingSpot_C::OnMoveFinished_0E1FC4584AE08718647C04A951D545C1(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnMoveFinished_0E1FC4584AE08718647C04A951D545C1");
		
		UMoveToPlayersHidingSpot_C_OnMoveFinished_0E1FC4584AE08718647C04A951D545C1_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnRequestFailed_0E1FC4584AE08718647C04A951D545C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMoveToPlayersHidingSpot_C::OnRequestFailed_0E1FC4584AE08718647C04A951D545C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnRequestFailed_0E1FC4584AE08718647C04A951D545C1");
		
		UMoveToPlayersHidingSpot_C_OnRequestFailed_0E1FC4584AE08718647C04A951D545C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToPlayersHidingSpot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveExecuteAI");
		
		UMoveToPlayersHidingSpot_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToPlayersHidingSpot_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveTickAI");
		
		UMoveToPlayersHidingSpot_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ExecuteUbergraph_MoveToPlayersHidingSpot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToPlayersHidingSpot_C::ExecuteUbergraph_MoveToPlayersHidingSpot(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ExecuteUbergraph_MoveToPlayersHidingSpot");
		
		UMoveToPlayersHidingSpot_C_ExecuteUbergraph_MoveToPlayersHidingSpot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMoveToPlayersHidingSpot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveToPlayersHidingSpot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C");
		return ptr;
	}

}


