/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Cinematic_Actor_Base_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Cinematic_Actor_Base.Cinematic_Actor_Base_C.Set Up Materials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACinematic_Actor_Base_C::Set_Up_Materials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Base.Cinematic_Actor_Base_C.Set Up Materials");
		
		ACinematic_Actor_Base_C_Set_Up_Materials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematic_Actor_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_Actor_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Base.Cinematic_Actor_Base_C");
		return ptr;
	}

}


