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
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.CanDeactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActivatableInterface_C::CanDeactivate(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.CanDeactivate");
		
		UActivatableInterface_C_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.SetDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActivatableInterface_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.SetDeactivated");
		
		UActivatableInterface_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.DeactivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivatableInterface_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.DeactivateObject");
		
		UActivatableInterface_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActivatableInterface_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.SetActivated");
		
		UActivatableInterface_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.OnActivatorDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivatableInterface_C::OnActivatorDone(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.OnActivatorDone");
		
		UActivatableInterface_C_OnActivatorDone_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.CanActivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivatableInterface_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.CanActivate");
		
		UActivatableInterface_C_CanActivate_Params params {};
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
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.GetActivatableState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ActivatableState_EActivatableState                 CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivatableInterface_C::GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.GetActivatableState");
		
		UActivatableInterface_C_GetActivatableState_Params params {};
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
	 * 		Name   -> Function ActivatableInterface.ActivatableInterface_C.ActivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivatableInterface_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableInterface.ActivatableInterface_C.ActivateObject");
		
		UActivatableInterface_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UActivatableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableInterface.ActivatableInterface_C");
		return ptr;
	}

}


