/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaintenanceInteractableInterface_C::IsActivated(bool* Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsActivated");
		
		UMaintenanceInteractableInterface_C_IsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Off != nullptr)
			*Off = params.Off;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsMaintenanceInteractable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaintenanceInteractable                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaintenanceInteractableInterface_C::IsMaintenanceInteractable(bool* IsMaintenanceInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsMaintenanceInteractable");
		
		UMaintenanceInteractableInterface_C_IsMaintenanceInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMaintenanceInteractable != nullptr)
			*IsMaintenanceInteractable = params.IsMaintenanceInteractable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaintenanceInteractableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaintenanceInteractableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MaintenanceInteractableInterface.MaintenanceInteractableInterface_C");
		return ptr;
	}

}


