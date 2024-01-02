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
	 * 		Name   -> Function BPI_SecurityNodeChild.BPI_SecurityNodeChild_C.CanZap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanZap                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SecurityNodeChild_C::CanZap(bool* CanZap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SecurityNodeChild.BPI_SecurityNodeChild_C.CanZap");
		
		UBPI_SecurityNodeChild_C_CanZap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanZap != nullptr)
			*CanZap = params.CanZap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SecurityNodeChild.BPI_SecurityNodeChild_C.AutoReveal
	 * 		Flags  -> ()
	 */
	void UBPI_SecurityNodeChild_C::AutoReveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SecurityNodeChild.BPI_SecurityNodeChild_C.AutoReveal");
		
		UBPI_SecurityNodeChild_C_AutoReveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SecurityNodeChild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SecurityNodeChild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SecurityNodeChild.BPI_SecurityNodeChild_C");
		return ptr;
	}

}


