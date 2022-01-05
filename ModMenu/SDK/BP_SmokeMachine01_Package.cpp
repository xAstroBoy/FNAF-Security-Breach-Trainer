/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_SmokeMachine01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SmokeMachine01.BP_SmokeMachine01_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SmokeMachine01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SmokeMachine01.BP_SmokeMachine01_C.ReceiveBeginPlay");
		
		ABP_SmokeMachine01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SmokeMachine01.BP_SmokeMachine01_C.Disable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SmokeMachine01_C::Disable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SmokeMachine01.BP_SmokeMachine01_C.Disable");
		
		ABP_SmokeMachine01_C_Disable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SmokeMachine01.BP_SmokeMachine01_C.ExecuteUbergraph_BP_SmokeMachine01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SmokeMachine01_C::ExecuteUbergraph_BP_SmokeMachine01(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SmokeMachine01.BP_SmokeMachine01_C.ExecuteUbergraph_BP_SmokeMachine01");
		
		ABP_SmokeMachine01_C_ExecuteUbergraph_BP_SmokeMachine01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_SmokeMachine01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SmokeMachine01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmokeMachine01.BP_SmokeMachine01_C");
		return ptr;
	}

}


