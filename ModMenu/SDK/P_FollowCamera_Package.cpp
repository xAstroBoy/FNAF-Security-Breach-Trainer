/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "P_FollowCamera_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.PullBackTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_FollowCamera_C::PullBackTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.PullBackTimeline__FinishedFunc");
		
		AP_FollowCamera_C_PullBackTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.PullBackTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_FollowCamera_C::PullBackTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.PullBackTimeline__UpdateFunc");
		
		AP_FollowCamera_C_PullBackTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.RotateAround__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_FollowCamera_C::RotateAround__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.RotateAround__FinishedFunc");
		
		AP_FollowCamera_C_RotateAround__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.RotateAround__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_FollowCamera_C::RotateAround__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.RotateAround__UpdateFunc");
		
		AP_FollowCamera_C_RotateAround__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AP_FollowCamera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.ReceiveBeginPlay");
		
		AP_FollowCamera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_FollowCamera_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.ReceiveTick");
		
		AP_FollowCamera_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.Vaidation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AP_FollowCamera_C::Vaidation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.Vaidation");
		
		AP_FollowCamera_C_Vaidation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.MainTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AP_FollowCamera_C::MainTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.MainTick");
		
		AP_FollowCamera_C_MainTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.PullBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AP_FollowCamera_C::PullBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.PullBack");
		
		AP_FollowCamera_C_PullBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function P_FollowCamera.P_FollowCamera_C.ExecuteUbergraph_P_FollowCamera
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_FollowCamera_C::ExecuteUbergraph_P_FollowCamera(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_FollowCamera.P_FollowCamera_C.ExecuteUbergraph_P_FollowCamera");
		
		AP_FollowCamera_C_ExecuteUbergraph_P_FollowCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AP_FollowCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AP_FollowCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass P_FollowCamera.P_FollowCamera_C");
		return ptr;
	}

}


