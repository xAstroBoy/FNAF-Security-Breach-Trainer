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
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ULightAreaDoorComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaDoorComponent.LightAreaDoorComponent_C.ReceiveBeginPlay");
		
		ULightAreaDoorComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.On Area Change Finished
	 * 		Flags  -> ()
	 */
	void ULightAreaDoorComponent_C::OnAreaChangeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaDoorComponent.LightAreaDoorComponent_C.On Area Change Finished");
		
		ULightAreaDoorComponent_C_OnAreaChangeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.ExecuteUbergraph_LightAreaDoorComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightAreaDoorComponent_C::ExecuteUbergraph_LightAreaDoorComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaDoorComponent.LightAreaDoorComponent_C.ExecuteUbergraph_LightAreaDoorComponent");
		
		ULightAreaDoorComponent_C_ExecuteUbergraph_LightAreaDoorComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightAreaDoorComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightAreaDoorComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightAreaDoorComponent.LightAreaDoorComponent_C");
		return ptr;
	}

}


