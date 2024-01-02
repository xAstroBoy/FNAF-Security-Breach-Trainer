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
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.FinishedSliding
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered
	 * 		Flags  -> ()
	 */
	void ASlide_AtriumtoKitchen_Vent_C::OnSlideEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered");
		
		ASlide_AtriumtoKitchen_Vent_C_OnSlideEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.ExecuteUbergraph_Slide_AtriumtoKitchen_Vent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASlide_AtriumtoKitchen_Vent_C.StaticClass
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


