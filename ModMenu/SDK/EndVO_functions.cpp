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
//		Name   -> Function EndVO.EndVO_C.StayVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEndVO_C::StayVO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.StayVO");

	AEndVO_C_StayVO_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EndVO.EndVO_C.VannyVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEndVO_C::VannyVO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.VannyVO");

	AEndVO_C_VannyVO_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EndVO.EndVO_C.ExecuteUbergraph_EndVO
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndVO_C::ExecuteUbergraph_EndVO(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndVO.EndVO_C.ExecuteUbergraph_EndVO");

	AEndVO_C_ExecuteUbergraph_EndVO_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
