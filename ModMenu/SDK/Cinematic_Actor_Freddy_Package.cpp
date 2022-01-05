/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Cinematic_Actor_Freddy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACinematic_Actor_Freddy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ReceiveBeginPlay");
		
		ACinematic_Actor_Freddy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ExecuteUbergraph_Cinematic_Actor_Freddy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematic_Actor_Freddy_C::ExecuteUbergraph_Cinematic_Actor_Freddy(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ExecuteUbergraph_Cinematic_Actor_Freddy");
		
		ACinematic_Actor_Freddy_C_ExecuteUbergraph_Cinematic_Actor_Freddy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematic_Actor_Freddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_Actor_Freddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C");
		return ptr;
	}

}


