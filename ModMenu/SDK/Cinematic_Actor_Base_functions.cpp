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
//		Name   -> Function Cinematic_Actor_Base.Cinematic_Actor_Base_C.Set Up Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACinematic_Actor_Base_C::Set_Up_Materials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Base.Cinematic_Actor_Base_C.Set Up Materials");

	ACinematic_Actor_Base_C_Set_Up_Materials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
