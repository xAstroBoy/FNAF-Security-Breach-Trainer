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
//		Name   -> Function FountainSpill.FountainSpill_C.CanDeactivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFountainSpill_C::CanDeactivate(bool* CanDeactivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.CanDeactivate");

	AFountainSpill_C_CanDeactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.GetActivatableState");

	AFountainSpill_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.CanActivate");

	AFountainSpill_C_CanActivate_Params params {};
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
//		Name   -> Function FountainSpill.FountainSpill_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.OnActivatorDone");

	AFountainSpill_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFountainSpill_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.SetActivated");

	AFountainSpill_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.DeactivateObject");

	AFountainSpill_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFountainSpill_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.SetDeactivated");

	AFountainSpill_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.ActivateObject");

	AFountainSpill_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FountainSpill.FountainSpill_C.ExecuteUbergraph_FountainSpill
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFountainSpill_C::ExecuteUbergraph_FountainSpill(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FountainSpill.FountainSpill_C.ExecuteUbergraph_FountainSpill");

	AFountainSpill_C_ExecuteUbergraph_FountainSpill_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
