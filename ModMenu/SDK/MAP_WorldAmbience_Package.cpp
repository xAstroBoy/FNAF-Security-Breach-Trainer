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
	 * 		Name   -> Function MAP_WorldAmbience.MAP_WorldAmbience_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMAP_WorldAmbience_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAP_WorldAmbience.MAP_WorldAmbience_C.ReceiveBeginPlay");
		
		AMAP_WorldAmbience_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAP_WorldAmbience.MAP_WorldAmbience_C.ExecuteUbergraph_MAP_WorldAmbience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMAP_WorldAmbience_C::ExecuteUbergraph_MAP_WorldAmbience(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAP_WorldAmbience.MAP_WorldAmbience_C.ExecuteUbergraph_MAP_WorldAmbience");
		
		AMAP_WorldAmbience_C_ExecuteUbergraph_MAP_WorldAmbience_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMAP_WorldAmbience_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAP_WorldAmbience_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAP_WorldAmbience.MAP_WorldAmbience_C");
		return ptr;
	}

}


