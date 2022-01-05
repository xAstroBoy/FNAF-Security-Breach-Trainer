/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "WI_InstructionCard_PAS_PutInEyes_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_InstructionCard_PAS_PutInEyes.WI_InstructionCard_PAS_PutInEyes_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_InstructionCard_PAS_PutInEyes_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_PutInEyes.WI_InstructionCard_PAS_PutInEyes_C.Tick");
		
		UWI_InstructionCard_PAS_PutInEyes_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_InstructionCard_PAS_PutInEyes.WI_InstructionCard_PAS_PutInEyes_C.ExecuteUbergraph_WI_InstructionCard_PAS_PutInEyes
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_InstructionCard_PAS_PutInEyes_C::ExecuteUbergraph_WI_InstructionCard_PAS_PutInEyes(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_PutInEyes.WI_InstructionCard_PAS_PutInEyes_C.ExecuteUbergraph_WI_InstructionCard_PAS_PutInEyes");
		
		UWI_InstructionCard_PAS_PutInEyes_C_ExecuteUbergraph_WI_InstructionCard_PAS_PutInEyes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_InstructionCard_PAS_PutInEyes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_InstructionCard_PAS_PutInEyes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_InstructionCard_PAS_PutInEyes.WI_InstructionCard_PAS_PutInEyes_C");
		return ptr;
	}

}


