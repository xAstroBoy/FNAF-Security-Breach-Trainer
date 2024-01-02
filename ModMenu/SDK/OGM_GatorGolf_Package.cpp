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
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.On Start
	 * 		Flags  -> ()
	 */
	void AOGM_GatorGolf_C::OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.On Start");
		
		AOGM_GatorGolf_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.Spawn Monty
	 * 		Flags  -> ()
	 */
	void AOGM_GatorGolf_C::SpawnMonty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.Spawn Monty");
		
		AOGM_GatorGolf_C_SpawnMonty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOGM_GatorGolf_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.ReceiveBeginPlay");
		
		AOGM_GatorGolf_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.OnCollectSecurityBadge
	 * 		Flags  -> ()
	 */
	void AOGM_GatorGolf_C::OnCollectSecurityBadge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.OnCollectSecurityBadge");
		
		AOGM_GatorGolf_C_OnCollectSecurityBadge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.ExecuteUbergraph_OGM_GatorGolf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_GatorGolf_C::ExecuteUbergraph_OGM_GatorGolf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.ExecuteUbergraph_OGM_GatorGolf");
		
		AOGM_GatorGolf_C_ExecuteUbergraph_OGM_GatorGolf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOGM_GatorGolf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOGM_GatorGolf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OGM_GatorGolf.OGM_GatorGolf_C");
		return ptr;
	}

}


