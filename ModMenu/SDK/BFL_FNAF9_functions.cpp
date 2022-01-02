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
//		Name   -> Function BFL_FNAF9.BFL_FNAF9_C.PreMainMenuCleanup
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBFL_FNAF9_C::STATIC_PreMainMenuCleanup(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BFL_FNAF9.BFL_FNAF9_C.PreMainMenuCleanup");

	UBFL_FNAF9_C_PreMainMenuCleanup_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
