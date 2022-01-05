/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "P_RC_GoCart_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_RC_GoCart.P_RC_GoCart_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_RC_GoCart_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_RC_GoCart.P_RC_GoCart_C.ReceiveTick");
		
		AP_RC_GoCart_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_RC_GoCart.P_RC_GoCart_C.ExecuteUbergraph_P_RC_GoCart
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_RC_GoCart_C::ExecuteUbergraph_P_RC_GoCart(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_RC_GoCart.P_RC_GoCart_C.ExecuteUbergraph_P_RC_GoCart");
		
		AP_RC_GoCart_C_ExecuteUbergraph_P_RC_GoCart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AP_RC_GoCart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AP_RC_GoCart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass P_RC_GoCart.P_RC_GoCart_C");
		return ptr;
	}

}


