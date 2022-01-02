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
//		Name   -> Function BasePatrolController.BasePatrolController_C.CompleteSenses
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FAIStimulus>                         Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABasePatrolController_C::CompleteSenses(TArray<struct FAIStimulus>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolController.BasePatrolController_C.CompleteSenses");

	ABasePatrolController_C_CompleteSenses_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolController.BasePatrolController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABasePatrolController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolController.BasePatrolController_C.ReceiveBeginPlay");

	ABasePatrolController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolController.BasePatrolController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              UpdatedActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABasePatrolController_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolController.BasePatrolController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature");

	ABasePatrolController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature_Params params {};
	params.UpdatedActors = UpdatedActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolController.BasePatrolController_C.SecurityCameraAlert
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePatrolController_C::SecurityCameraAlert(class ASecurityCamera* SecurityCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolController.BasePatrolController_C.SecurityCameraAlert");

	ABasePatrolController_C_SecurityCameraAlert_Params params {};
	params.SecurityCamera = SecurityCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolController.BasePatrolController_C.ExecuteUbergraph_BasePatrolController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePatrolController_C::ExecuteUbergraph_BasePatrolController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolController.BasePatrolController_C.ExecuteUbergraph_BasePatrolController");

	ABasePatrolController_C_ExecuteUbergraph_BasePatrolController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
