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
	 * 		Name   -> Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ResetCredits
	 * 		Flags  -> ()
	 */
	void UWI_RollingCredits_Ruin_C::ResetCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ResetCredits");
		
		UWI_RollingCredits_Ruin_C_ResetCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_RollingCredits_Ruin_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.Tick");
		
		UWI_RollingCredits_Ruin_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ExecuteUbergraph_WI_RollingCredits_Ruin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_RollingCredits_Ruin_C::ExecuteUbergraph_WI_RollingCredits_Ruin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ExecuteUbergraph_WI_RollingCredits_Ruin");
		
		UWI_RollingCredits_Ruin_C_ExecuteUbergraph_WI_RollingCredits_Ruin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_RollingCredits_Ruin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_RollingCredits_Ruin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C");
		return ptr;
	}

}


