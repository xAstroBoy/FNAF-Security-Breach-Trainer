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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.PlayerPickedUpLaserGun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PickedUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALaserTag_Gun_Door_C::PlayerPickedUpLaserGun(bool PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.PlayerPickedUpLaserGun");
		
		ALaserTag_Gun_Door_C_PlayerPickedUpLaserGun_Params params {};
		params.PickedUp = PickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALaserTag_Gun_Door_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveBeginPlay");
		
		ALaserTag_Gun_Door_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaserTag_Gun_Door_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveTick");
		
		ALaserTag_Gun_Door_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ExecuteUbergraph_LaserTag_Gun_Door
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaserTag_Gun_Door_C::ExecuteUbergraph_LaserTag_Gun_Door(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ExecuteUbergraph_LaserTag_Gun_Door");
		
		ALaserTag_Gun_Door_C_ExecuteUbergraph_LaserTag_Gun_Door_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALaserTag_Gun_Door_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALaserTag_Gun_Door_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LaserTag_Gun_Door.LaserTag_Gun_Door_C");
		return ptr;
	}

}


