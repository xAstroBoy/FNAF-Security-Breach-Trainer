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
	 * 		Name   -> Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_DaycareAirlock_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.OnPlayerInteract");
		
		APowerStationPlayerInteractible_DaycareAirlock_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_DaycareAirlock_C::ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock");
		
		APowerStationPlayerInteractible_DaycareAirlock_C_ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APowerStationPlayerInteractible_DaycareAirlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APowerStationPlayerInteractible_DaycareAirlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C");
		return ptr;
	}

}


