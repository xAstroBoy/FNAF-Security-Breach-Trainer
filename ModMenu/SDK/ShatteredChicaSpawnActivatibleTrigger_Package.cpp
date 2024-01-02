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
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanDeactivate
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.GetActivatableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivatableState                                  CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::GetActivatableState(class AActor* Activator, EActivatableState* CurrentState)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EConditionFailReason                               CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChicaSpawnActivatibleTrigger_C::CanActivate(class AActor* Activator, bool* CanActivate, EConditionFailReason* CantReason)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnActivatorDone
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetActivated
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetDeactivated
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ActivateObject
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnTriggered
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.DeactivateObject
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShatteredChicaSpawnActivatibleTrigger_C.StaticClass
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


