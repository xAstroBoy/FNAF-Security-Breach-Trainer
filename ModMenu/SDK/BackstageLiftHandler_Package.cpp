/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.GetCurrentLift
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.Setup Handler
	 * 		Flags  -> ()
	 */
	void ABackstageLiftHandler_C::SetupHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.Setup Handler");
		
		ABackstageLiftHandler_C_SetupHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.On Lift Stopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoveableLift_C*                             Lift                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::OnLiftStopped(class AMoveableLift_C* Lift)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.On Lift Stopped");
		
		ABackstageLiftHandler_C_OnLiftStopped_Params params {};
		params.Lift = Lift;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.Debind things
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndMiniGameType                                  EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageLiftHandler_C::Debindthings(E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageLiftHandler.BackstageLiftHandler_C.Debind things");
		
		ABackstageLiftHandler_C_Debindthings_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageLiftHandler.BackstageLiftHandler_C.ExecuteUbergraph_BackstageLiftHandler
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABackstageLiftHandler_C.StaticClass
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


