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
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.GetCurrentLift
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABackstageOfficeLift_C*                      CurrentLift                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::GetCurrentLift(class ABackstageOfficeLift_C** CurrentLift)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.GetCurrentLift");
		
		ABackstageLiftHandler_C_GetCurrentLift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLift != nullptr)
			*CurrentLift = params.CurrentLift;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.Setup Handler
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageLiftHandler_C::Setup_Handler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.Setup Handler");
		
		ABackstageLiftHandler_C_Setup_Handler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.On Lift Stopped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoveableLift_C*                             Lift                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::On_Lift_Stopped(class AMoveableLift_C* Lift)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.On Lift Stopped");
		
		ABackstageLiftHandler_C_On_Lift_Stopped_Params params {};
		params.Lift = Lift;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABackstageLiftHandler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.ReceiveBeginPlay");
		
		ABackstageLiftHandler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.Debind things
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::Debind_things(E_EndMiniGameType_E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.Debind things");
		
		ABackstageLiftHandler_C_Debind_things_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.ExecuteUbergraph_BackstageLiftHandler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::ExecuteUbergraph_BackstageLiftHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.ExecuteUbergraph_BackstageLiftHandler");
		
		ABackstageLiftHandler_C_ExecuteUbergraph_BackstageLiftHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABackstageLiftHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackstageLiftHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BackstageLiftHandler.BackstageLiftHandler_C");
		return ptr;
	}

}


