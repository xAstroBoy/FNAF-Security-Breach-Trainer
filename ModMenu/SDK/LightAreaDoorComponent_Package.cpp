/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "LightAreaDoorComponent_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.On Area Change Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULightAreaDoorComponent_C::On_Area_Change_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaDoorComponent.LightAreaDoorComponent_C.On Area Change Finished");
		
		ULightAreaDoorComponent_C_On_Area_Change_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LightAreaDoorComponent.LightAreaDoorComponent_C.ExecuteUbergraph_LightAreaDoorComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightAreaDoorComponent_C::ExecuteUbergraph_LightAreaDoorComponent(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULightAreaDoorComponent_C.StaticClass
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


