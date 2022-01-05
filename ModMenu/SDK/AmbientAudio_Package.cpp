/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AmbientAudio_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AmbientAudio.AmbientAudio_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAmbientAudio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudio_C.ReceiveBeginPlay");
		
		UAmbientAudio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AmbientAudio.AmbientAudio_C.PlaySound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAmbientAudio_C::PlaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudio_C.PlaySound");
		
		UAmbientAudio_C_PlaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AmbientAudio.AmbientAudio_C.ExecuteUbergraph_AmbientAudio
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAmbientAudio_C::ExecuteUbergraph_AmbientAudio(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudio_C.ExecuteUbergraph_AmbientAudio");
		
		UAmbientAudio_C_ExecuteUbergraph_AmbientAudio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAmbientAudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientAudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmbientAudio.AmbientAudio_C");
		return ptr;
	}

}


