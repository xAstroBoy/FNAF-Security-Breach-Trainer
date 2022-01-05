/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EastArcadeTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EastArcadeTrigger.EastArcadeTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEastArcadeTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EastArcadeTrigger.EastArcadeTrigger_C.OnTriggered");
		
		AEastArcadeTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EastArcadeTrigger.EastArcadeTrigger_C.ExecuteUbergraph_EastArcadeTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEastArcadeTrigger_C::ExecuteUbergraph_EastArcadeTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EastArcadeTrigger.EastArcadeTrigger_C.ExecuteUbergraph_EastArcadeTrigger");
		
		AEastArcadeTrigger_C_ExecuteUbergraph_EastArcadeTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEastArcadeTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEastArcadeTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EastArcadeTrigger.EastArcadeTrigger_C");
		return ptr;
	}

}


