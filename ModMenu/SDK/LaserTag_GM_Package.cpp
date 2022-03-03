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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.SubtractPlayerScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Score_Change                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaserTag_GM_C::SubtractPlayerScore(int32_t Score_Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.SubtractPlayerScore");
		
		ALaserTag_GM_C_SubtractPlayerScore_Params params {};
		params.Score_Change = Score_Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.Close LasertagDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALaserTag_GM_C::Close_LasertagDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.Close LasertagDoor");
		
		ALaserTag_GM_C_Close_LasertagDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.initializeCountdownTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALaserTag_GM_C::initializeCountdownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.initializeCountdownTimer");
		
		ALaserTag_GM_C_initializeCountdownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALaserTag_GM_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.ReceiveBeginPlay");
		
		ALaserTag_GM_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.ResetCharacterLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALaserTag_GM_C::ResetCharacterLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.ResetCharacterLocation");
		
		ALaserTag_GM_C_ResetCharacterLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.LaserTagInSession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALaserTag_GM_C::LaserTagInSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.LaserTagInSession");
		
		ALaserTag_GM_C_LaserTagInSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.Start Demo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALaserTag_GM_C::Start_Demo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.Start Demo");
		
		ALaserTag_GM_C_Start_Demo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LaserTag_GM.LaserTag_GM_C.ExecuteUbergraph_LaserTag_GM
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaserTag_GM_C::ExecuteUbergraph_LaserTag_GM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_GM.LaserTag_GM_C.ExecuteUbergraph_LaserTag_GM");
		
		ALaserTag_GM_C_ExecuteUbergraph_LaserTag_GM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALaserTag_GM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALaserTag_GM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LaserTag_GM.LaserTag_GM_C");
		return ptr;
	}

}


