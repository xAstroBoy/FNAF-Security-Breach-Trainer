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
	 * 		Name   -> Function BridgeBP.BridgeBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABridgeBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BridgeBP.BridgeBP_C.ReceiveBeginPlay");
		
		ABridgeBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BridgeBP.BridgeBP_C.PlayBridge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABridgeBP_C::PlayBridge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BridgeBP.BridgeBP_C.PlayBridge");
		
		ABridgeBP_C_PlayBridge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BridgeBP.BridgeBP_C.ReverseBridge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABridgeBP_C::ReverseBridge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BridgeBP.BridgeBP_C.ReverseBridge");
		
		ABridgeBP_C_ReverseBridge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BridgeBP.BridgeBP_C.ExecuteUbergraph_BridgeBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABridgeBP_C::ExecuteUbergraph_BridgeBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BridgeBP.BridgeBP_C.ExecuteUbergraph_BridgeBP");
		
		ABridgeBP_C_ExecuteUbergraph_BridgeBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABridgeBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABridgeBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BridgeBP.BridgeBP_C");
		return ptr;
	}

}


