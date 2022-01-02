// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.UpdateWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_SecurityScreenDisplay_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.UpdateWidget");

	UWI_SecurityScreenDisplay_C_UpdateWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_SecurityScreenDisplay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.PreConstruct");

	UWI_SecurityScreenDisplay_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.ExecuteUbergraph_WI_SecurityScreenDisplay
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_SecurityScreenDisplay_C::ExecuteUbergraph_WI_SecurityScreenDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.ExecuteUbergraph_WI_SecurityScreenDisplay");

	UWI_SecurityScreenDisplay_C_ExecuteUbergraph_WI_SecurityScreenDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
