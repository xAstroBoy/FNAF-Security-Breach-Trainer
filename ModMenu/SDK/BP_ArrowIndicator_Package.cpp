/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_ArrowIndicator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.FadeUPThenDown__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::FadeUPThenDown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.FadeUPThenDown__FinishedFunc");
		
		ABP_ArrowIndicator_C_FadeUPThenDown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.FadeUPThenDown__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::FadeUPThenDown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.FadeUPThenDown__UpdateFunc");
		
		ABP_ArrowIndicator_C_FadeUPThenDown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.Timeline_0__FinishedFunc");
		
		ABP_ArrowIndicator_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.Timeline_0__UpdateFunc");
		
		ABP_ArrowIndicator_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.ReceiveBeginPlay");
		
		ABP_ArrowIndicator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.ActivateUP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::ActivateUP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.ActivateUP");
		
		ABP_ArrowIndicator_C_ActivateUP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.ActivateDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::ActivateDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.ActivateDown");
		
		ABP_ArrowIndicator_C_ActivateDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ArrowIndicator_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.Stop");
		
		ABP_ArrowIndicator_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_ArrowIndicator.BP_ArrowIndicator_C.ExecuteUbergraph_BP_ArrowIndicator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ArrowIndicator_C::ExecuteUbergraph_BP_ArrowIndicator(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArrowIndicator.BP_ArrowIndicator_C.ExecuteUbergraph_BP_ArrowIndicator");
		
		ABP_ArrowIndicator_C_ExecuteUbergraph_BP_ArrowIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ArrowIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ArrowIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArrowIndicator.BP_ArrowIndicator_C");
		return ptr;
	}

}


