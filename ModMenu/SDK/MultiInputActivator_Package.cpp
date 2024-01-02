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
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.SetActivationStateOfAllActivators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EActivatableState                                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::SetActivationStateOfAllActivators(EActivatableState NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.SetActivationStateOfAllActivators");
		
		AMultiInputActivator_C_SetActivationStateOfAllActivators_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllOff                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::CheckAllActivatorsOff(bool* AllOff, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOff");
		
		AMultiInputActivator_C_CheckAllActivatorsOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllOff != nullptr)
			*AllOff = params.AllOff;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberActivated                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::GetNumberActivated(int32_t* NumberActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated");
		
		AMultiInputActivator_C_GetNumberActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberActivated != nullptr)
			*NumberActivated = params.NumberActivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllOn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::CheckAllActivatorsOn(bool* AllOn, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn");
		
		AMultiInputActivator_C_CheckAllActivatorsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllOn != nullptr)
			*AllOn = params.AllOn;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMultiInputActivator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay");
		
		AMultiInputActivator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.ActivateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ActivateObject");
		
		AMultiInputActivator_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.DeactivateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.DeactivateObject");
		
		AMultiInputActivator_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs
	 * 		Flags  -> ()
	 */
	void AMultiInputActivator_C::DeactivateInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs");
		
		AMultiInputActivator_C_DeactivateInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::ExecuteUbergraph_MultiInputActivator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator");
		
		AMultiInputActivator_C_ExecuteUbergraph_MultiInputActivator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::OnCanActivate__DelegateSignature(int32_t Count, class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature");
		
		AMultiInputActivator_C_OnCanActivate__DelegateSignature_Params params {};
		params.Count = Count;
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiInputActivator_C::OnCantActivate__DelegateSignature(int32_t Count, class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature");
		
		AMultiInputActivator_C_OnCantActivate__DelegateSignature_Params params {};
		params.Count = Count;
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMultiInputActivator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMultiInputActivator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MultiInputActivator.MultiInputActivator_C");
		return ptr;
	}

}


