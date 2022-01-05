/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ShatteredChica_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.SetCanHeadRotate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Break Through Wall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End_Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::Break_Through_Wall(const struct FVector& Start_Position, const struct FVector& End_Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Break Through Wall");
		
		AShatteredChica_C_Break_Through_Wall_Params params {};
		params.Start_Position = Start_Position;
		params.End_Position = End_Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Spin Head
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChica_C::Spin_Head()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Spin Head");
		
		AShatteredChica_C_Spin_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Start Head Spin Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChica_C::Start_Head_Spin_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Start Head Spin Timer");
		
		AShatteredChica_C_Start_Head_Spin_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.On Head Spin Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChica_C::On_Head_Spin_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.On Head Spin Time");
		
		AShatteredChica_C_On_Head_Spin_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Stop Head Spin Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChica_C::Stop_Head_Spin_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Stop Head Spin Timer");
		
		AShatteredChica_C_Stop_Head_Spin_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.Stop Head Spin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredChica_C::Stop_Head_Spin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredChica.ShatteredChica_C.Stop Head Spin");
		
		AShatteredChica_C_Stop_Head_Spin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredChica.ShatteredChica_C.ExecuteUbergraph_ShatteredChica
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredChica_C::ExecuteUbergraph_ShatteredChica(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AShatteredChica_C.StaticClass
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


