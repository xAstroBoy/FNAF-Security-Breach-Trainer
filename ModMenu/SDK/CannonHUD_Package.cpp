/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "CannonHUD_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CannonHUD.CannonHUD_C.Update Shots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ShotsRemaining                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCannonHUD_C::Update_Shots(int ShotsRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CannonHUD.CannonHUD_C.Update Shots");
		
		UCannonHUD_C_Update_Shots_Params params {};
		params.ShotsRemaining = ShotsRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CannonHUD.CannonHUD_C.ExecuteUbergraph_CannonHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCannonHUD_C::ExecuteUbergraph_CannonHUD(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CannonHUD.CannonHUD_C.ExecuteUbergraph_CannonHUD");
		
		UCannonHUD_C_ExecuteUbergraph_CannonHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCannonHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannonHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CannonHUD.CannonHUD_C");
		return ptr;
	}

}


