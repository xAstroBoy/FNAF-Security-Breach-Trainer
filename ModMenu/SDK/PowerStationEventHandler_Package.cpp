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
	 * 		Name   -> Function PowerStationEventHandler.PowerStationEventHandler_C.StartPowerStationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APowerStationPlayerInteractible_C*           PowerStationInteract                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPowerStationEventHandler_C::StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationEventHandler.PowerStationEventHandler_C.StartPowerStationEvent");
		
		UPowerStationEventHandler_C_StartPowerStationEvent_Params params {};
		params.PowerStation = PowerStation;
		params.PowerStationInteract = PowerStationInteract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerStationEventHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerStationEventHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationEventHandler.PowerStationEventHandler_C");
		return ptr;
	}

}


