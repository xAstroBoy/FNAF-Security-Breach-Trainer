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
//		Name   -> Function MazercizeTicket.MazercizeTicket_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMazercizeTicket_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MazercizeTicket.MazercizeTicket_C.OnCollect");

	AMazercizeTicket_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MazercizeTicket.MazercizeTicket_C.ExecuteUbergraph_MazercizeTicket
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMazercizeTicket_C::ExecuteUbergraph_MazercizeTicket(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MazercizeTicket.MazercizeTicket_C.ExecuteUbergraph_MazercizeTicket");

	AMazercizeTicket_C_ExecuteUbergraph_MazercizeTicket_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
