/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ActivatableTeleport_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableTeleport_BP.ActivatableTeleport_BP_C.On Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AActivatableTeleport_BP_C::On_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableTeleport_BP.ActivatableTeleport_BP_C.On Activate");
		
		AActivatableTeleport_BP_C_On_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ActivatableTeleport_BP.ActivatableTeleport_BP_C.ExecuteUbergraph_ActivatableTeleport_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AActivatableTeleport_BP_C::ExecuteUbergraph_ActivatableTeleport_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActivatableTeleport_BP.ActivatableTeleport_BP_C.ExecuteUbergraph_ActivatableTeleport_BP");
		
		AActivatableTeleport_BP_C_ExecuteUbergraph_ActivatableTeleport_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AActivatableTeleport_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActivatableTeleport_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableTeleport_BP.ActivatableTeleport_BP_C");
		return ptr;
	}

}


