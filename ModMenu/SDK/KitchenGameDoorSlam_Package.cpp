/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "KitchenGameDoorSlam_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function KitchenGameDoorSlam.KitchenGameDoorSlam_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKitchenGameDoorSlam_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KitchenGameDoorSlam.KitchenGameDoorSlam_C.ReceiveExecuteAI");
		
		UKitchenGameDoorSlam_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function KitchenGameDoorSlam.KitchenGameDoorSlam_C.ExecuteUbergraph_KitchenGameDoorSlam
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKitchenGameDoorSlam_C::ExecuteUbergraph_KitchenGameDoorSlam(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KitchenGameDoorSlam.KitchenGameDoorSlam_C.ExecuteUbergraph_KitchenGameDoorSlam");
		
		UKitchenGameDoorSlam_C_ExecuteUbergraph_KitchenGameDoorSlam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKitchenGameDoorSlam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKitchenGameDoorSlam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KitchenGameDoorSlam.KitchenGameDoorSlam_C");
		return ptr;
	}

}


