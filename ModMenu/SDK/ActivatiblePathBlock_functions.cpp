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
//		Name   -> Function ActivatiblePathBlock.ActivatiblePathBlock_C.IsPathBlocked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AActivatiblePathBlock_C::IsPathBlocked(bool* bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActivatiblePathBlock.ActivatiblePathBlock_C.IsPathBlocked");

	AActivatiblePathBlock_C_IsPathBlocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
