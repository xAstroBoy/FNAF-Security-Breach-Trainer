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
//		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFlashlightRechargeStationManager_C*         FlashlightManager                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MainGameGM_C::GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager");

	UBPI_MainGameGM_C_GetFlashlightManager_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FlashlightManager != nullptr)
		*FlashlightManager = params.FlashlightManager;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
