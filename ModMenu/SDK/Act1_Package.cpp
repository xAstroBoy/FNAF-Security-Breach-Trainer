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
	 * 		Name   -> Function Act1.Act1_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAct1_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.Timeline_0__FinishedFunc");
		
		AAct1_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAct1_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.Timeline_0__UpdateFunc");
		
		AAct1_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAct1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.ReceiveBeginPlay");
		
		AAct1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAct1_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.ReceiveTick");
		
		AAct1_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.Room01Trigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::Room01Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.Room01Trigger");
		
		AAct1_C_Room01Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.BridgeRoomTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::BridgeRoomTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.BridgeRoomTrigger");
		
		AAct1_C_BridgeRoomTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.BatRoomTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::BatRoomTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.BatRoomTrigger");
		
		AAct1_C_BatRoomTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.LargeRoomTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::LargeRoomTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.LargeRoomTrigger");
		
		AAct1_C_LargeRoomTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.LongRoomTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::LongRoomTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.LongRoomTrigger");
		
		AAct1_C_LongRoomTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.UnlightGraveTorches
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::UnlightGraveTorches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.UnlightGraveTorches");
		
		AAct1_C_UnlightGraveTorches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.OnGraveTorchLit_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::OnGraveTorchLit_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.OnGraveTorchLit_2");
		
		AAct1_C_OnGraveTorchLit_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.OnGraveTorchLit_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::OnGraveTorchLit_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.OnGraveTorchLit_3");
		
		AAct1_C_OnGraveTorchLit_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.OnGraveTorchLit_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::OnGraveTorchLit_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.OnGraveTorchLit_4");
		
		AAct1_C_OnGraveTorchLit_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.OnGraveTrochLit_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::OnGraveTrochLit_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.OnGraveTrochLit_5");
		
		AAct1_C_OnGraveTrochLit_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.OnGraveTrochLit_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::OnGraveTrochLit_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.OnGraveTrochLit_6");
		
		AAct1_C_OnGraveTrochLit_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.GraveyardTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::GraveyardTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.GraveyardTrigger");
		
		AAct1_C_GraveyardTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.LongRoomEnemySpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::LongRoomEnemySpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.LongRoomEnemySpawn");
		
		AAct1_C_LongRoomEnemySpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.PuzzleSolveSFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAct1_C::PuzzleSolveSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.PuzzleSolveSFX");
		
		AAct1_C_PuzzleSolveSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAct1_C::ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.ReceiveEndPlay");
		
		AAct1_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Act1.Act1_C.ExecuteUbergraph_Act1
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAct1_C::ExecuteUbergraph_Act1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Act1.Act1_C.ExecuteUbergraph_Act1");
		
		AAct1_C_ExecuteUbergraph_Act1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAct1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAct1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Act1.Act1_C");
		return ptr;
	}

}


