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
	 * 		Name   -> Function ChicaGreenroomVentTrigger.ChicaGreenroomVentTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChicaGreenroomVentTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomVentTrigger.ChicaGreenroomVentTrigger_C.OnTriggered");
		
		AChicaGreenroomVentTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomVentTrigger.ChicaGreenroomVentTrigger_C.ExecuteUbergraph_ChicaGreenroomVentTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaGreenroomVentTrigger_C::ExecuteUbergraph_ChicaGreenroomVentTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomVentTrigger.ChicaGreenroomVentTrigger_C.ExecuteUbergraph_ChicaGreenroomVentTrigger");
		
		AChicaGreenroomVentTrigger_C_ExecuteUbergraph_ChicaGreenroomVentTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaGreenroomVentTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaGreenroomVentTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaGreenroomVentTrigger.ChicaGreenroomVentTrigger_C");
		return ptr;
	}

}


