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
	 * 		Name   -> Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.Construct
	 * 		Flags  -> ()
	 */
	void UStreamingLoadingGraphic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.Construct");
		
		UStreamingLoadingGraphic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStreamingLoadingGraphic_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.PreConstruct");
		
		UStreamingLoadingGraphic_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.ExecuteUbergraph_StreamingLoadingGraphic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStreamingLoadingGraphic_C::ExecuteUbergraph_StreamingLoadingGraphic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.ExecuteUbergraph_StreamingLoadingGraphic");
		
		UStreamingLoadingGraphic_C_ExecuteUbergraph_StreamingLoadingGraphic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamingLoadingGraphic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamingLoadingGraphic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StreamingLoadingGraphic.StreamingLoadingGraphic_C");
		return ptr;
	}

}


