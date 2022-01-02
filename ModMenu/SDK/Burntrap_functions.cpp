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
//		Name   -> Function Burntrap.Burntrap_C.ApplyDammage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Dammage_Amount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurntrap_C::ApplyDammage(float Dammage_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Burntrap.Burntrap_C.ApplyDammage");

	ABurntrap_C_ApplyDammage_Params params {};
	params.Dammage_Amount = Dammage_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Burntrap.Burntrap_C.ExecuteUbergraph_Burntrap
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurntrap_C::ExecuteUbergraph_Burntrap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Burntrap.Burntrap_C.ExecuteUbergraph_Burntrap");

	ABurntrap_C_ExecuteUbergraph_Burntrap_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
