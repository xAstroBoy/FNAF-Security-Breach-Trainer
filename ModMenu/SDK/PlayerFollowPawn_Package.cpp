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
	 * 		Name   -> Function PlayerFollowPawn.PlayerFollowPawn_C.GetLevelStreamViewpoint
	 * 		Flags  -> ()
	 */
	class ULevelStreamViewpoint* APlayerFollowPawn_C::GetLevelStreamViewpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerFollowPawn.PlayerFollowPawn_C.GetLevelStreamViewpoint");
		
		APlayerFollowPawn_C_GetLevelStreamViewpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerFollowPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerFollowPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerFollowPawn.PlayerFollowPawn_C");
		return ptr;
	}

}


