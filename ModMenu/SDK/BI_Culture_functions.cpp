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
//		Name   -> Function BI_Culture.BI_Culture_C.OnCultureChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<fnaf9_ELocalizationCulture>            Culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_Culture_C::OnCultureChanged(TEnumAsByte<fnaf9_ELocalizationCulture> Culture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_Culture.BI_Culture_C.OnCultureChanged");

	UBI_Culture_C_OnCultureChanged_Params params {};
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
