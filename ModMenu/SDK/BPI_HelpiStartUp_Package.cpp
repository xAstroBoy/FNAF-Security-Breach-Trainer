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
	 * 		Name   -> Function BPI_HelpiStartUp.BPI_HelpiStartUp_C.DisableStartUpMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DisableHelpiStartup                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_HelpiStartUp_C::DisableStartUpMessages(bool DisableHelpiStartup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HelpiStartUp.BPI_HelpiStartUp_C.DisableStartUpMessages");
		
		UBPI_HelpiStartUp_C_DisableStartUpMessages_Params params {};
		params.DisableHelpiStartup = DisableHelpiStartup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_HelpiStartUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_HelpiStartUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HelpiStartUp.BPI_HelpiStartUp_C");
		return ptr;
	}

}


