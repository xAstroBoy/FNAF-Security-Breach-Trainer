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
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ModelSwap_Func
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AStaffBotWorker_SplineFollower_C*            StaffBot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AStaffbotTaskPlacement_C*                    TaskPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffbotWorker_Manager_Base_C::ModelSwap_Func(class AStaffBotWorker_SplineFollower_C* StaffBot, class AStaffbotTaskPlacement_C* TaskPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ModelSwap_Func");

	AStaffbotWorker_Manager_Base_C_ModelSwap_Func_Params params {};
	params.StaffBot = StaffBot;
	params.TaskPoint = TaskPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AStaffbotWorker_Manager_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.UserConstructionScript");

	AStaffbotWorker_Manager_Base_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaffbotWorker_Manager_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveBeginPlay");

	AStaffbotWorker_Manager_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffbotWorker_Manager_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveTick");

	AStaffbotWorker_Manager_Base_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.HasJumpscared
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStaffbotWorker_Manager_Base_C::HasJumpscared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.HasJumpscared");

	AStaffbotWorker_Manager_Base_C_HasJumpscared_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.Reset Jumpscare
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStaffbotWorker_Manager_Base_C::Reset_Jumpscare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.Reset Jumpscare");

	AStaffbotWorker_Manager_Base_C_Reset_Jumpscare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ExecuteUbergraph_StaffbotWorker_Manager_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffbotWorker_Manager_Base_C::ExecuteUbergraph_StaffbotWorker_Manager_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ExecuteUbergraph_StaffbotWorker_Manager_Base");

	AStaffbotWorker_Manager_Base_C_ExecuteUbergraph_StaffbotWorker_Manager_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
