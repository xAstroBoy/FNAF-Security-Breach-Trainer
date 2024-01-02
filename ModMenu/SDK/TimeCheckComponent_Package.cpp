/**
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
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.ConditionsMet
	 * 		Flags  -> ()
	 */
	bool UTimeCheckComponent_C::ConditionsMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.ConditionsMet");
		
		UTimeCheckComponent_C_ConditionsMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.SendConditionUpdate
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::SendConditionUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.SendConditionUpdate");
		
		UTimeCheckComponent_C_SendConditionUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.CheckTime
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::CheckTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.CheckTime");
		
		UTimeCheckComponent_C_CheckTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.HasMetTimeConditions
	 * 		Flags  -> ()
	 */
	bool UTimeCheckComponent_C::HasMetTimeConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.HasMetTimeConditions");
		
		UTimeCheckComponent_C_HasMetTimeConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.On Time Hit
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::OnTimeHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.On Time Hit");
		
		UTimeCheckComponent_C_OnTimeHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.On Time End
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::OnTimeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.On Time End");
		
		UTimeCheckComponent_C_OnTimeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.On World State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFGameState                                     PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeCheckComponent_C::OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.On World State Changed");
		
		UTimeCheckComponent_C_OnWorldStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.On Time Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeCheckComponent_C::OnTimeChanged(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.On Time Changed");
		
		UTimeCheckComponent_C_OnTimeChanged_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.ReceiveBeginPlay");
		
		UTimeCheckComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.BindConditionUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UTimeCheckComponent_C::BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.BindConditionUpdatedDelegate");
		
		UTimeCheckComponent_C_BindConditionUpdatedDelegate_Params params {};
		params.OnConditionResultUpdated = OnConditionResultUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.UnbindConditionUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UTimeCheckComponent_C::UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.UnbindConditionUpdatedDelegate");
		
		UTimeCheckComponent_C_UnbindConditionUpdatedDelegate_Params params {};
		params.OnConditionResultUpdated = OnConditionResultUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.ExecuteUbergraph_TimeCheckComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeCheckComponent_C::ExecuteUbergraph_TimeCheckComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.ExecuteUbergraph_TimeCheckComponent");
		
		UTimeCheckComponent_C_ExecuteUbergraph_TimeCheckComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.MoonManTimeHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::MoonManTimeHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.MoonManTimeHit__DelegateSignature");
		
		UTimeCheckComponent_C_MoonManTimeHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.OnTimeEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::OnTimeEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.OnTimeEnd__DelegateSignature");
		
		UTimeCheckComponent_C_OnTimeEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeCheckComponent.TimeCheckComponent_C.OnTimeStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTimeCheckComponent_C::OnTimeStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeCheckComponent.TimeCheckComponent_C.OnTimeStart__DelegateSignature");
		
		UTimeCheckComponent_C_OnTimeStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeCheckComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeCheckComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimeCheckComponent.TimeCheckComponent_C");
		return ptr;
	}

}


