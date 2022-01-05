/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PlaySequenceTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_D36A04E9448D6961DBDCAA8A29E6DAD3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::OnFailure_D36A04E9448D6961DBDCAA8A29E6DAD3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_D36A04E9448D6961DBDCAA8A29E6DAD3");
		
		APlaySequenceTrigger_C_OnFailure_D36A04E9448D6961DBDCAA8A29E6DAD3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_D36A04E9448D6961DBDCAA8A29E6DAD3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::OnSuccess_D36A04E9448D6961DBDCAA8A29E6DAD3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_D36A04E9448D6961DBDCAA8A29E6DAD3");
		
		APlaySequenceTrigger_C_OnSuccess_D36A04E9448D6961DBDCAA8A29E6DAD3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_1FFE06E54298CB19BCF15CA245E7FD55
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_C::OnFailure_1FFE06E54298CB19BCF15CA245E7FD55(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_1FFE06E54298CB19BCF15CA245E7FD55");
		
		APlaySequenceTrigger_C_OnFailure_1FFE06E54298CB19BCF15CA245E7FD55_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_1FFE06E54298CB19BCF15CA245E7FD55
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_C::OnSuccess_1FFE06E54298CB19BCF15CA245E7FD55(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_1FFE06E54298CB19BCF15CA245E7FD55");
		
		APlaySequenceTrigger_C_OnSuccess_1FFE06E54298CB19BCF15CA245E7FD55_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnTriggered");
		
		APlaySequenceTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.Take Over Camera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::Take_Over_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.Take Over Camera");
		
		APlaySequenceTrigger_C_Take_Over_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::On_Sequence_Stop_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop Event");
		
		APlaySequenceTrigger_C_On_Sequence_Stop_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Finished Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::On_Sequence_Finished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Finished Event");
		
		APlaySequenceTrigger_C_On_Sequence_Finished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.ReceiveBeginPlay");
		
		APlaySequenceTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Starting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::On_Sequence_Starting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Starting");
		
		APlaySequenceTrigger_C_On_Sequence_Starting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnCheckpointLoad");
		
		APlaySequenceTrigger_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.ExecuteUbergraph_PlaySequenceTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaySequenceTrigger_C::ExecuteUbergraph_PlaySequenceTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.ExecuteUbergraph_PlaySequenceTrigger");
		
		APlaySequenceTrigger_C_ExecuteUbergraph_PlaySequenceTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APlaySequenceTrigger_C::On_Sequence_Stop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop__DelegateSignature");
		
		APlaySequenceTrigger_C_On_Sequence_Stop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlaySequenceTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaySequenceTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaySequenceTrigger.PlaySequenceTrigger_C");
		return ptr;
	}

}


