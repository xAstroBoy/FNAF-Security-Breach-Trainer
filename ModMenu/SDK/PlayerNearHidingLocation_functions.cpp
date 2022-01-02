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
//		Name   -> Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.CheckPlayerInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UPlayerNearHidingLocation_C::CheckPlayerInRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.CheckPlayerInRange");

	UPlayerNearHidingLocation_C_CheckPlayerInRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ReceiveTickAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerNearHidingLocation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ReceiveTickAI");

	UPlayerNearHidingLocation_C_ReceiveTickAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ReceiveActivationAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerNearHidingLocation_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ReceiveActivationAI");

	UPlayerNearHidingLocation_C_ReceiveActivationAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ExecuteUbergraph_PlayerNearHidingLocation
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerNearHidingLocation_C::ExecuteUbergraph_PlayerNearHidingLocation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerNearHidingLocation.PlayerNearHidingLocation_C.ExecuteUbergraph_PlayerNearHidingLocation");

	UPlayerNearHidingLocation_C_ExecuteUbergraph_PlayerNearHidingLocation_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
