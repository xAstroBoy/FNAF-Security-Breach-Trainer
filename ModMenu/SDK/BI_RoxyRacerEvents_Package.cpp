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
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GetCanMove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RoxyRacerEvents_C::GetCanMove(bool* CanMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GetCanMove");
		
		UBI_RoxyRacerEvents_C_GetCanMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanMove != nullptr)
			*CanMove = params.CanMove;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBI_RoxyRacerEvents_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GameEnd");
		
		UBI_RoxyRacerEvents_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.EndRace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBI_RoxyRacerEvents_C::EndRace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.EndRace");
		
		UBI_RoxyRacerEvents_C_EndRace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBI_RoxyRacerEvents_C::StartRace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRace");
		
		UBI_RoxyRacerEvents_C_StartRace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRaceCountdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RoxyRacerEvents_C::StartRaceCountdown(float TimeTillStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRaceCountdown");
		
		UBI_RoxyRacerEvents_C_StartRaceCountdown_Params params {};
		params.TimeTillStart = TimeTillStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.CanMove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RoxyRacerEvents_C::CanMove(bool New_Can_Move)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.CanMove");
		
		UBI_RoxyRacerEvents_C_CanMove_Params params {};
		params.New_Can_Move = New_Can_Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBI_RoxyRacerEvents_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RoxyRacerEvents_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RoxyRacerEvents.BI_RoxyRacerEvents_C");
		return ptr;
	}

}


