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
	 * 		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Controller_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ReceiveBeginPlay");
		
		AStaffbotWorker_Controller_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.Alert
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Controller_C::Alert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.Alert");
		
		AStaffbotWorker_Controller_C_Alert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ExecuteUbergraph_StaffbotWorker_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotWorker_Controller_C::ExecuteUbergraph_StaffbotWorker_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ExecuteUbergraph_StaffbotWorker_Controller");
		
		AStaffbotWorker_Controller_C_ExecuteUbergraph_StaffbotWorker_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaffbotWorker_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffbotWorker_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotWorker_Controller.StaffbotWorker_Controller_C");
		return ptr;
	}

}


