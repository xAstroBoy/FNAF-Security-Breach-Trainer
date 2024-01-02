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
	 * 		Name   -> Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetWorldRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportPhysics                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_StaffBotBehavior_C::SetWorldRotation(const struct FRotator& Rotation, bool TeleportPhysics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetWorldRotation");
		
		UBPI_StaffBotBehavior_C_SetWorldRotation_Params params {};
		params.Rotation = Rotation;
		params.TeleportPhysics = TeleportPhysics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Sweep                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Teleport                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_StaffBotBehavior_C::SetWorldLocation(const struct FVector& Location, bool Sweep, bool Teleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetWorldLocation");
		
		UBPI_StaffBotBehavior_C_SetWorldLocation_Params params {};
		params.Location = Location;
		params.Sweep = Sweep;
		params.Teleport = Teleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.AddToWorldRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Sweep                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Teleport                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_StaffBotBehavior_C::AddToWorldRotation(const struct FRotator& Rotation, bool Sweep, bool Teleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.AddToWorldRotation");
		
		UBPI_StaffBotBehavior_C_AddToWorldRotation_Params params {};
		params.Rotation = Rotation;
		params.Sweep = Sweep;
		params.Teleport = Teleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetMoveToLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_StaffBotBehavior_C::SetMoveToLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.SetMoveToLocationAndRotation");
		
		UBPI_StaffBotBehavior_C_SetMoveToLocationAndRotation_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.OnEndGameBehavior
	 * 		Flags  -> ()
	 */
	void UBPI_StaffBotBehavior_C::OnEndGameBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_StaffBotBehavior.BPI_StaffBotBehavior_C.OnEndGameBehavior");
		
		UBPI_StaffBotBehavior_C_OnEndGameBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_StaffBotBehavior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_StaffBotBehavior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_StaffBotBehavior.BPI_StaffBotBehavior_C");
		return ptr;
	}

}


