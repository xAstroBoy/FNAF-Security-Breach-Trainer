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
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CamIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASSD_Backstage_Office_C::SwitchCamera(int32_t CamIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera");
		
		ASSD_Backstage_Office_C_SwitchCamera_Params params {};
		params.CamIndex = CamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.OnDoorOverlapped
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SSD_Backstage_Office.SSD_Backstage_Office_C.ExecuteUbergraph_SSD_Backstage_Office
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASSD_Backstage_Office_C.StaticClass
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


