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
//		Name   -> Function PlayerInViewService.PlayerInViewService_C.ReceiveTickAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInViewService_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerInViewService.PlayerInViewService_C.ReceiveTickAI");

	UPlayerInViewService_C_ReceiveTickAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerInViewService.PlayerInViewService_C.Sight Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             SightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInViewService_C::Sight_Setup(class USightComponent* SightComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerInViewService.PlayerInViewService_C.Sight Setup");

	UPlayerInViewService_C_Sight_Setup_Params params {};
	params.SightComponent = SightComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerInViewService.PlayerInViewService_C.On Sight Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      UpdatedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerInViewService_C::On_Sight_Changed(class AActor* UpdatedActor, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerInViewService.PlayerInViewService_C.On Sight Changed");

	UPlayerInViewService_C_On_Sight_Changed_Params params {};
	params.UpdatedActor = UpdatedActor;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerInViewService.PlayerInViewService_C.Sight Cleanup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             SightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInViewService_C::Sight_Cleanup(class USightComponent* SightComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerInViewService.PlayerInViewService_C.Sight Cleanup");

	UPlayerInViewService_C_Sight_Cleanup_Params params {};
	params.SightComponent = SightComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerInViewService.PlayerInViewService_C.ExecuteUbergraph_PlayerInViewService
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInViewService_C::ExecuteUbergraph_PlayerInViewService(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerInViewService.PlayerInViewService_C.ExecuteUbergraph_PlayerInViewService");

	UPlayerInViewService_C_ExecuteUbergraph_PlayerInViewService_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
