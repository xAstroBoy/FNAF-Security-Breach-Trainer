/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ShatteredRoxyController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShatteredRoxyController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveBeginPlay");
		
		AShatteredRoxyController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredRoxyController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveTick");
		
		AShatteredRoxyController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredRoxyController.ShatteredRoxyController_C.On Sound Heard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SoundLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredRoxyController_C::On_Sound_Heard(const struct FVector& SoundLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredRoxyController.ShatteredRoxyController_C.On Sound Heard");
		
		AShatteredRoxyController_C_On_Sound_Heard_Params params {};
		params.SoundLocation = SoundLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredRoxyController.ShatteredRoxyController_C.Stop Investigating Sound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShatteredRoxyController_C::Stop_Investigating_Sound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredRoxyController.ShatteredRoxyController_C.Stop Investigating Sound");
		
		AShatteredRoxyController_C_Stop_Investigating_Sound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShatteredRoxyController.ShatteredRoxyController_C.ExecuteUbergraph_ShatteredRoxyController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShatteredRoxyController_C::ExecuteUbergraph_ShatteredRoxyController(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShatteredRoxyController.ShatteredRoxyController_C.ExecuteUbergraph_ShatteredRoxyController");
		
		AShatteredRoxyController_C_ExecuteUbergraph_ShatteredRoxyController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AShatteredRoxyController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShatteredRoxyController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredRoxyController.ShatteredRoxyController_C");
		return ptr;
	}

}


