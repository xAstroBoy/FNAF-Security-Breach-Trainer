/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "StaffbotManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.CheckForPatrol
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MeetsCondition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffbotManager_C::CheckForPatrol(bool* MeetsCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.CheckForPatrol");
		
		AStaffbotManager_C_CheckForPatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeetsCondition != nullptr)
			*MeetsCondition = params.MeetsCondition;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.CheckForSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MeetsCondition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffbotManager_C::CheckForSpawn(bool* MeetsCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.CheckForSpawn");
		
		AStaffbotManager_C_CheckForSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeetsCondition != nullptr)
			*MeetsCondition = params.MeetsCondition;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStaffbotManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.ReceiveBeginPlay");
		
		AStaffbotManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.ReceiveTick");
		
		AStaffbotManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UConditionalCheckComponent*                  ConditionCheckComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewResult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffbotManager_C::BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature(class UConditionalCheckComponent* ConditionCheckComponent, bool bNewResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature");
		
		AStaffbotManager_C_BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature_Params params {};
		params.ConditionCheckComponent = ConditionCheckComponent;
		params.bNewResult = bNewResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.ExecuteUbergraph_StaffbotManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotManager_C::ExecuteUbergraph_StaffbotManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.ExecuteUbergraph_StaffbotManager");
		
		AStaffbotManager_C_ExecuteUbergraph_StaffbotManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotManager.StaffbotManager_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffbotManager_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotManager.StaffbotManager_C.NewEventDispatcher_0__DelegateSignature");
		
		AStaffbotManager_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStaffbotManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffbotManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotManager.StaffbotManager_C");
		return ptr;
	}

}


