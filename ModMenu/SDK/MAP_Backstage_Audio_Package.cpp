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
	 * 		Name   -> Function MAP_Backstage_Audio.MAP_Backstage_Audio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMAP_Backstage_Audio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAP_Backstage_Audio.MAP_Backstage_Audio_C.ReceiveBeginPlay");
		
		AMAP_Backstage_Audio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAP_Backstage_Audio.MAP_Backstage_Audio_C.ExecuteUbergraph_MAP_Backstage_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMAP_Backstage_Audio_C::ExecuteUbergraph_MAP_Backstage_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAP_Backstage_Audio.MAP_Backstage_Audio_C.ExecuteUbergraph_MAP_Backstage_Audio");
		
		AMAP_Backstage_Audio_C_ExecuteUbergraph_MAP_Backstage_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMAP_Backstage_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAP_Backstage_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAP_Backstage_Audio.MAP_Backstage_Audio_C");
		return ptr;
	}

}


