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
	 * 		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AScreenStaticSwitcher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ReceiveBeginPlay");
		
		AScreenStaticSwitcher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.Update
	 * 		Flags  -> ()
	 */
	void AScreenStaticSwitcher_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.Update");
		
		AScreenStaticSwitcher_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ExecuteUbergraph_ScreenStaticSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScreenStaticSwitcher_C::ExecuteUbergraph_ScreenStaticSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ExecuteUbergraph_ScreenStaticSwitcher");
		
		AScreenStaticSwitcher_C_ExecuteUbergraph_ScreenStaticSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScreenStaticSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScreenStaticSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScreenStaticSwitcher.ScreenStaticSwitcher_C");
		return ptr;
	}

}


