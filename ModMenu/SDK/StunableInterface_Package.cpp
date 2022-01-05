/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "StunableInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StunableInterface.StunableInterface_C.CanBeStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UStunableInterface_C::CanBeStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunableInterface.StunableInterface_C.CanBeStunned");
		
		UStunableInterface_C_CanBeStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StunableInterface.StunableInterface_C.Unstun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStunableInterface_C::Unstun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunableInterface.StunableInterface_C.Unstun");
		
		UStunableInterface_C_Unstun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StunableInterface.StunableInterface_C.IsStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStunableInterface_C::IsStunned(bool* IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunableInterface.StunableInterface_C.IsStunned");
		
		UStunableInterface_C_IsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStunned != nullptr)
			*IsStunned = params.IsStunned;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StunableInterface.StunableInterface_C.Stun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStunableInterface_C::Stun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunableInterface.StunableInterface_C.Stun");
		
		UStunableInterface_C_Stun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStunableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStunableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StunableInterface.StunableInterface_C");
		return ptr;
	}

}


