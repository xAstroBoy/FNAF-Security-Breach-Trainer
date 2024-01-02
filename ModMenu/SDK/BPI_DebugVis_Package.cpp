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
	 * 		Name   -> Function BPI_DebugVis.BPI_DebugVis_C.DLCRabbitDisplayAlertText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Display                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugVis_C::DLCRabbitDisplayAlertText(bool Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DebugVis.BPI_DebugVis_C.DLCRabbitDisplayAlertText");
		
		UBPI_DebugVis_C_DLCRabbitDisplayAlertText_Params params {};
		params.Display = Display;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugVis.BPI_DebugVis_C.OnDebugVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugVis_C::OnDebugVis(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DebugVis.BPI_DebugVis_C.OnDebugVis");
		
		UBPI_DebugVis_C_OnDebugVis_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_DebugVis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_DebugVis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DebugVis.BPI_DebugVis_C");
		return ptr;
	}

}


