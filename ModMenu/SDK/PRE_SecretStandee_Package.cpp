/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PRE_SecretStandee_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.CanBeStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool APRE_SecretStandee_C::CanBeStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.CanBeStunned");
		
		APRE_SecretStandee_C_CanBeStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.IsStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_SecretStandee_C::IsStunned(bool* IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.IsStunned");
		
		APRE_SecretStandee_C_IsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStunned != nullptr)
			*IsStunned = params.IsStunned;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SecretStandee_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.UserConstructionScript");
		
		APRE_SecretStandee_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.GlowUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_SecretStandee_C::GlowUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.GlowUp__FinishedFunc");
		
		APRE_SecretStandee_C_GlowUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.GlowUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_SecretStandee_C::GlowUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.GlowUp__UpdateFunc");
		
		APRE_SecretStandee_C_GlowUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.Unstun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SecretStandee_C::Unstun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.Unstun");
		
		APRE_SecretStandee_C_Unstun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SecretStandee_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.Activate");
		
		APRE_SecretStandee_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.Stun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SecretStandee_C::Stun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.Stun");
		
		APRE_SecretStandee_C_Stun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_SecretStandee_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.ReceiveBeginPlay");
		
		APRE_SecretStandee_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_SecretStandee.PRE_SecretStandee_C.ExecuteUbergraph_PRE_SecretStandee
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_SecretStandee_C::ExecuteUbergraph_PRE_SecretStandee(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SecretStandee.PRE_SecretStandee_C.ExecuteUbergraph_PRE_SecretStandee");
		
		APRE_SecretStandee_C_ExecuteUbergraph_PRE_SecretStandee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_SecretStandee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_SecretStandee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_SecretStandee.PRE_SecretStandee_C");
		return ptr;
	}

}


