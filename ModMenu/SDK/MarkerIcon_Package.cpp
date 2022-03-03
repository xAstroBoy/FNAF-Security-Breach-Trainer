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
	 * 		Name   -> Function MarkerIcon.MarkerIcon_C.Set Marker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMarkerIcon_C::Set_Marker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MarkerIcon.MarkerIcon_C.Set Marker");
		
		UMarkerIcon_C_Set_Marker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MarkerIcon.MarkerIcon_C.ExecuteUbergraph_MarkerIcon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMarkerIcon_C::ExecuteUbergraph_MarkerIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MarkerIcon.MarkerIcon_C.ExecuteUbergraph_MarkerIcon");
		
		UMarkerIcon_C_ExecuteUbergraph_MarkerIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMarkerIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMarkerIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MarkerIcon.MarkerIcon_C");
		return ptr;
	}

}


