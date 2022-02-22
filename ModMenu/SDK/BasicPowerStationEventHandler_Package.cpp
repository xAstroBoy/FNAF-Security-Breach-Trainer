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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.StartPowerStationEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APowerStationPlayerInteractible_C*           PowerStationInteract                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasicPowerStationEventHandler_C::StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.StartPowerStationEvent");
		
		ABasicPowerStationEventHandler_C_StartPowerStationEvent_Params params {};
		params.PowerStation = PowerStation;
		params.PowerStationInteract = PowerStationInteract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.ExecuteUbergraph_BasicPowerStationEventHandler
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasicPowerStationEventHandler_C::ExecuteUbergraph_BasicPowerStationEventHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.ExecuteUbergraph_BasicPowerStationEventHandler");
		
		ABasicPowerStationEventHandler_C_ExecuteUbergraph_BasicPowerStationEventHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABasicPowerStationEventHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasicPowerStationEventHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasicPowerStationEventHandler.BasicPowerStationEventHandler_C");
		return ptr;
	}

}


