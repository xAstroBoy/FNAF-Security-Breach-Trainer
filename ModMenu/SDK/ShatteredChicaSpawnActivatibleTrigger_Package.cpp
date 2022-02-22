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
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanDeactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::CanDeactivate(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanDeactivate");
		
		AShatteredChicaSpawnActivatibleTrigger_C_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.GetActivatableState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ActivatableState_EActivatableState                 CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.GetActivatableState");
		
		AShatteredChicaSpawnActivatibleTrigger_C_GetActivatableState_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentState != nullptr)
			*CurrentState = params.CurrentState;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanActivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanActivate");
		
		AShatteredChicaSpawnActivatibleTrigger_C_CanActivate_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivate != nullptr)
			*CanActivate = params.CanActivate;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnActivatorDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::OnActivatorDone(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnActivatorDone");
		
		AShatteredChicaSpawnActivatibleTrigger_C_OnActivatorDone_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetActivated");
		
		AShatteredChicaSpawnActivatibleTrigger_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetDeactivated");
		
		AShatteredChicaSpawnActivatibleTrigger_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveBeginPlay");
		
		AShatteredChicaSpawnActivatibleTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveActorBeginOverlap");
		
		AShatteredChicaSpawnActivatibleTrigger_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ActivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ActivateObject");
		
		AShatteredChicaSpawnActivatibleTrigger_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnTriggered");
		
		AShatteredChicaSpawnActivatibleTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.DeactivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.DeactivateObject");
		
		AShatteredChicaSpawnActivatibleTrigger_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger");
		
		AShatteredChicaSpawnActivatibleTrigger_C_ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AShatteredChicaSpawnActivatibleTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShatteredChicaSpawnActivatibleTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C");
		return ptr;
	}

}


