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
//		Name   -> Function BFL_Localization.BFL_Localization_C.ToggleLocalizationQA
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBFL_Localization_C::STATIC_ToggleLocalizationQA(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BFL_Localization.BFL_Localization_C.ToggleLocalizationQA");

	UBFL_Localization_C_ToggleLocalizationQA_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
