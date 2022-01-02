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
//		Name   -> Function BallCannonOffice.BallCannonOffice_C.Shot Fired
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonOffice_C::Shot_Fired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonOffice.BallCannonOffice_C.Shot Fired");

	ABallCannonOffice_C_Shot_Fired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonOffice.BallCannonOffice_C.ExecuteUbergraph_BallCannonOffice
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonOffice_C::ExecuteUbergraph_BallCannonOffice(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonOffice.BallCannonOffice_C.ExecuteUbergraph_BallCannonOffice");

	ABallCannonOffice_C_ExecuteUbergraph_BallCannonOffice_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
