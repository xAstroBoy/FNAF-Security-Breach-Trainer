﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function ImpromptuHandrailBP.ImpromptuHandrailBP_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AImpromptuHandrailBP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ImpromptuHandrailBP.ImpromptuHandrailBP_C.UserConstructionScript");

	AImpromptuHandrailBP_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif