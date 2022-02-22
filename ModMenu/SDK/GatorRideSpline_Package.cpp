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
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.SetCartMovementSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGatorRideSpline_C::SetCartMovementSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.SetCartMovementSpeed");
		
		AGatorRideSpline_C_SetCartMovementSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGatorRideSpline_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.UserConstructionScript");
		
		AGatorRideSpline_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGatorRideSpline_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.ReceiveBeginPlay");
		
		AGatorRideSpline_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.StartMovingCarts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGatorRideSpline_C::StartMovingCarts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.StartMovingCarts");
		
		AGatorRideSpline_C_StartMovingCarts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.SetupCarts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGatorRideSpline_C::SetupCarts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.SetupCarts");
		
		AGatorRideSpline_C_SetupCarts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GatorRideSpline.GatorRideSpline_C.ExecuteUbergraph_GatorRideSpline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGatorRideSpline_C::ExecuteUbergraph_GatorRideSpline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.ExecuteUbergraph_GatorRideSpline");
		
		AGatorRideSpline_C_ExecuteUbergraph_GatorRideSpline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGatorRideSpline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGatorRideSpline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GatorRideSpline.GatorRideSpline_C");
		return ptr;
	}

}


