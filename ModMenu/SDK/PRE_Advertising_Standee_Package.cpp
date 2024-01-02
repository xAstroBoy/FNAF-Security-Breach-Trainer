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
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.StopEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.StopEmitter");
		
		APRE_Advertising_Standee_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayEmitter");
		
		APRE_Advertising_Standee_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ReceiveBeginPlay");
		
		APRE_Advertising_Standee_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.Update
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.Update");
		
		APRE_Advertising_Standee_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ToggleInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_Advertising_Standee_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ToggleInRange");
		
		APRE_Advertising_Standee_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayAudioEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::PlayAudioEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayAudioEmitter");
		
		APRE_Advertising_Standee_C_PlayAudioEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayStaticEmitter
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::PlayStaticEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.PlayStaticEmitter");
		
		APRE_Advertising_Standee_C_PlayStaticEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.AdvertisingStandee
	 * 		Flags  -> ()
	 */
	void APRE_Advertising_Standee_C::AdvertisingStandee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.AdvertisingStandee");
		
		APRE_Advertising_Standee_C_AdvertisingStandee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ExecuteUbergraph_PRE_Advertising_Standee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Advertising_Standee_C::ExecuteUbergraph_PRE_Advertising_Standee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.ExecuteUbergraph_PRE_Advertising_Standee");
		
		APRE_Advertising_Standee_C_ExecuteUbergraph_PRE_Advertising_Standee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_Advertising_Standee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Advertising_Standee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Advertising_Standee.PRE_Advertising_Standee_C");
		return ptr;
	}

}


