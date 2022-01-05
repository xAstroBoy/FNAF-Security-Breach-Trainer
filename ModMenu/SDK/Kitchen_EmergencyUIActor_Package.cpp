/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Kitchen_EmergencyUIActor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.GetUIWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UKitchen_EmergencyUI_C*                      AsKitchenEmergencyUI                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKitchen_EmergencyUIActor_C::GetUIWidget(class UKitchen_EmergencyUI_C** AsKitchenEmergencyUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.GetUIWidget");
		
		AKitchen_EmergencyUIActor_C_GetUIWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsKitchenEmergencyUI != nullptr)
			*AsKitchenEmergencyUI = params.AsKitchenEmergencyUI;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.PlayEmergencyText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKitchen_EmergencyUIActor_C::PlayEmergencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.PlayEmergencyText");
		
		AKitchen_EmergencyUIActor_C_PlayEmergencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.ExecuteUbergraph_Kitchen_EmergencyUIActor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKitchen_EmergencyUIActor_C::ExecuteUbergraph_Kitchen_EmergencyUIActor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.ExecuteUbergraph_Kitchen_EmergencyUIActor");
		
		AKitchen_EmergencyUIActor_C_ExecuteUbergraph_Kitchen_EmergencyUIActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AKitchen_EmergencyUIActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKitchen_EmergencyUIActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C");
		return ptr;
	}

}


