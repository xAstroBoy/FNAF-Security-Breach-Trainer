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
	 * 		Name   -> Function Hour5PowerStationEvent.Hour5PowerStationEvent_C.StartPowerStationEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APowerStationPlayerInteractible_C*           PowerStationInteract                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHour5PowerStationEvent_C::StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hour5PowerStationEvent.Hour5PowerStationEvent_C.StartPowerStationEvent");
		
		AHour5PowerStationEvent_C_StartPowerStationEvent_Params params {};
		params.PowerStation = PowerStation;
		params.PowerStationInteract = PowerStationInteract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Hour5PowerStationEvent.Hour5PowerStationEvent_C.ExecuteUbergraph_Hour5PowerStationEvent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHour5PowerStationEvent_C::ExecuteUbergraph_Hour5PowerStationEvent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hour5PowerStationEvent.Hour5PowerStationEvent_C.ExecuteUbergraph_Hour5PowerStationEvent");
		
		AHour5PowerStationEvent_C_ExecuteUbergraph_Hour5PowerStationEvent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AHour5PowerStationEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHour5PowerStationEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hour5PowerStationEvent.Hour5PowerStationEvent_C");
		return ptr;
	}

}


