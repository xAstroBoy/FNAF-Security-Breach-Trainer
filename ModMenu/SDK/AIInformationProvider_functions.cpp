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
//		Name   -> Function AIInformationProvider.AIInformationProvider_C.RequestPlayerInformation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasValidInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAIInformationProvider_C::RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIInformationProvider.AIInformationProvider_C.RequestPlayerInformation");

	UAIInformationProvider_C_RequestPlayerInformation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerLocation != nullptr)
		*PlayerLocation = params.PlayerLocation;
	if (HasValidInfo != nullptr)
		*HasValidInfo = params.HasValidInfo;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
