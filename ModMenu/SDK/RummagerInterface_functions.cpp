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
//		Name   -> Function RummagerInterface.RummagerInterface_C.StopRummage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URummagerInterface_C::StopRummage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RummagerInterface.RummagerInterface_C.StopRummage");

	URummagerInterface_C_StopRummage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RummagerInterface.RummagerInterface_C.StartRummage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URummagerInterface_C::StartRummage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RummagerInterface.RummagerInterface_C.StartRummage");

	URummagerInterface_C_StartRummage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
