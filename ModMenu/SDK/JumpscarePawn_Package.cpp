/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AJumpscarePawn_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Timeline_0__FinishedFunc");
		
		AJumpscarePawn_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AJumpscarePawn_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Timeline_0__UpdateFunc");
		
		AJumpscarePawn_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AJumpscarePawn_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Timeline_1__FinishedFunc");
		
		AJumpscarePawn_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AJumpscarePawn_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Timeline_1__UpdateFunc");
		
		AJumpscarePawn_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Timeline_1__NewTrack_2__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AJumpscarePawn_C::Timeline_1__NewTrack_2__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Timeline_1__NewTrack_2__EventFunc");
		
		AJumpscarePawn_C_Timeline_1__NewTrack_2__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AJumpscarePawn_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1");
		
		AJumpscarePawn_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.On Jumpscare Kill Timer Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AJumpscarePawn_C::On_Jumpscare_Kill_Timer_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.On Jumpscare Kill Timer Up");
		
		AJumpscarePawn_C_On_Jumpscare_Kill_Timer_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AJumpscarePawn_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.ReceivePossessed");
		
		AJumpscarePawn_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AJumpscarePawn_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Stop");
		
		AJumpscarePawn_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.Possess Gregory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AJumpscarePawn_C::Possess_Gregory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.Possess Gregory");
		
		AJumpscarePawn_C_Possess_Gregory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AJumpscarePawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.ReceiveTick");
		
		AJumpscarePawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumpscarePawn.JumpscarePawn_C.ExecuteUbergraph_JumpscarePawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AJumpscarePawn_C::ExecuteUbergraph_JumpscarePawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumpscarePawn.JumpscarePawn_C.ExecuteUbergraph_JumpscarePawn");
		
		AJumpscarePawn_C_ExecuteUbergraph_JumpscarePawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AJumpscarePawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJumpscarePawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JumpscarePawn.JumpscarePawn_C");
		return ptr;
	}

}


