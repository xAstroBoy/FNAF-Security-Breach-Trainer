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
//		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.On Start
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_GatorGolf_C::On_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.On Start");

	AOGM_GatorGolf_C_On_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
