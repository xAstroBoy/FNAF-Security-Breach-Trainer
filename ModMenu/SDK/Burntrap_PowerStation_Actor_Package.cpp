/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Burntrap_PowerStation_Actor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABurntrap_PowerStation_Actor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ReceiveBeginPlay");
		
		ABurntrap_PowerStation_Actor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ExecuteUbergraph_Burntrap_PowerStation_Actor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABurntrap_PowerStation_Actor_C::ExecuteUbergraph_Burntrap_PowerStation_Actor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ExecuteUbergraph_Burntrap_PowerStation_Actor");
		
		ABurntrap_PowerStation_Actor_C_ExecuteUbergraph_Burntrap_PowerStation_Actor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABurntrap_PowerStation_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABurntrap_PowerStation_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C");
		return ptr;
	}

}


