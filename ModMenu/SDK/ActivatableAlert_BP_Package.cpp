/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ActivatableAlert_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableAlert_BP.ActivatableAlert_BP_C.On Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableAlert_BP_C::On_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableAlert_BP.ActivatableAlert_BP_C.On Activate");
		
		AActivatableAlert_BP_C_On_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableAlert_BP.ActivatableAlert_BP_C.ExecuteUbergraph_ActivatableAlert_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableAlert_BP_C::ExecuteUbergraph_ActivatableAlert_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableAlert_BP.ActivatableAlert_BP_C.ExecuteUbergraph_ActivatableAlert_BP");
		
		AActivatableAlert_BP_C_ExecuteUbergraph_ActivatableAlert_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AActivatableAlert_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActivatableAlert_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableAlert_BP.ActivatableAlert_BP_C");
		return ptr;
	}

}


