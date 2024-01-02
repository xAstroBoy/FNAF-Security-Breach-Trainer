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
	 * 		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.Construct
	 * 		Flags  -> ()
	 */
	void USurvivalScoreUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalScoreUI.SurvivalScoreUI_C.Construct");
		
		USurvivalScoreUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.ExecuteUbergraph_SurvivalScoreUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvivalScoreUI_C::ExecuteUbergraph_SurvivalScoreUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalScoreUI.SurvivalScoreUI_C.ExecuteUbergraph_SurvivalScoreUI");
		
		USurvivalScoreUI_C_ExecuteUbergraph_SurvivalScoreUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivalScoreUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivalScoreUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivalScoreUI.SurvivalScoreUI_C");
		return ptr;
	}

}


