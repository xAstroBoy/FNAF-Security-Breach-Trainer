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
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.IsMeshVisible
	 * 		Flags  -> ()
	 */
	bool AShatteredChica_C::IsMeshVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.IsMeshVisible");
		
		AShatteredChica_C_IsMeshVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.GetManagedAIType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType AShatteredChica_C::GetManagedAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.GetManagedAIType");
		
		AShatteredChica_C_GetManagedAIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.IsShatteredVersion
	 * 		Flags  -> ()
	 */
	bool AShatteredChica_C::IsShatteredVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.IsShatteredVersion");
		
		AShatteredChica_C_IsShatteredVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.SetCanHeadRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BoolValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShatteredChica_C::SetCanHeadRotate(bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.SetCanHeadRotate");
		
		AShatteredChica_C_SetCanHeadRotate_Params params {};
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.ReceiveBeginPlay");
		
		AShatteredChica_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.ReceiveTick");
		
		AShatteredChica_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Break Through Wall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::BreakThroughWall(const struct FVector& StartPosition, const struct FVector& EndPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Break Through Wall");
		
		AShatteredChica_C_BreakThroughWall_Params params {};
		params.StartPosition = StartPosition;
		params.EndPosition = EndPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature");
		
		AShatteredChica_C_BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.On Head Spin Time
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::OnHeadSpinTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.On Head Spin Time");
		
		AShatteredChica_C_OnHeadSpinTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Stun
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::Stun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Stun");
		
		AShatteredChica_C_Stun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Unstun
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::Unstun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Unstun");
		
		AShatteredChica_C_Unstun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.OnBreakThroughWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::OnBreakThroughWall(const struct FVector& StartPosition, const struct FVector& EndPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.OnBreakThroughWall");
		
		AShatteredChica_C_OnBreakThroughWall_Params params {};
		params.StartPosition = StartPosition;
		params.EndPosition = EndPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Start Head Spin Timer
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::StartHeadSpinTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Start Head Spin Timer");
		
		AShatteredChica_C_StartHeadSpinTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Stop Head Spin Timer
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::StopHeadSpinTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Stop Head Spin Timer");
		
		AShatteredChica_C_StopHeadSpinTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Spin Head
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::SpinHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Spin Head");
		
		AShatteredChica_C_SpinHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Stop Head Spin
	 * 		Flags  -> ()
	 */
	void AShatteredChica_C::StopHeadSpin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Stop Head Spin");
		
		AShatteredChica_C_StopHeadSpin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ExecuteUbergraph_ShatteredChica
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::ExecuteUbergraph_ShatteredChica(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.ExecuteUbergraph_ShatteredChica");
		
		AShatteredChica_C_ExecuteUbergraph_ShatteredChica_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShatteredChica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShatteredChica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChica.ShatteredChica_C");
		return ptr;
	}

}


