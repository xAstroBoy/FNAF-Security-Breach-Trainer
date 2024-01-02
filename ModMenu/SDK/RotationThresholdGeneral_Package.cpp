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
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URotationThresholdGeneral_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.ReceiveTick");
		
		URotationThresholdGeneral_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Start
	 * 		Flags  -> ()
	 */
	void URotationThresholdGeneral_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.Start");
		
		URotationThresholdGeneral_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Stop
	 * 		Flags  -> ()
	 */
	void URotationThresholdGeneral_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.Stop");
		
		URotationThresholdGeneral_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ExecuteUbergraph_RotationThresholdGeneral
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URotationThresholdGeneral_C::ExecuteUbergraph_RotationThresholdGeneral(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.ExecuteUbergraph_RotationThresholdGeneral");
		
		URotationThresholdGeneral_C_ExecuteUbergraph_RotationThresholdGeneral_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.OnThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URotationThresholdGeneral_C::OnThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.OnThresholdReached__DelegateSignature");
		
		URotationThresholdGeneral_C_OnThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URotationThresholdGeneral_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URotationThresholdGeneral_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RotationThresholdGeneral.RotationThresholdGeneral_C");
		return ptr;
	}

}


