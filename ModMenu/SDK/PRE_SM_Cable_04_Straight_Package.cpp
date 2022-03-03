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
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.StopEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SM_Cable_04_Straight_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.StopEmitter");
		
		APRE_SM_Cable_04_Straight_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.PlayEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SM_Cable_04_Straight_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.PlayEmitter");
		
		APRE_SM_Cable_04_Straight_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_SM_Cable_04_Straight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ReceiveBeginPlay");
		
		APRE_SM_Cable_04_Straight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ToggleInRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_SM_Cable_04_Straight_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ToggleInRange");
		
		APRE_SM_Cable_04_Straight_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.GetOcclusion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_SM_Cable_04_Straight_C::GetOcclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.GetOcclusion");
		
		APRE_SM_Cable_04_Straight_C_GetOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ExecuteUbergraph_PRE_SM_Cable_04_Straight
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_SM_Cable_04_Straight_C::ExecuteUbergraph_PRE_SM_Cable_04_Straight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ExecuteUbergraph_PRE_SM_Cable_04_Straight");
		
		APRE_SM_Cable_04_Straight_C_ExecuteUbergraph_PRE_SM_Cable_04_Straight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_SM_Cable_04_Straight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_SM_Cable_04_Straight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C");
		return ptr;
	}

}


