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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LoadingGraphic.LoadingGraphic_C.SequenceEvent__ENTRYPOINTLoadingGraphic_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadingGraphic_C::SequenceEvent__ENTRYPOINTLoadingGraphic_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.SequenceEvent__ENTRYPOINTLoadingGraphic_1");
		
		ULoadingGraphic_C_SequenceEvent__ENTRYPOINTLoadingGraphic_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LoadingGraphic.LoadingGraphic_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoadingGraphic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.Construct");
		
		ULoadingGraphic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LoadingGraphic.LoadingGraphic_C.UpdateTip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadingGraphic_C::UpdateTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.UpdateTip");
		
		ULoadingGraphic_C_UpdateTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LoadingGraphic.LoadingGraphic_C.ExecuteUbergraph_LoadingGraphic
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingGraphic_C::ExecuteUbergraph_LoadingGraphic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.ExecuteUbergraph_LoadingGraphic");
		
		ULoadingGraphic_C_ExecuteUbergraph_LoadingGraphic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadingGraphic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingGraphic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadingGraphic.LoadingGraphic_C");
		return ptr;
	}

}


