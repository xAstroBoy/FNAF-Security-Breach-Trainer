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
//		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInterpMoveComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.ReceiveTick");

	UInterpMoveComponent_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.Begin Interp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Start_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     End_Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInterpMoveComponent_C::Begin_Interp(const struct FVector& Start_Position, const struct FVector& End_Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.Begin Interp");

	UInterpMoveComponent_C_Begin_Interp_Params params {};
	params.Start_Position = Start_Position;
	params.End_Position = End_Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.ExecuteUbergraph_InterpMoveComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInterpMoveComponent_C::ExecuteUbergraph_InterpMoveComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.ExecuteUbergraph_InterpMoveComponent");

	UInterpMoveComponent_C_ExecuteUbergraph_InterpMoveComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.OnInterpFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInterpMoveComponent_C::OnInterpFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.OnInterpFinished__DelegateSignature");

	UInterpMoveComponent_C_OnInterpFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
