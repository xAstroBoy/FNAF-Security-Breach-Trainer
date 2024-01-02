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
	 * 		Name   -> Function EndVO.EndVO_C.StayVO
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndVO.EndVO_C.VannyVO
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndVO.EndVO_C.StayVONoPartyPass
	 * 		Flags  -> ()
	 */
	void AEndVO_C::StayVONoPartyPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.StayVONoPartyPass");
		
		AEndVO_C_StayVONoPartyPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndVO.EndVO_C.ExecuteUbergraph_EndVO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEndVO_C::ExecuteUbergraph_EndVO(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndVO.EndVO_C.OnStayVoFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEndVO_C::OnStayVoFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.OnStayVoFinished__DelegateSignature");
		
		AEndVO_C_OnStayVoFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEndVO_C.StaticClass
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


