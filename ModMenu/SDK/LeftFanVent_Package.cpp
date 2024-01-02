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
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.Rotation__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::Rotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.Rotation__FinishedFunc");
		
		ALeftFanVent_C_Rotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.Rotation__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::Rotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.Rotation__UpdateFunc");
		
		ALeftFanVent_C_Rotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.StopEmitter
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.StopEmitter");
		
		ALeftFanVent_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.PlayEmitter
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.PlayEmitter");
		
		ALeftFanVent_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.ReceiveBeginPlay");
		
		ALeftFanVent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.Repeat
	 * 		Flags  -> ()
	 */
	void ALeftFanVent_C::Repeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.Repeat");
		
		ALeftFanVent_C_Repeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.ToggleInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeftFanVent_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.ToggleInRange");
		
		ALeftFanVent_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftFanVent.LeftFanVent_C.ExecuteUbergraph_LeftFanVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALeftFanVent_C::ExecuteUbergraph_LeftFanVent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFanVent.LeftFanVent_C.ExecuteUbergraph_LeftFanVent");
		
		ALeftFanVent_C_ExecuteUbergraph_LeftFanVent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeftFanVent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeftFanVent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeftFanVent.LeftFanVent_C");
		return ptr;
	}

}


