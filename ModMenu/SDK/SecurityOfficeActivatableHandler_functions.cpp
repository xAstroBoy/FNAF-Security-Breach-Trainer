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
//		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USecurityOfficeActivatableHandler_C::Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.Setup");

	USecurityOfficeActivatableHandler_C_Setup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.On Panel Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USecurityOfficeActivatableHandler_C::On_Panel_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.On Panel Activate");

	USecurityOfficeActivatableHandler_C_On_Panel_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.ExecuteUbergraph_SecurityOfficeActivatableHandler
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USecurityOfficeActivatableHandler_C::ExecuteUbergraph_SecurityOfficeActivatableHandler(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficeActivatableHandler.SecurityOfficeActivatableHandler_C.ExecuteUbergraph_SecurityOfficeActivatableHandler");

	USecurityOfficeActivatableHandler_C_ExecuteUbergraph_SecurityOfficeActivatableHandler_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
