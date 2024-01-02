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
	 * 		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ExecuteUbergraph_Cinematic_Actor_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematic_Actor_Freddy_C::ExecuteUbergraph_Cinematic_Actor_Freddy(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACinematic_Actor_Freddy_C.StaticClass
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


