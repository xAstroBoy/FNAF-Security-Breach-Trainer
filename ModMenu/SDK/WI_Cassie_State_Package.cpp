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
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.CassieStateUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Cassie_State_C::CassieStateUpdate(bool IsCrouched, bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.CassieStateUpdate");
		
		UWI_Cassie_State_C_CassieStateUpdate_Params params {};
		params.IsCrouched = IsCrouched;
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.RunningToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Cassie_State_C::RunningToggle(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.RunningToggle");
		
		UWI_Cassie_State_C_RunningToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.CrouchingToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Cassie_State_C::CrouchingToggle(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.CrouchingToggle");
		
		UWI_Cassie_State_C_CrouchingToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.Finished_ABCF86A04A89A23C3A424D9E53D03C7D
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_State_C::Finished_ABCF86A04A89A23C3A424D9E53D03C7D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.Finished_ABCF86A04A89A23C3A424D9E53D03C7D");
		
		UWI_Cassie_State_C_Finished_ABCF86A04A89A23C3A424D9E53D03C7D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.FadeOutCassieState
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_State_C::FadeOutCassieState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.FadeOutCassieState");
		
		UWI_Cassie_State_C_FadeOutCassieState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_State_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.Construct");
		
		UWI_Cassie_State_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_State.WI_Cassie_State_C.ExecuteUbergraph_WI_Cassie_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Cassie_State_C::ExecuteUbergraph_WI_Cassie_State(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_State.WI_Cassie_State_C.ExecuteUbergraph_WI_Cassie_State");
		
		UWI_Cassie_State_C_ExecuteUbergraph_WI_Cassie_State_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_Cassie_State_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Cassie_State_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Cassie_State.WI_Cassie_State_C");
		return ptr;
	}

}


