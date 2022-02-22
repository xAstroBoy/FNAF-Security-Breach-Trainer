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
	 * 		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.Setup Hiding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAIShatteredMontyController_C::Setup_Hiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.Setup Hiding");
		
		AAIShatteredMontyController_C_Setup_Hiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.End Hiding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAIShatteredMontyController_C::End_Hiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.End Hiding");
		
		AAIShatteredMontyController_C_End_Hiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.ExecuteUbergraph_AIShatteredMontyController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIShatteredMontyController_C::ExecuteUbergraph_AIShatteredMontyController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.ExecuteUbergraph_AIShatteredMontyController");
		
		AAIShatteredMontyController_C_ExecuteUbergraph_AIShatteredMontyController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAIShatteredMontyController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIShatteredMontyController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIShatteredMontyController.AIShatteredMontyController_C");
		return ptr;
	}

}


