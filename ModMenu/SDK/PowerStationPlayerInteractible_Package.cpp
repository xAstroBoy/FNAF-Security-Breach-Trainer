/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PowerStationPlayerInteractible_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewLocation");
		
		APowerStationPlayerInteractible_C_GetInteractViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewAngles");
		
		APowerStationPlayerInteractible_C_GetInteractViewAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnglesToCheck != nullptr)
			*AnglesToCheck = params.AnglesToCheck;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetHUDInstruction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void APowerStationPlayerInteractible_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetHUDInstruction");
		
		APowerStationPlayerInteractible_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.InteractIgnoresTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APowerStationPlayerInteractible_C::InteractIgnoresTrace(bool* IgnoreTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.InteractIgnoresTrace");
		
		APowerStationPlayerInteractible_C_InteractIgnoresTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreTrace != nullptr)
			*IgnoreTrace = params.IgnoreTrace;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInstructionOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void APowerStationPlayerInteractible_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInstructionOverride");
		
		APowerStationPlayerInteractible_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.UpdateUIOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APowerStationPlayerInteractible_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.UpdateUIOnTick");
		
		APowerStationPlayerInteractible_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractibleType");
		
		APowerStationPlayerInteractible_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.CanPlayerInteract");
		
		APowerStationPlayerInteractible_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteractCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APowerStationPlayerInteractible_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteractCancel");
		
		APowerStationPlayerInteractible_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverEnter");
		
		APowerStationPlayerInteractible_C_OnPlayerHoverEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::OnPlayerHoverExit(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverExit");
		
		APowerStationPlayerInteractible_C_OnPlayerHoverExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteract");
		
		APowerStationPlayerInteractible_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.Setup From Load
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APowerStationPlayerInteractible_C::Setup_From_Load()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.Setup From Load");
		
		APowerStationPlayerInteractible_C_Setup_From_Load_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.On Power Station Event Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APowerStationPlayerInteractible_C::On_Power_Station_Event_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.On Power Station Event Finished");
		
		APowerStationPlayerInteractible_C_On_Power_Station_Event_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour5VO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APowerStationPlayerInteractible_C::StartHour5VO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour5VO");
		
		APowerStationPlayerInteractible_C_StartHour5VO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour6VO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APowerStationPlayerInteractible_C::StartHour6VO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour6VO");
		
		APowerStationPlayerInteractible_C_StartHour6VO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.ExecuteUbergraph_PowerStationPlayerInteractible
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationPlayerInteractible_C::ExecuteUbergraph_PowerStationPlayerInteractible(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.ExecuteUbergraph_PowerStationPlayerInteractible");
		
		APowerStationPlayerInteractible_C_ExecuteUbergraph_PowerStationPlayerInteractible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APowerStationPlayerInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APowerStationPlayerInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationPlayerInteractible.PowerStationPlayerInteractible_C");
		return ptr;
	}

}


