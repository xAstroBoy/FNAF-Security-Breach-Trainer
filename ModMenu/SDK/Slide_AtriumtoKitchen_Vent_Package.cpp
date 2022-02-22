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
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.GetInstructionOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void ASlide_AtriumtoKitchen_Vent_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.GetInstructionOverride");
		
		ASlide_AtriumtoKitchen_Vent_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASlide_AtriumtoKitchen_Vent_C::On_Slide_Entered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered");
		
		ASlide_AtriumtoKitchen_Vent_C_On_Slide_Entered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.FinishedSliding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASlide_AtriumtoKitchen_Vent_C::FinishedSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.FinishedSliding");
		
		ASlide_AtriumtoKitchen_Vent_C_FinishedSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.ExecuteUbergraph_Slide_AtriumtoKitchen_Vent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASlide_AtriumtoKitchen_Vent_C::ExecuteUbergraph_Slide_AtriumtoKitchen_Vent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.ExecuteUbergraph_Slide_AtriumtoKitchen_Vent");
		
		ASlide_AtriumtoKitchen_Vent_C_ExecuteUbergraph_Slide_AtriumtoKitchen_Vent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASlide_AtriumtoKitchen_Vent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASlide_AtriumtoKitchen_Vent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C");
		return ptr;
	}

}


