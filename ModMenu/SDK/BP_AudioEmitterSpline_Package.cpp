/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_AudioEmitterSpline_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.StopEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_AudioEmitterSpline_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.StopEmitter");
		
		ABP_AudioEmitterSpline_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.PlayEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_AudioEmitterSpline_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.PlayEmitter");
		
		ABP_AudioEmitterSpline_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_AudioEmitterSpline_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveBeginPlay");
		
		ABP_AudioEmitterSpline_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AudioEmitterSpline_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveTick");
		
		ABP_AudioEmitterSpline_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ToggleInRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AudioEmitterSpline_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ToggleInRange");
		
		ABP_AudioEmitterSpline_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ExecuteUbergraph_BP_AudioEmitterSpline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AudioEmitterSpline_C::ExecuteUbergraph_BP_AudioEmitterSpline(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ExecuteUbergraph_BP_AudioEmitterSpline");
		
		ABP_AudioEmitterSpline_C_ExecuteUbergraph_BP_AudioEmitterSpline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_AudioEmitterSpline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AudioEmitterSpline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioEmitterSpline.BP_AudioEmitterSpline_C");
		return ptr;
	}

}


