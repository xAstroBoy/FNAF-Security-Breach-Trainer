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
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.StopEmitter
	 * 		Flags  -> ()
	 */
	void APRE_MOD_TransferVent_Strait_02_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.StopEmitter");
		
		APRE_MOD_TransferVent_Strait_02_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.PlayEmitter
	 * 		Flags  -> ()
	 */
	void APRE_MOD_TransferVent_Strait_02_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.PlayEmitter");
		
		APRE_MOD_TransferVent_Strait_02_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_MOD_TransferVent_Strait_02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ReceiveBeginPlay");
		
		APRE_MOD_TransferVent_Strait_02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ToggleInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_MOD_TransferVent_Strait_02_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ToggleInRange");
		
		APRE_MOD_TransferVent_Strait_02_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.GetOcclusion
	 * 		Flags  -> ()
	 */
	void APRE_MOD_TransferVent_Strait_02_C::GetOcclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.GetOcclusion");
		
		APRE_MOD_TransferVent_Strait_02_C_GetOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ExecuteUbergraph_PRE_MOD_TransferVent_Strait_02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_MOD_TransferVent_Strait_02_C::ExecuteUbergraph_PRE_MOD_TransferVent_Strait_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C.ExecuteUbergraph_PRE_MOD_TransferVent_Strait_02");
		
		APRE_MOD_TransferVent_Strait_02_C_ExecuteUbergraph_PRE_MOD_TransferVent_Strait_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_MOD_TransferVent_Strait_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_MOD_TransferVent_Strait_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_MOD_TransferVent_Strait_02.PRE_MOD_TransferVent_Strait_02_C");
		return ptr;
	}

}


