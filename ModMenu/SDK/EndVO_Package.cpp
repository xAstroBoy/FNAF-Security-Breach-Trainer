/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EndVO_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EndVO.EndVO_C.StayVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEndVO_C::StayVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.StayVO");
		
		AEndVO_C_StayVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EndVO.EndVO_C.VannyVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEndVO_C::VannyVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.VannyVO");
		
		AEndVO_C_VannyVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EndVO.EndVO_C.ExecuteUbergraph_EndVO
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEndVO_C::ExecuteUbergraph_EndVO(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.ExecuteUbergraph_EndVO");
		
		AEndVO_C_ExecuteUbergraph_EndVO_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEndVO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEndVO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndVO.EndVO_C");
		return ptr;
	}

}


