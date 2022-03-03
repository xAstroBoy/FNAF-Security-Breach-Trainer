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
	 * 		Name   -> Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.GetUIWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPrizeCounterEmergencyUI_C*                  AsPrizeCounterEmergencyUI                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrizeCounter_EmergencyUIActor_C::GetUIWidget(class UPrizeCounterEmergencyUI_C** AsPrizeCounterEmergencyUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.GetUIWidget");
		
		APrizeCounter_EmergencyUIActor_C_GetUIWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPrizeCounterEmergencyUI != nullptr)
			*AsPrizeCounterEmergencyUI = params.AsPrizeCounterEmergencyUI;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.PlayEmergencyText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrizeCounter_EmergencyUIActor_C::PlayEmergencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.PlayEmergencyText");
		
		APrizeCounter_EmergencyUIActor_C_PlayEmergencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.ExecuteUbergraph_PrizeCounter_EmergencyUIActor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrizeCounter_EmergencyUIActor_C::ExecuteUbergraph_PrizeCounter_EmergencyUIActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.ExecuteUbergraph_PrizeCounter_EmergencyUIActor");
		
		APrizeCounter_EmergencyUIActor_C_ExecuteUbergraph_PrizeCounter_EmergencyUIActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrizeCounter_EmergencyUIActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeCounter_EmergencyUIActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C");
		return ptr;
	}

}


