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
//		Name   -> Function SightDetectionService.SightDetectionService_C.ReceiveActivationAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.ReceiveActivationAI");

	USightDetectionService_C_ReceiveActivationAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.On Sight Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      UpdatedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USightDetectionService_C::On_Sight_Changed(class AActor* UpdatedActor, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.On Sight Changed");

	USightDetectionService_C_On_Sight_Changed_Params params {};
	params.UpdatedActor = UpdatedActor;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.ReceiveDeactivationAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.ReceiveDeactivationAI");

	USightDetectionService_C_ReceiveDeactivationAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.Sight Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             SightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::Sight_Setup(class USightComponent* SightComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.Sight Setup");

	USightDetectionService_C_Sight_Setup_Params params {};
	params.SightComponent = SightComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.Sight Cleanup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             SightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::Sight_Cleanup(class USightComponent* SightComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.Sight Cleanup");

	USightDetectionService_C_Sight_Cleanup_Params params {};
	params.SightComponent = SightComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.ReceiveTickAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.ReceiveTickAI");

	USightDetectionService_C_ReceiveTickAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.Internal Sight Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::Internal_Sight_Setup(class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.Internal Sight Setup");

	USightDetectionService_C_Internal_Sight_Setup_Params params {};
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SightDetectionService.SightDetectionService_C.ExecuteUbergraph_SightDetectionService
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightDetectionService_C::ExecuteUbergraph_SightDetectionService(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightDetectionService.SightDetectionService_C.ExecuteUbergraph_SightDetectionService");

	USightDetectionService_C_ExecuteUbergraph_SightDetectionService_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
