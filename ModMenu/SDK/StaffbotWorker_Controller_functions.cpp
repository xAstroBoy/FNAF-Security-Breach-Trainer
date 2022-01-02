// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaffbotWorker_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ReceiveBeginPlay");

	AStaffbotWorker_Controller_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.Alert
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStaffbotWorker_Controller_C::Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.Alert");

	AStaffbotWorker_Controller_C_Alert_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ExecuteUbergraph_StaffbotWorker_Controller
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffbotWorker_Controller_C::ExecuteUbergraph_StaffbotWorker_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Controller.StaffbotWorker_Controller_C.ExecuteUbergraph_StaffbotWorker_Controller");

	AStaffbotWorker_Controller_C_ExecuteUbergraph_StaffbotWorker_Controller_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
