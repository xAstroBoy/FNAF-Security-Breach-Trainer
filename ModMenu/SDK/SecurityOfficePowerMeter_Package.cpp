/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SecurityOfficePowerMeter_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Power Display
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficePowerMeter_C::Update_Power_Display(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Power Display");
		
		ASecurityOfficePowerMeter_C_Update_Power_Display_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Remaining Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficePowerMeter_C::Update_Remaining_Time(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.Update Remaining Time");
		
		ASecurityOfficePowerMeter_C_Update_Remaining_Time_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficePowerMeter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveTick");
		
		ASecurityOfficePowerMeter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityOfficePowerMeter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ReceiveBeginPlay");
		
		ASecurityOfficePowerMeter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.OnGameStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficePowerMeter_C::OnGameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.OnGameStart");
		
		ASecurityOfficePowerMeter_C_OnGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.EndGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficePowerMeter_C::EndGame(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.EndGame");
		
		ASecurityOfficePowerMeter_C_EndGame_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ExecuteUbergraph_SecurityOfficePowerMeter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficePowerMeter_C::ExecuteUbergraph_SecurityOfficePowerMeter(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerMeter.SecurityOfficePowerMeter_C.ExecuteUbergraph_SecurityOfficePowerMeter");
		
		ASecurityOfficePowerMeter_C_ExecuteUbergraph_SecurityOfficePowerMeter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityOfficePowerMeter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityOfficePowerMeter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOfficePowerMeter.SecurityOfficePowerMeter_C");
		return ptr;
	}

}


