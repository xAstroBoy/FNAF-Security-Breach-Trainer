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
	 * 		Name   -> Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Mod_ArcadeCabinet_Case_9_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ReceiveTick");
		
		APRE_Mod_ArcadeCabinet_Case_9_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.PlayEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Mod_ArcadeCabinet_Case_9_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.PlayEmitter");
		
		APRE_Mod_ArcadeCabinet_Case_9_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.StopEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Mod_ArcadeCabinet_Case_9_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.StopEmitter");
		
		APRE_Mod_ArcadeCabinet_Case_9_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ToggleInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_Mod_ArcadeCabinet_Case_9_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ToggleInRange");
		
		APRE_Mod_ArcadeCabinet_Case_9_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Mod_ArcadeCabinet_Case_9_C::ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10");
		
		APRE_Mod_ArcadeCabinet_Case_9_C_ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_Mod_ArcadeCabinet_Case_9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Mod_ArcadeCabinet_Case_9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C");
		return ptr;
	}

}


