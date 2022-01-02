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
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.CanDeactivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGatorHeadScare_C::CanDeactivate(bool* CanDeactivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.CanDeactivate");

	AGatorHeadScare_C_CanDeactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.GetActivatableState");

	AGatorHeadScare_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.CanActivate");

	AGatorHeadScare_C_CanActivate_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.OnActivatorDone");

	AGatorHeadScare_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AGatorHeadScare_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.SetActivated");

	AGatorHeadScare_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.DeactivateObject");

	AGatorHeadScare_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AGatorHeadScare_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.SetDeactivated");

	AGatorHeadScare_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.BndEvt__PawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AGatorHeadScare_C::BndEvt__PawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.BndEvt__PawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AGatorHeadScare_C_BndEvt__PawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.Trigger Gator Head
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorHeadScare_C::Trigger_Gator_Head()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.Trigger Gator Head");

	AGatorHeadScare_C_Trigger_Gator_Head_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.ActivateObject");

	AGatorHeadScare_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorHeadScare.GatorHeadScare_C.ExecuteUbergraph_GatorHeadScare
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorHeadScare_C::ExecuteUbergraph_GatorHeadScare(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorHeadScare.GatorHeadScare_C.ExecuteUbergraph_GatorHeadScare");

	AGatorHeadScare_C_ExecuteUbergraph_GatorHeadScare_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
