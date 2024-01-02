/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EastArcade_RoxySpawn.EastArcade_RoxySpawn_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AEastArcade_RoxySpawn_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EastArcade_RoxySpawn.EastArcade_RoxySpawn_C.OnTriggered");
		
		AEastArcade_RoxySpawn_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EastArcade_RoxySpawn.EastArcade_RoxySpawn_C.ExecuteUbergraph_EastArcade_RoxySpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEastArcade_RoxySpawn_C::ExecuteUbergraph_EastArcade_RoxySpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EastArcade_RoxySpawn.EastArcade_RoxySpawn_C.ExecuteUbergraph_EastArcade_RoxySpawn");
		
		AEastArcade_RoxySpawn_C_ExecuteUbergraph_EastArcade_RoxySpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEastArcade_RoxySpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEastArcade_RoxySpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EastArcade_RoxySpawn.EastArcade_RoxySpawn_C");
		return ptr;
	}

}


