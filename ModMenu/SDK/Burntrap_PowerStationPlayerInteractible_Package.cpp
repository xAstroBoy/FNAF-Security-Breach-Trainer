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
	 * 		Name   -> Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABurntrap_PowerStationPlayerInteractible_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.OnPlayerInteract");
		
		ABurntrap_PowerStationPlayerInteractible_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABurntrap_PowerStationPlayerInteractible_C::ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible");
		
		ABurntrap_PowerStationPlayerInteractible_C_ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABurntrap_PowerStationPlayerInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABurntrap_PowerStationPlayerInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C");
		return ptr;
	}

}


