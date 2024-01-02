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
	 * 		Name   -> Function DecalWidget_01.DecalWidget_01_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TextToChange                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDecalWidget_01_C::Update(const class FText& TextToChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DecalWidget_01.DecalWidget_01_C.Update");
		
		UDecalWidget_01_C_Update_Params params {};
		params.TextToChange = TextToChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DecalWidget_01.DecalWidget_01_C.ExecuteUbergraph_DecalWidget_01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDecalWidget_01_C::ExecuteUbergraph_DecalWidget_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DecalWidget_01.DecalWidget_01_C.ExecuteUbergraph_DecalWidget_01");
		
		UDecalWidget_01_C_ExecuteUbergraph_DecalWidget_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecalWidget_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecalWidget_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DecalWidget_01.DecalWidget_01_C");
		return ptr;
	}

}


