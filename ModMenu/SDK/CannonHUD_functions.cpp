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
//		Name   -> Function CannonHUD.CannonHUD_C.Update Shots
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ShotsRemaining                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCannonHUD_C::Update_Shots(int ShotsRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CannonHUD.CannonHUD_C.Update Shots");

	UCannonHUD_C_Update_Shots_Params params {};
	params.ShotsRemaining = ShotsRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CannonHUD.CannonHUD_C.ExecuteUbergraph_CannonHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCannonHUD_C::ExecuteUbergraph_CannonHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CannonHUD.CannonHUD_C.ExecuteUbergraph_CannonHUD");

	UCannonHUD_C_ExecuteUbergraph_CannonHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
