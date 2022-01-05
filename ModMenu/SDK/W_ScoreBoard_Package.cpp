/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "W_ScoreBoard_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.GetCanMove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ScoreBoard_C::GetCanMove(bool* CanMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.GetCanMove");
		
		UW_ScoreBoard_C_GetCanMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanMove != nullptr)
			*CanMove = params.CanMove;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.CanMove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ScoreBoard_C::CanMove(bool New_Can_Move)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.CanMove");
		
		UW_ScoreBoard_C_CanMove_Params params {};
		params.New_Can_Move = New_Can_Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.StartRaceCountdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreBoard_C::StartRaceCountdown(float TimeTillStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.StartRaceCountdown");
		
		UW_ScoreBoard_C_StartRaceCountdown_Params params {};
		params.TimeTillStart = TimeTillStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.StartRace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_ScoreBoard_C::StartRace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.StartRace");
		
		UW_ScoreBoard_C_StartRace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.EndRace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_ScoreBoard_C::EndRace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.EndRace");
		
		UW_ScoreBoard_C_EndRace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UW_ScoreBoard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.Construct");
		
		UW_ScoreBoard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreBoard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.Tick");
		
		UW_ScoreBoard_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_ScoreBoard_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.GameEnd");
		
		UW_ScoreBoard_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function W_ScoreBoard.W_ScoreBoard_C.ExecuteUbergraph_W_ScoreBoard
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreBoard_C::ExecuteUbergraph_W_ScoreBoard(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreBoard.W_ScoreBoard_C.ExecuteUbergraph_W_ScoreBoard");
		
		UW_ScoreBoard_C_ExecuteUbergraph_W_ScoreBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UW_ScoreBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ScoreBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ScoreBoard.W_ScoreBoard_C");
		return ptr;
	}

}


