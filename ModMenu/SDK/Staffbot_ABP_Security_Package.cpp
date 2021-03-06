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
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Security_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintUpdateAnimation");
		
		UStaffbot_ABP_Security_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStaffbot_ABP_Security_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay");
		
		UStaffbot_ABP_Security_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.AimHead_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AimHead                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Security_C::AimHead_Event(bool AimHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.AimHead_Event");
		
		UStaffbot_ABP_Security_C_AimHead_Event_Params params {};
		params.AimHead = AimHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Security_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.CanJumpscareEvent");
		
		UStaffbot_ABP_Security_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.JumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Security_C::JumpscareEvent(bool CanJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.JumpscareEvent");
		
		UStaffbot_ABP_Security_C_JumpscareEvent_Params params {};
		params.CanJumpscare = CanJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.ExecuteUbergraph_Staffbot_ABP_Security
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Security_C::ExecuteUbergraph_Staffbot_ABP_Security(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.ExecuteUbergraph_Staffbot_ABP_Security");
		
		UStaffbot_ABP_Security_C_ExecuteUbergraph_Staffbot_ABP_Security_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbot_ABP_Security_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_ABP_Security_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Security.Staffbot_ABP_Security_C");
		return ptr;
	}

}


