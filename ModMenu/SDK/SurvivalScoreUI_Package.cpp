/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SurvivalScoreUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.ExecuteUbergraph_SurvivalScoreUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvivalScoreUI_C::ExecuteUbergraph_SurvivalScoreUI(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivalScoreUI_C.StaticClass
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


