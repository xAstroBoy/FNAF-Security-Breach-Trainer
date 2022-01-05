/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Pre_Speaker_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Pre_Speaker.Pre_Speaker_C.PlaySound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APre_Speaker_C::PlaySound(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pre_Speaker.Pre_Speaker_C.PlaySound");
		
		APre_Speaker_C_PlaySound_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Pre_Speaker.Pre_Speaker_C.ExecuteUbergraph_Pre_Speaker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APre_Speaker_C::ExecuteUbergraph_Pre_Speaker(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pre_Speaker.Pre_Speaker_C.ExecuteUbergraph_Pre_Speaker");
		
		APre_Speaker_C_ExecuteUbergraph_Pre_Speaker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APre_Speaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APre_Speaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pre_Speaker.Pre_Speaker_C");
		return ptr;
	}

}


