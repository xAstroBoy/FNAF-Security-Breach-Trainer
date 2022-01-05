/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MOD_M_Stair_Wide_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMOD_M_Stair_Wide_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.ReceiveBeginPlay");
		
		AMOD_M_Stair_Wide_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMOD_M_Stair_Wide_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.Update");
		
		AMOD_M_Stair_Wide_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.ExecuteUbergraph_MOD_M_Stair_Wide
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMOD_M_Stair_Wide_C::ExecuteUbergraph_MOD_M_Stair_Wide(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_M_Stair_Wide.MOD_M_Stair_Wide_C.ExecuteUbergraph_MOD_M_Stair_Wide");
		
		AMOD_M_Stair_Wide_C_ExecuteUbergraph_MOD_M_Stair_Wide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMOD_M_Stair_Wide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMOD_M_Stair_Wide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MOD_M_Stair_Wide.MOD_M_Stair_Wide_C");
		return ptr;
	}

}


