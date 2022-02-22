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
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.CanDeactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AActivatableBase_C::CanDeactivate(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.CanDeactivate");
		
		AActivatableBase_C_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.GetActivatableState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ActivatableState_EActivatableState                 CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.GetActivatableState");
		
		AActivatableBase_C_GetActivatableState_Params params {};
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
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.CanActivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.CanActivate");
		
		AActivatableBase_C_CanActivate_Params params {};
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
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.SaveState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::SaveState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.SaveState");
		
		AActivatableBase_C_SaveState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AActivatableBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay");
		
		AActivatableBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.ActivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ActivateObject");
		
		AActivatableBase_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.OnActivatorDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::OnActivatorDone(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.OnActivatorDone");
		
		AActivatableBase_C_OnActivatorDone_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.Set State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ActivatableState_EActivatableState                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::Set_State(ActivatableState_EActivatableState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.Set State");
		
		AActivatableBase_C_Set_State_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.SetDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.SetDeactivated");
		
		AActivatableBase_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.SetActivated");
		
		AActivatableBase_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.On Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::On_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.On Activate");
		
		AActivatableBase_C_On_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.On Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::On_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.On Deactivate");
		
		AActivatableBase_C_On_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.DeactivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.DeactivateObject");
		
		AActivatableBase_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.On Object State Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ObjectName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ObjectState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AActivatableBase_C::On_Object_State_Changed(const class FName& ObjectName, bool ObjectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.On Object State Changed");
		
		AActivatableBase_C_On_Object_State_Changed_Params params {};
		params.ObjectName = ObjectName;
		params.ObjectState = ObjectState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableBase_C::ExecuteUbergraph_ActivatableBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase");
		
		AActivatableBase_C_ExecuteUbergraph_ActivatableBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.OnActivatableDeactivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::OnActivatableDeactivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.OnActivatableDeactivated__DelegateSignature");
		
		AActivatableBase_C_OnActivatableDeactivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableBase.ActivatableBase_C.OnActivatableActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableBase_C::OnActivatableActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.OnActivatableActivated__DelegateSignature");
		
		AActivatableBase_C_OnActivatableActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AActivatableBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActivatableBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableBase.ActivatableBase_C");
		return ptr;
	}

}


