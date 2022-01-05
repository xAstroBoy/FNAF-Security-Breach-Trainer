/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "RotationThresholdGeneral_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ExecuteUbergraph_RotationThresholdGeneral
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URotationThresholdGeneral_C::ExecuteUbergraph_RotationThresholdGeneral(int EntryPoint)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.OnThresholdReached__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URotationThresholdGeneral_C.StaticClass
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


