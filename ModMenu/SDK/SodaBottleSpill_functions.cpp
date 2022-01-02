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
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.CanDeactivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASodaBottleSpill_C::CanDeactivate(bool* CanDeactivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.CanDeactivate");

	ASodaBottleSpill_C_CanDeactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.GetActivatableState");

	ASodaBottleSpill_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.CanActivate");

	ASodaBottleSpill_C_CanActivate_Params params {};
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
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.Shootbottle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ASodaBottleSpill_C::Shootbottle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.Shootbottle");

	ASodaBottleSpill_C_Shootbottle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.OnActivatorDone");

	ASodaBottleSpill_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASodaBottleSpill_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.SetActivated");

	ASodaBottleSpill_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.DeactivateObject");

	ASodaBottleSpill_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASodaBottleSpill_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.SetDeactivated");

	ASodaBottleSpill_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.ActivateObject");

	ASodaBottleSpill_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SodaBottleSpill.SodaBottleSpill_C.ExecuteUbergraph_SodaBottleSpill
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASodaBottleSpill_C::ExecuteUbergraph_SodaBottleSpill(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SodaBottleSpill.SodaBottleSpill_C.ExecuteUbergraph_SodaBottleSpill");

	ASodaBottleSpill_C_ExecuteUbergraph_SodaBottleSpill_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
