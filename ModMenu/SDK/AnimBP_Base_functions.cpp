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
//		Name   -> Function AnimBP_Base.AnimBP_Base_C.enable
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAnimBP_Base_C::enable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimBP_Base.AnimBP_Base_C.enable");

	AAnimBP_Base_C_enable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimBP_Base.AnimBP_Base_C.Disable
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAnimBP_Base_C::Disable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimBP_Base.AnimBP_Base_C.Disable");

	AAnimBP_Base_C_Disable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimBP_Base.AnimBP_Base_C.ExecuteUbergraph_AnimBP_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnimBP_Base_C::ExecuteUbergraph_AnimBP_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimBP_Base.AnimBP_Base_C.ExecuteUbergraph_AnimBP_Base");

	AAnimBP_Base_C_ExecuteUbergraph_AnimBP_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
