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
//		Name   -> Function ChicaVoiceInterface.ChicaVoiceInterface_C.OnListenStarted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UChicaVoiceInterface_C::OnListenStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChicaVoiceInterface.ChicaVoiceInterface_C.OnListenStarted");

	UChicaVoiceInterface_C_OnListenStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
