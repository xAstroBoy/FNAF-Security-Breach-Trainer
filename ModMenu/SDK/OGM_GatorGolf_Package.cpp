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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.On Start
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_GatorGolf_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.On Start");
		
		AOGM_GatorGolf_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.Spawn Monty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_GatorGolf_C::Spawn_Monty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.Spawn Monty");
		
		AOGM_GatorGolf_C_Spawn_Monty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.ExecuteUbergraph_OGM_GatorGolf
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOGM_GatorGolf_C.StaticClass
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


