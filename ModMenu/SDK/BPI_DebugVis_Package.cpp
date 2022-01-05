/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BPI_DebugVis_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BPI_DebugVis.BPI_DebugVis_C.OnDebugVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_DebugVis_C.StaticClass
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


