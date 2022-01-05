/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "TensionControl_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.GetDistVal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FAIDistanceResult>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int                                                Dimension_1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NavDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATensionControl_C::GetDistVal(TArray<struct FAIDistanceResult>* Array, int Dimension_1, bool Condition, float* NavDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.GetDistVal");
		
		ATensionControl_C_GetDistVal_Params params {};
		params.Dimension_1 = Dimension_1;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (NavDistance != nullptr)
			*NavDistance = params.NavDistance;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATensionControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.ReceiveBeginPlay");
		
		ATensionControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATensionControl_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.ReceiveTick");
		
		ATensionControl_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.PlayStaffBotAlarmMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATensionControl_C::PlayStaffBotAlarmMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.PlayStaffBotAlarmMusic");
		
		ATensionControl_C_PlayStaffBotAlarmMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.StaffbotMusicTimerExpired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATensionControl_C::StaffbotMusicTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.StaffbotMusicTimerExpired");
		
		ATensionControl_C_StaffbotMusicTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.StopStaffbotMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATensionControl_C::StopStaffbotMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.StopStaffbotMusic");
		
		ATensionControl_C_StopStaffbotMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.ResetSeenTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATensionControl_C::ResetSeenTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.ResetSeenTime");
		
		ATensionControl_C_ResetSeenTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControl
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATensionControl_C::ExecuteUbergraph_TensionControl(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControl");
		
		ATensionControl_C_ExecuteUbergraph_TensionControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATensionControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATensionControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TensionControl.TensionControl_C");
		return ptr;
	}

}


