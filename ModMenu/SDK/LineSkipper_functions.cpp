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
//		Name   -> Function LineSkipper.LineSkipper_C.Skip Line
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALineSkipper_C::Skip_Line()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LineSkipper.LineSkipper_C.Skip Line");

	ALineSkipper_C_Skip_Line_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LineSkipper.LineSkipper_C.ExecuteUbergraph_LineSkipper
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALineSkipper_C::ExecuteUbergraph_LineSkipper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LineSkipper.LineSkipper_C.ExecuteUbergraph_LineSkipper");

	ALineSkipper_C_ExecuteUbergraph_LineSkipper_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
