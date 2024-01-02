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
	 * 		Name   -> Function TensionControl.TensionControl_C.GetDistVal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAIDistanceResult>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Dimension1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NavDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATensionControl_C::GetDistVal(TArray<struct FAIDistanceResult>* Array, int32_t Dimension1, bool Condition, float* NavDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionControl.TensionControl_C.GetDistVal");
		
		ATensionControl_C_GetDistVal_Params params {};
		params.Dimension1 = Dimension1;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.ReceiveTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.PlayStaffBotAlarmMusic
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.StaffbotMusicTimerExpired
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.StopStaffbotMusic
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.ResetSeenTime
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATensionControl_C::ExecuteUbergraph_TensionControl(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATensionControl_C.StaticClass
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


