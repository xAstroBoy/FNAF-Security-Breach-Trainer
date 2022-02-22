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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMMBPInterface.DJMMBPInterface_C.ThrowObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ThrowL                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDJMMBPInterface_C::ThrowObject(bool ThrowL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMMBPInterface.DJMMBPInterface_C.ThrowObject");
		
		UDJMMBPInterface_C_ThrowObject_Params params {};
		params.ThrowL = ThrowL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMMBPInterface.DJMMBPInterface_C.TubeCanGrab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanGrab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDJMMBPInterface_C::TubeCanGrab(bool CanGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMMBPInterface.DJMMBPInterface_C.TubeCanGrab");
		
		UDJMMBPInterface_C_TubeCanGrab_Params params {};
		params.CanGrab = CanGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMMBPInterface.DJMMBPInterface_C.Jumpscare
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Jumpscare                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDJMMBPInterface_C::Jumpscare(bool Jumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMMBPInterface.DJMMBPInterface_C.Jumpscare");
		
		UDJMMBPInterface_C_Jumpscare_Params params {};
		params.Jumpscare = Jumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMMBPInterface.DJMMBPInterface_C.TubePhase2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPhase2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDJMMBPInterface_C::TubePhase2(bool isPhase2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMMBPInterface.DJMMBPInterface_C.TubePhase2");
		
		UDJMMBPInterface_C_TubePhase2_Params params {};
		params.isPhase2 = isPhase2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMMBPInterface.DJMMBPInterface_C.TubeCanLeave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLeave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDJMMBPInterface_C::TubeCanLeave(bool CanLeave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMMBPInterface.DJMMBPInterface_C.TubeCanLeave");
		
		UDJMMBPInterface_C_TubeCanLeave_Params params {};
		params.CanLeave = CanLeave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDJMMBPInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJMMBPInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DJMMBPInterface.DJMMBPInterface_C");
		return ptr;
	}

}


