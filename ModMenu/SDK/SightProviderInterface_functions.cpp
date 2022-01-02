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
//		Name   -> Function SightProviderInterface.SightProviderInterface_C.GetSightComponent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             Sight                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USightProviderInterface_C::GetSightComponent(class USightComponent** Sight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SightProviderInterface.SightProviderInterface_C.GetSightComponent");

	USightProviderInterface_C_GetSightComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sight != nullptr)
		*Sight = params.Sight;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
