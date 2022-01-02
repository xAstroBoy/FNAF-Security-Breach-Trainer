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
//		Name   -> Function BPI_PauseUI.BPI_PauseUI_C.GetFocusButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PauseUI_C::GetFocusButton(class UButton** Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PauseUI.BPI_PauseUI_C.GetFocusButton");

	UBPI_PauseUI_C_GetFocusButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
