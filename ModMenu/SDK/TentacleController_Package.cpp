/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "TentacleController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.FindClosestTentacle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APRE_Ventilation_BustOpen_C*                 Closest_Tentacle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATentacleController_C::FindClosestTentacle(class APRE_Ventilation_BustOpen_C** Closest_Tentacle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.FindClosestTentacle");
		
		ATentacleController_C_FindClosestTentacle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Closest_Tentacle != nullptr)
			*Closest_Tentacle = params.Closest_Tentacle;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacleController_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.SetActivated");
		
		ATentacleController_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.On Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacleController_C::On_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.On Activate");
		
		ATentacleController_C_On_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.Activate Tentacle Closest To Player
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacleController_C::Activate_Tentacle_Closest_To_Player()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.Activate Tentacle Closest To Player");
		
		ATentacleController_C_Activate_Tentacle_Closest_To_Player_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.SetDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacleController_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.SetDeactivated");
		
		ATentacleController_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TentacleController.TentacleController_C.ExecuteUbergraph_TentacleController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATentacleController_C::ExecuteUbergraph_TentacleController(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TentacleController.TentacleController_C.ExecuteUbergraph_TentacleController");
		
		ATentacleController_C_ExecuteUbergraph_TentacleController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATentacleController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATentacleController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TentacleController.TentacleController_C");
		return ptr;
	}

}


