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
//		Name   -> Function StaminaComponent.StaminaComponent_C.GetStaminaRefillRate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UStaminaComponent_C::GetStaminaRefillRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetStaminaRefillRate");

	UStaminaComponent_C_GetStaminaRefillRate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.GetMaxStamina
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UStaminaComponent_C::GetMaxStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetMaxStamina");

	UStaminaComponent_C_GetMaxStamina_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.GetStaminaPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              StaminaPercentage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaminaComponent_C::GetStaminaPercentage(float* StaminaPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.GetStaminaPercentage");

	UStaminaComponent_C_GetStaminaPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaminaPercentage != nullptr)
		*StaminaPercentage = params.StaminaPercentage;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.CanUseStamina
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UStaminaComponent_C::CanUseStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.CanUseStamina");

	UStaminaComponent_C_CanUseStamina_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UStaminaComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ReceiveBeginPlay");

	UStaminaComponent_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaminaComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ReceiveTick");

	UStaminaComponent_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.Start Using Stamina
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UStaminaComponent_C::Start_Using_Stamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.Start Using Stamina");

	UStaminaComponent_C_Start_Using_Stamina_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.Stop Using Stamina
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UStaminaComponent_C::Stop_Using_Stamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.Stop Using Stamina");

	UStaminaComponent_C_Stop_Using_Stamina_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.ExecuteUbergraph_StaminaComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaminaComponent_C::ExecuteUbergraph_StaminaComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.ExecuteUbergraph_StaminaComponent");

	UStaminaComponent_C_ExecuteUbergraph_StaminaComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.OnStaminaReplenished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStaminaComponent_C::OnStaminaReplenished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.OnStaminaReplenished__DelegateSignature");

	UStaminaComponent_C_OnStaminaReplenished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaminaComponent.StaminaComponent_C.OnStaminaDepleted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStaminaComponent_C::OnStaminaDepleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaminaComponent.StaminaComponent_C.OnStaminaDepleted__DelegateSignature");

	UStaminaComponent_C_OnStaminaDepleted__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
