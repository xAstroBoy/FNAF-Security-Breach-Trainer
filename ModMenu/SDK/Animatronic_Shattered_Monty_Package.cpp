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
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.HandDown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::HandDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.HandDown");
		
		UAnimatronic_Shattered_Monty_C_HandDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_Shattered_Monty_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.BlueprintUpdateAnimation");
		
		UAnimatronic_Shattered_Monty_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_Shattered_Monty_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_Shattered_Monty_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_Shattered_Monty_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.HeadAimEvent");
		
		UAnimatronic_Shattered_Monty_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.BlueprintBeginPlay");
		
		UAnimatronic_Shattered_Monty_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_L_Hand_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::AnimNotify_L_Hand_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_L_Hand_Down");
		
		UAnimatronic_Shattered_Monty_C_AnimNotify_L_Hand_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_R_Hand_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_Shattered_Monty_C::AnimNotify_R_Hand_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.AnimNotify_R_Hand_Down");
		
		UAnimatronic_Shattered_Monty_C_AnimNotify_R_Hand_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_Shattered_Monty_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.PoundDoorEvent");
		
		UAnimatronic_Shattered_Monty_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.ExecuteUbergraph_Animatronic_Shattered_Monty
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_Shattered_Monty_C::ExecuteUbergraph_Animatronic_Shattered_Monty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C.ExecuteUbergraph_Animatronic_Shattered_Monty");
		
		UAnimatronic_Shattered_Monty_C_ExecuteUbergraph_Animatronic_Shattered_Monty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimatronic_Shattered_Monty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_Shattered_Monty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_Shattered_Monty.Animatronic_Shattered_Monty_C");
		return ptr;
	}

}


