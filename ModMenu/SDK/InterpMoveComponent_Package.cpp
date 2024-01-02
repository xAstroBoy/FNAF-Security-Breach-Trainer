/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterpMoveComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.ReceiveTick");
		
		UInterpMoveComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.Begin Interp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterpMoveComponent_C::BeginInterp(const struct FVector& StartPosition, const struct FVector& EndPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.Begin Interp");
		
		UInterpMoveComponent_C_BeginInterp_Params params {};
		params.StartPosition = StartPosition;
		params.EndPosition = EndPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.ExecuteUbergraph_InterpMoveComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterpMoveComponent_C::ExecuteUbergraph_InterpMoveComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.ExecuteUbergraph_InterpMoveComponent");
		
		UInterpMoveComponent_C_ExecuteUbergraph_InterpMoveComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InterpMoveComponent.InterpMoveComponent_C.OnInterpFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInterpMoveComponent_C::OnInterpFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InterpMoveComponent.InterpMoveComponent_C.OnInterpFinished__DelegateSignature");
		
		UInterpMoveComponent_C_OnInterpFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpMoveComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpMoveComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InterpMoveComponent.InterpMoveComponent_C");
		return ptr;
	}

}


