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
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Cam_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASSD_Backstage_Office_C::SwitchCamera(int32_t Cam_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera");
		
		ASSD_Backstage_Office_C_SwitchCamera_Params params {};
		params.Cam_Index = Cam_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASSD_Backstage_Office_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveBeginPlay");
		
		ASSD_Backstage_Office_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASSD_Backstage_Office_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveTick");
		
		ASSD_Backstage_Office_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.OnDoorOverlapped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASSD_Backstage_Office_C::OnDoorOverlapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.OnDoorOverlapped");
		
		ASSD_Backstage_Office_C_OnDoorOverlapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ExecuteUbergraph_SSD_Backstage_Office
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASSD_Backstage_Office_C::ExecuteUbergraph_SSD_Backstage_Office(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.ExecuteUbergraph_SSD_Backstage_Office");
		
		ASSD_Backstage_Office_C_ExecuteUbergraph_SSD_Backstage_Office_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASSD_Backstage_Office_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASSD_Backstage_Office_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SSD_Backstage_Office.SSD_Backstage_Office_C");
		return ptr;
	}

}


