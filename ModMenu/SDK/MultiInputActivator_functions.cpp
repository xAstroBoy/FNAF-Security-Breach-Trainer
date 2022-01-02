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
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                NumberActivated                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::GetNumberActivated(int* NumberActivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated");

	AMultiInputActivator_C_GetNumberActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberActivated != nullptr)
		*NumberActivated = params.NumberActivated;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               AllOn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::CheckAllActivatorsOn(bool* AllOn, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn");

	AMultiInputActivator_C_CheckAllActivatorsOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllOn != nullptr)
		*AllOn = params.AllOn;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMultiInputActivator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay");

	AMultiInputActivator_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ActivateObject");

	AMultiInputActivator_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.DeactivateObject");

	AMultiInputActivator_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMultiInputActivator_C::Deactivate_Inputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs");

	AMultiInputActivator_C_Deactivate_Inputs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::ExecuteUbergraph_MultiInputActivator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator");

	AMultiInputActivator_C_ExecuteUbergraph_MultiInputActivator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::OnCanActivate__DelegateSignature(int Count, class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature");

	AMultiInputActivator_C_OnCanActivate__DelegateSignature_Params params {};
	params.Count = Count;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiInputActivator_C::OnCantActivate__DelegateSignature(int Count, class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature");

	AMultiInputActivator_C_OnCantActivate__DelegateSignature_Params params {};
	params.Count = Count;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
