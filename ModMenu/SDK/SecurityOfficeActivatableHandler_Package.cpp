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
	 * 		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityOfficeActivatableHandler_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.Setup");
		
		USecurityOfficeActivatableHandler_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.On Panel Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityOfficeActivatableHandler_C::On_Panel_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.On Panel Activate");
		
		USecurityOfficeActivatableHandler_C_On_Panel_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.ExecuteUbergraph_SecurityOfficeActivatableHandler
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityOfficeActivatableHandler_C::ExecuteUbergraph_SecurityOfficeActivatableHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.ExecuteUbergraph_SecurityOfficeActivatableHandler");
		
		USecurityOfficeActivatableHandler_C_ExecuteUbergraph_SecurityOfficeActivatableHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USecurityOfficeActivatableHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityOfficeActivatableHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C");
		return ptr;
	}

}


